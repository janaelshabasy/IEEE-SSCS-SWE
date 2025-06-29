#include <stdio.h>
#include <stdlib.h>
int global=4;
int main(){
    int local=9;
    int* p= (int*) malloc(sizeof(int));
    *p=5;
    printf("(%p: data) -> %d\n", &global, global);
    printf("(%p: stack) -> %d\n", &local, local);
    printf("(%p: heap) -> %d\n", p, *p);
    return 0;
}