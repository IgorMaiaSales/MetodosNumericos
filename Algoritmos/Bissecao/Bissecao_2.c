#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x)=x³-9x+3

float xl, xu, xr, xra, fxl, fxu, fxr, erro;
float tol;
int nit;
// Intervalo inicial [a,b]
xl=0;
xu=1;
fxl = pow(xl,3)-9*xl+3;
fxu = pow(xu,3)-9*xu+3;
nit=1;
tol=0.001;
xr = (float)((xl+xu)/2);
fxr = pow(xr,3)-9*xr+3;
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
        fxr = pow(xr,3)-9*xr+3;;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = pow(xr,3)-9*xr+3;;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado, com %d iterações da raiz: %f",nit,xr);
return(0);

}
