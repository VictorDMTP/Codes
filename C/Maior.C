#include<stdio.h>

int main() {
    int a,b,s,maior;
    scanf("%d %d %d", &a , &b , &s);
        if (a >= b && a >= s)
            {
           maior = a; 
            } 
        else if (b >= a && b >= s)
        {
           maior = b;
         } 
        else {
             maior = s;
            }
        printf("%d eh o maior\n",maior);
        return 0;
}