#include <stdio.h> 
#include <unistd.h>

int main(){
    char c;
    read(0,&c,1);
    if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
      write(1,"is alpha",8);
    return 0;
}