#include<stdio.h>

int main() {
   double raio, area;
    const double n = 3.14159;
    
    
   printf("escolha um rai: ");
    scanf("%lf", &raio);
    
    area = n*raio*raio;
    
    printf("A = %.4lf\n",area);
    
    return 0;
}