/*

2.  Determine a raiz real de 𝑓(𝑥) = −25 + 82𝑥 − 90𝑥^2 + 44𝑥^3 − 8𝑥^4 + 0,7𝑥^5:

(b) Usando o método da bissecção para determinar a raiz até 𝜀𝑠 = 10%. Use as
    aproximações iniciais 𝑥𝑙 = 0,5 e 𝑥𝑢 = 1,0.

Resposta: 0.531250

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    //𝑥𝑙 = 0,5 e 𝑥𝑢 = 1,0
    xl=0.5;
    xu=1;
    xr = (float)((xl+xu)/2);
    xra = xu;

    //𝑓(𝑥) = −25 + 82𝑥 − 90𝑥^2 + 44𝑥^3 − 8𝑥^4 + 0,7𝑥^5:
    fxl = - 25 + 82*xl - 90*pow(xl, 2) + 44*pow(xl, 3) - 8*pow(xl, 4) + 0.7*pow(xl, 5);
    fxu = - 25 + 82*xu - 90*pow(xu, 2) + 44*pow(xu, 3) - 8*pow(xu, 4) + 0.7*pow(xu, 5);
    fxr = - 25 + 82*xr - 90*pow(xr, 2) + 44*pow(xr, 3) - 8*pow(xr, 4) + 0.7*pow(xr, 5);

    nit=1;
    tol=0.1;
    erro = fabs((float)((xr-xra)/xr));


    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    while (erro >= tol){
        xra=xr;
        nit=nit+1;

        if (fxl*fxr < 0){

            xu=xr;
            fxu=fxr;
            xr = (float)((xl+xu)/2);
            fxr = 5*pow(xr,3)-5*pow(xr,2)+6*xr-2;
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = 5*pow(xr,3)-5*pow(xr,2)+6*xr-2;
            erro = fabs((float)((xr-xra)/xr));

        }

        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }

    printf("Valor estimado, com %d iteracoes da raiz: %f",nit,xr);
    return(0);

}