/*

6.  Encontre a raiz quadrada positiva de 18 usando o método da falsa posição até
    𝜀𝑠 = 0,5%. Use aproximações iniciais 𝑥𝑙 = 4 e 𝑥𝑢 = 5.

Resposta: 4.240964

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    //aproximações iniciais 𝑥𝑙 = 4 e 𝑥𝑢 = 5
    xl=4;
    xu=5;

    //𝑓(𝑥) = x² - 18
    fxl = pow(xl, 2) - 18;
    fxu = pow(xu, 2) - 18;

    xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
    xra = xu;
    fxr = pow(xr, 2) - 18;

    //𝜀𝑠 = 0,5%.
    tol=0.005;
    erro = fabs((float)((xr-xra)/xr));
    nit=1;

    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    while (erro >= tol){
        xra=xr;
        nit=nit+1;
        if (fxl*fxr < 0){

            xu=xr;
            fxu=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = pow(xr, 2) - 18;
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = pow(xr, 2) - 18;
            erro = fabs((float)((xr-xra)/xr));

        }
        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }

    printf("Valor estimado com metodo da falsa posicao, com %d iteracoes da raiz: %f\n",nit,xr);

}