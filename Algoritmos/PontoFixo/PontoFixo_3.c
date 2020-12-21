#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x) = x²+x-6

float x0,xr,phixr, erro;
float tol;
int nit,maxiter;
// Intervalo inicial [a,b]
x0=-2;
xr=x0;
phixr=pow(6-xr,0.5);
maxiter=20;
nit=1;
tol=0.001;
erro = fabs((float)((phixr-xr)/phixr));
printf("Funcao 1\n\n");
printf("xr phixr erro\n");
printf("%f %f %f \n",xr,phixr,erro);
while (erro >= tol && nit <= maxiter){
    xr=phixr;
    phixr=pow(6-xr,0.5);
    erro = fabs((float)((phixr-xr)/phixr));
    nit=nit+1;

    printf("%f %f %f \n",xr,phixr,erro);
}

printf("\n\n");
x0=-2;
xr=x0;
phixr=(float)(6/xr)-1;
maxiter=20;
nit=1;
tol=0.001;
erro = fabs((float)((phixr-xr)/phixr));
printf("Funcao 2\n\n");
printf("xr phixr erro\n");
printf("%f %f %f \n",xr,phixr,erro);
while (erro >= tol && nit <= maxiter){
    xr=phixr;
    phixr=(float)(6/xr)-1;
    erro = fabs((float)((phixr-xr)/phixr));
    nit=nit+1;

    printf("%f %f %f \n",xr,phixr,erro);
}


printf("\n\n");
x0=-2;
xr=x0;
phixr=(float)(6/(xr+1));
maxiter=20;
nit=1;
tol=0.001;
erro = fabs((float)((phixr-xr)/phixr));
printf("Funcao 3\n\n");
printf("xr phixr erro\n");
printf("%f %f %f \n",xr,phixr,erro);
while (erro >= tol && nit <= maxiter){
    xr=phixr;
    phixr=(float)(6/(xr+1));
    erro = fabs((float)((phixr-xr)/phixr));
    nit=nit+1;

    printf("%f %f %f \n",xr,phixr,erro);
}


return(0);

}
