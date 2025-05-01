#include <stdio.h>

void repeat_message(int n);
int main(){
    repeat_message(5);
    return 0;
}
void repeat_message(int n){
    for(n=1;n<=5;n++) 
        printf("%d: Hello, world\n",n);
}