#include <stdio.h>
#include <stdlib.h>
int* summon_allies(int* allies, int n){
    int x;
    for(int i=0; i<n; i++)
    {
        printf("\nenter the number ");
        scanf("%d",&x);
        *(allies+i)= x;
    }
    return allies;
}
int main(){
    int n;
    printf("enter number of inputs ");
    scanf("%d",&n);
    int* p= (int*) malloc(n* sizeof(int));
    p= summon_allies(p,n);
    for(int i=0; i<n; i++) printf("%d ",*(p+i));
    return 0;
}