//#Determine a raiz real da equação f(x) = 5x³ - 5x² + 6x - 2:
//(b) Usando o método da bissecção para localizar a raiz. Use as aproximações iniciais
//    xl = 0 e xu = 1 e itere até que o erro estimado Ea fique abaixo de um nível
//    Es = 10%
//
//Resposta: 

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    xl=0;
    xu=1;
    fxl = 5*pow(xl,3)-5*pow(xl,2)+6*xl-2;
    fxu = 5*pow(xu,3)-5*pow(xu,2)+6*xu-2;
    nit=1;
    tol=0.1;
    xr = (float)((xl+xu)/2);
    fxr = 5*pow(xr,3)-5*pow(xr,2)+6*xr-2;
    xra = xu;
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