/*

5.  Determine a raiz real de 𝑓(𝑥) = (0,8 − 0,3𝑥)/𝑥:

(c) Usando três iterações do método da falsa posição e aproximações iniciais 1 e
    3. Calcule o erro aproximado (𝜀𝑎) e o erro verdadeiro (𝜀𝑣) depois de cada
    iteração. Há algum problema com o resultado?

Resposta: 2.748047

*/

#include <stdio.h>
#include <math.h>

int main(){

    float xl, xu, xr, xra, fxl, fxu, fxr, erro, tol;
    int nit;

    //aproximações iniciais 1 e 3
    xl=1;
    xu=3;

    //𝑓(𝑥) = (0,8 − 0,3𝑥)/𝑥
    fxl = (0.8 - 0.3*xl)/xl;
    fxu = (0.8 - 0.3*xu)/xu;

    xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
    xra = xu;
    fxr = (0.8 - 0.3*xr)/xr;

    nit=1;
    erro = fabs((float)((xr-xra)/xr));

    printf("xl xu xr fxl fxu fxr erro\n");
    printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);

    do{
        xra=xr;
        nit=nit+1;

        if (fxl*fxr < 0){

            xu=xr;
            fxu=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = (0.8 - 0.3*xr)/xr;
            erro = fabs((float)((xr-xra)/xr));

        }else{

            xl=xr;
            fxl=fxr;
            xr = xu - ((fxu*(xl-xu))/(fxl-fxu));
            fxr = (0.8 - 0.3*xr)/xr;
            erro = fabs((float)((xr-xra)/xr));

        }
        printf("%f %f %f %f %f %f %f\n",xl,xu,xr,fxl,fxu,fxr,erro);
    }while (nit < 3);

    printf("Valor estimado com metodo da falsa posicao, com %d iteracoes da raiz: %f\n",nit,xr);
    return(0);
    
}