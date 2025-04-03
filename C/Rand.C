#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
int i;
float num,soma= 0.0,media;

srand(time(NULL));

for ( i = 0; i < 10; i++);
{
num = rand() %101;

soma +=num;

media = soma/(i+1);

printf("soma parcial: %d = %.2f\n",i+1,soma);
printf("media parcial: %d = %.2f\n",i+1,media);
}

printf("A media total: %.2f\n",media);
return 0;

}