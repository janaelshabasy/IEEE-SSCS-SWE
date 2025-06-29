#include <stdio.h>
int echo_data(void*data){
    int* d= (int*) data;
    return *d;
}
int main(){
    int x=4;
    void* pointer=&x;
    printf("%d\n", echo_data(pointer));
    return 0;
}