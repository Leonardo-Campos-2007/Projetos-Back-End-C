#include <stdio.h>

int main() {

  float t, f;
    
printf("Digite a temperatura em Celcius para Fahrenheit: ");
scanf("%f", &t);

f = ((t * 9.0/5.0) + 32);

printf("Temperatura em Celsius digitada: %.2f\n ", t );
printf("temperatura em Fahrenheit: %.2f\n ", f);

return 0;

}