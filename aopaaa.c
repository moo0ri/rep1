#include <stdio.h>
#include <math.h>
int main(int arcg, const char * argv []) {
float a, b, c, x1, x2, delta;
printf("Insira os valores de a, b e c\n*");
scanf("%f" "%f" "%f", &a, &b, &c);
delta= b*b -4*a*c;
if(delta<0){
    printf("Nao existe solucao real");
    return 0;
    }
    if(delta>0);
    x1= (-b + sqrt(delta))/2*a);
    x2= (-b - sqrt(delta))/2*a);
    printf("Os valores de x1 e x2 sao: %.2f e %.2f\n", x1, x2);



    return 0;

    }
