#include<stdio.h>

int main (){
int x; float y; double con;
    scanf("%d %f",&x,&y);
    con = x/y;
    printf("%.3f km/l\n",con);
    return 0;
}