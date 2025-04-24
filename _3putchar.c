#include <stdio.h> 
#include <unistd.h>

int main(){
    char c;
    read(0,&c,1);
    if((c>='a')&&(c<='z'))
      printf("lowercase");
    if((c>='A')&&(c<='Z'))
      printf("uppercase");
    return 0;
}