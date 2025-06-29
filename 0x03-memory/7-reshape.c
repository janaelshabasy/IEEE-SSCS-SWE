#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* reshape(void*ptr, size_t old, size_t new){
    int *p;
    int x;
    if(ptr==NULL)
    {
        ptr= (int*) malloc(new);
        return ptr;
    }
    else if(new==0)
    {
        free(ptr);
        ptr=NULL;
        return ptr;
    }
    else{
        p= (int*) malloc(new);
        x=*(int*)ptr;
        *p=x;
        free(ptr);
        ptr=NULL;
        return p;
    }
}
int main(){
    size_t old= sizeof(int);
    size_t new= 2*sizeof(int);
    void* pointer= malloc(old);
    reshape(pointer,old,new);
    return 0;
}