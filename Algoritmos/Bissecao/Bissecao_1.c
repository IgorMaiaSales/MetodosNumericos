#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x)=5x³-5x²+6x-2

float xl, xu, xr, xra, fxl, fxu, fxr, erro;
float tol;
int nit;
// Intervalo inicial [a,b]
xl=0;
xu=1;
fxl = 5*pow(xl,3)-5*pow(xl,2)+6*xl-2;
fxu = 5*pow(xu,3)-5*pow(xu,2)+6*xu-2;
nit=1;
tol=0.00001;
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

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = 5*pow(xr,3)-5*pow(xr,2)+6*xr-2;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado, com %d iterações da raiz: %f",nit,xr);
return(0);

}
