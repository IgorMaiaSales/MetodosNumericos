/*

4.  Determine a raiz real positiva de 𝑙𝑛(𝑥^4) = 0,7

(a)  usando três iterações do método da bissecção, com aproximações iniciais 𝑥𝑙 = 0,5 e 𝑥𝑢 = 2

Resposta: Raiz = 0.687500

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol, fx;
    int nit;

    //aproximações iniciais 𝑥𝑙 = 0,5 e 𝑥𝑢 = 2
    xl=0.5;
    xu=2;
    xr = (float)((xl+xu)/2);
    xra = xu;

    //𝑓(𝑥) = 𝑙𝑛(𝑥^4) - 0,7
    fxl = log(pow(xl, 4)) - 0.7;
    fxu = log(pow(xu, 4)) - 0.7;
    fxr = log(pow(xr, 4)) - 0.7;

    nit = 1;
    erro = fabs((float)((xr-xra)/xr));


    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    do{
        xra=xr;
        nit++;

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
    }while (nit < 3);

    printf("Valor estimado, com %d iteracoes da raiz: %f\n",nit,xr);
    return(0);
    
}