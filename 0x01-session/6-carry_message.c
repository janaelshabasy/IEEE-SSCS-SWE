#include <stdio.h>
#include <string.h>
void print_message(char* msg, int n){
    for(int x=0 ; x<n ; x++)
        printf("%c", *(msg+x));
}
int main(){
    char str[]="the received message";
    print_message(str,strlen(str));
}