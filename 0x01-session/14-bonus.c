#include <stdio.h>
int sum(){
    int num, n=0, arr[20];
    printf("how many numbers will you enter ");
    scanf("%d", &num);
    printf("\nenter the numbers ");
    for(int i=0;i<num;i++)
    {
     scanf("%d",&arr[i]);
     n= n + arr[i];
    }
    return n;
}
int abs(int n){
    if (n>=0)
     return n;
    else
     return -n;
}
int main(){
    int a,x;
    char str[10];
    a=sum();
    printf("\n%d",a);
    printf("\n enter the number to find it abs value ");
    scanf("%d",&x);
    x=abs(x);
    printf("\n%d",x);
    return 0;
}