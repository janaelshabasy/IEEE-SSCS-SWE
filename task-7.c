#include <stdio.h>

int main(){
    int x,y;
    printf("enter a number from 1 to 9 ");
    scanf("%d",&x);
    y= 'a';
    printf("\nthe equivalent character to %d is %c\n",x,y+x-1);
}