#include <stdio.h>
#include "_putchar.c"

int main(){
    char x='a';
    for(;x<='z';x++) 
    {
        if(x!='q')
          _putchar(x);
    }
    for(x='Z';x>='A';x--)
    {
        if(x!='Q')
          _putchar(x);
    }
    return 0;
}