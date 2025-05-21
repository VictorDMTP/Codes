#include<stdio.h>

int main() {
  char n;
    double sfix,mon,res;
    scanf("%s",&n);
    scanf("%lf",&sfix);
    scanf("%lf",&mon);
    res = ((mon/100)*15)+sfix;
    printf("TOTAL = R$ %.2lf\n",res);
    return 0;
    }