#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x)=x³-x²-2x+1

float xl, xu, xr, xra, fxl, fxu, fxr, erro;
float tol;
int nit;

// Intervalo inicial [a,b]
xl = -1000;
xu = -999;
fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
fxu = pow(xu,3)-pow(xu,2)-2*xu+1;
while (fxl*fxu > 0){
    xl=xl+1;
    xu=xu+1;
    fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
    fxu = pow(xu,3)-pow(xu,2)-2*xu+1;
}
printf("Primeiro intervalo identificado: [%f %f]\n",xl,xu);

tol=0.001;
nit=1;
xr = (float)((xl+xu)/2);
fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
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
        fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado, com %d iterações da raiz: %f",nit,xr);

xl=xu;
xu=xu+1;
fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
fxu = pow(xu,3)-pow(xu,2)-2*xu+1;

while (fxl*fxu > 0){
    xl=xl+1;
    xu=xu+1;
    fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
    fxu = pow(xu,3)-pow(xu,2)-2*xu+1;
}
printf("\n\nSegundo intervalo identificado: [%f %f]\n",xl,xu);

tol=0.001;
nit=1;
xr = (float)((xl+xu)/2);
fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
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
        fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado, com %d iterações da raiz: %f",nit,xr);



xl=xu;
xu=xu+1;
fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
fxu = pow(xu,3)-pow(xu,2)-2*xu+1;

while (fxl*fxu > 0){
    xl=xl+1;
    xu=xu+1;
    fxl = pow(xl,3)-pow(xl,2)-2*xl+1;
    fxu = pow(xu,3)-pow(xu,2)-2*xu+1;
}
printf("\n\nTerceiro intervalo identificado: [%f %f]\n",xl,xu);

tol=0.001;
nit=1;
xr = (float)((xl+xu)/2);
fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
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
        fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
        erro = fabs((float)((xr-xra)/xr));

    }

    else{
            xl=xr;
            fxl=fxr;
            xr = (float)((xl+xu)/2);
            fxr = pow(xr,3)-pow(xr,2)-2*xr+1;
            erro = fabs((float)((xr-xra)/xr));

    }
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
}

printf("Valor estimado, com %d iterações da raiz: %f",nit,xr);


return(0);

}
