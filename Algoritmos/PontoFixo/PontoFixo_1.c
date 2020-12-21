#include<stdio.h>
#include<math.h>

int main(){
// Achar a raiz da função f(x) = x²+x-6

float x0,xr,phixr, erro;
float tol;
int nit,maxiter;
// Intervalo inicial [a,b]
x0=0.05;
xr=x0;
phixr=6-pow(xr,2);
maxiter=20;
nit=1;
erro = fabs((float)((phixr-xr)/phixr));
printf("xr phixr erro\n");
printf("%f %f %f \n",xr,phixr,erro);
while (erro >= tol && nit <= maxiter){
    xr=phixr;
    phixr=6-pow(xr,2);
    erro = fabs((float)((phixr-xr)/phixr));
    nit=nit+1;

    printf("%f %f %f \n",xr,phixr,erro);
}


return(0);

}
