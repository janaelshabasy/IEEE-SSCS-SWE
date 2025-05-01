#include <stdio.h>
int sum_layers(int n){
    if(n>0)
     return (n + sum_layers(n-1));
    else if(n==0)
     return 0;
}
int main(){
    int a=sum_layers(5);
    int b=sum_layers(10);
    int c=sum_layers(3);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}