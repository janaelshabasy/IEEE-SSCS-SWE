#include <stdio.h>
void status(int n){
    if(n>0)
        printf("positive\n");
    else if(n<0)
        printf("negative\n");
    else  if(n==0)
        printf("zero\n");
}
int main(){
    void (*fptr)(int);
    fptr= &status;
    fptr(5);
    fptr(0);
    fptr(-1);
    return 0;
}