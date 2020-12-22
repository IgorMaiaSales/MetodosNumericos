/*

4.  Determine a raiz real positiva de 𝑙𝑛(𝑥^4) = 0,7

(b) usando três iterações do método da falsa posição, com as mesmas aproximações iniciais que
    em (a). Compare os erros relativos aproximados ao final das iterações entre os dois métodos.

Resposta: Raiz = 1.062500

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    //aproximações iniciais 𝑥𝑙 = 0,5 e 𝑥𝑢 = 2
    xl=0.5;
    xu=2;

    //𝑓(𝑥) = 𝑙𝑛(𝑥^4) - 0,7
    fxl = log(pow(xl, 4)) - 0.7;
    fxu = log(pow(xu, 4)) - 0.7;

    xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
    xra = xu;
    fxr = log(pow(xr, 4)) - 0.7;

    nit=1;
    erro = fabs((float)((xr-xra)/xr));

    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    do{
        xra=xr;
        nit=nit+1;

        if (fxl*fxr < 0){

            xu=xr;
            fxu=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = log(pow(xr, 4)) - 0.7;
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = log(pow(xr, 4)) - 0.7;
            erro = fabs((float)((xr-xra)/xr));

        }
        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }while (nit < 3);

    printf("Valor estimado com metodo da falsa posicao, com %d iteracoes da raiz: %f\n",nit,xr);
    return(0);
    
}