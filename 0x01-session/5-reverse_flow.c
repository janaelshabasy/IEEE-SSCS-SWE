#include <stdio.h>
void swap(int*a,int*b){
    int swap= *a;
    *a= *b;
    *b= swap;
}
int main(){
    int x=10, y=5;
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}