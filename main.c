#include <stdio.h>

int main(){
    int raggio=1;
    float cir,area;
    while(raggio>=1 && raggio<=20){
        cir=(raggio+raggio)*3,14;
        area=3.14*(raggio*raggio);
        printf("per il raggio uguale a: %d\n",raggio);
        printf("Circonferenza= %f\n",cir);
        printf("Area= %f\n",area);
        raggio++;
    }
    return 0;
}

