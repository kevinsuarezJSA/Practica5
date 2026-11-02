#include <stdio.h>
void main(){
    float c1 = 0, c2 = 0, c3 = 0;
    float nl = 0;
    float a = 180, b = 0.9, c = 0.7; 

    printf("Ingrese la nota del primer certamen:");
    scanf("%f", &c1);
    printf("Ingrese la nota del segundo certamen:");
    scanf("%f", &c2);
    printf("Ingrese la nota del laboratorio:");
    scanf("%f", &nl);

    c3 = ((a-(nl*b))/c) - c1 - c2;
    
    printf("Para aprobar con lo minimo necesita: %f \n", c3);

}