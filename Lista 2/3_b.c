/*

3.  Localize a primeira raiz não-trivial de 𝑠𝑒𝑛 𝑥 = 𝑥^3, onde x está em radianos.

(b) e a bissecção com o intervalo inicial de 0,5 a 1. Faça os cálculos até que 𝜀𝑎 
    seja menor do que 𝜀𝑠 = 2%. Faça também uma verificação de erro substituindo 
    sua resposta final na equação original.

Resposta: Raiz = 0.921875
          Erro = 0.013277

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol, fx;
    int nit;

    //intervalo inicial de 0,5 a 1
    xl=0.5;
    xu=1;
    xr = (float)((xl+xu)/2);
    xra = xu;

    //𝑓(𝑥) = x^3 - sin(x):
    fxl = pow(xl, 3) - sin(xl);
    fxu = pow(xu, 3) - sin(xu);
    fxr = pow(xr, 3) - sin(xr);

    //𝜀𝑠 = 2%
    tol=0.02;
    nit=1;
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
            fxr = pow(xr, 3) - sin(xr);
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = pow(xr, 3) - sin(xr);
            erro = fabs((float)((xr-xra)/xr));

        }

        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }

    printf("Valor estimado, com %d iteracoes da raiz: %f\n",nit,xr);

    fx = pow(0.921875, 3) - sin(0.921875);
    printf("Substituindo o resultado na equacao original: f(0.921875) = %f", fx);

    return(0);
    
}