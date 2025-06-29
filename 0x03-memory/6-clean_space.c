#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void* clear(int*pointer, size_t size){
    memset(pointer,0,size);
}
int main(){
    int i,n=5;
    int* p= (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++) *(p+i)= i;
    for(i=0; i<n; i++) printf("%d ",*(p+i));
    size_t size= n*sizeof(int);
    clear(p,size);
    printf("\n");
    for(i=0; i<n; i++) printf("%d ",*(p+i));
    return 0;
}