/*

2.  Determine a raiz real de 𝑓(𝑥) = −25 + 82𝑥 − 90𝑥^2 + 44𝑥^3 − 8𝑥^4 + 0,7𝑥^5:

(c) Faça os mesmos cálculos do item anterior, mas use o método da falsa posição e
    𝜀𝑠 = 0,2%.

Resposta: 0.580537

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    //aproximações iniciais 𝑥𝑙 = 0,5 e 𝑥𝑢 = 1,0
    xl=0.5;
    xu=1;

    //𝑓(𝑥) = −25 + 82𝑥 − 90𝑥^2 + 44𝑥^3 − 8𝑥^4 + 0,7𝑥^5:
    fxl = - 25 + 82*xl - 90*pow(xl, 2) + 44*pow(xl, 3) - 8*pow(xl, 4) + 0.7*pow(xl, 5);
    fxu = - 25 + 82*xu - 90*pow(xu, 2) + 44*pow(xu, 3) - 8*pow(xu, 4) + 0.7*pow(xu, 5);

    xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
    xra = xu;
    fxr = - 25 + 82*xr - 90*pow(xr, 2) + 44*pow(xr, 3) - 8*pow(xr, 4) + 0.7*pow(xr, 5);

    nit=1;
    tol=0.02;
    erro = fabs((float)((xr-xra)/xr));

    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    while (erro >= tol){
        xra=xr;
        nit=nit+1;
        if (fxl*fxr < 0){

            xu=xr;
            fxu=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = - 25 + 82*xr - 90*pow(xr, 2) + 44*pow(xr, 3) - 8*pow(xr, 4) + 0.7*pow(xr, 5);
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = - 25 + 82*xr - 90*pow(xr, 2) + 44*pow(xr, 3) - 8*pow(xr, 4) + 0.7*pow(xr, 5);
            erro = fabs((float)((xr-xra)/xr));

        }
        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }

    printf("Valor estimado com metodo da falsa posicao, com %d iteracoes da raiz: %f\n",nit,xr);

}