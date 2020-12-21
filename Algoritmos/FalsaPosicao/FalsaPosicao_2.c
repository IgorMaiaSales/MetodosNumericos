#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x)=2x³-cos(x+1)-3

float xl, xu, xr, xra, fxl, fxu, fxr, erro;
float tol;
int nit;
// Intervalo inicial [a,b]
xl=-1;
xu=2;
fxl = 2*pow(xl,3)-cos(xl+1)-3;
fxu = 2*pow(xu,3)-cos(xu+1)-3;
nit=1;
tol=0.01;
xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
fxr = 2*pow(xr,3)-cos(xr+1)-3;
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
        xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
        fxr = 2*pow(xr,3)-cos(xr+1)-3;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = 2*pow(xr,3)-cos(xr+1)-3;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado com metodo da falsa posicao, com %d iterações da raiz: %f\n\n",nit,xr);



xl=-1;
xu=2;
fxl = 2*pow(xl,3)-cos(xl+1)-3;
fxu = 2*pow(xu,3)-cos(xu+1)-3;
nit=1;
tol=0.01;
xr = (float)((xl+xu)/2);
fxr = 2*pow(xr,3)-cos(xr+1)-3;
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
        fxr = 2*pow(xr,3)-cos(xr+1)-3;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = 2*pow(xr,3)-cos(xr+1)-3;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado com metodo da bisseccao, com %d iterações da raiz: %f\n\n",nit,xr);

return(0);

}
