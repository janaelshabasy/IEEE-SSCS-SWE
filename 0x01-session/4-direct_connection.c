#include <stdio.h>
void signal(int* ptr){
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
}
int main(){
    int var_signal = 98;
    signal(&var_signal);
    return 0;
}