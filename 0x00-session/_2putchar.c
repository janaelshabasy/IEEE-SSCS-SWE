#include <stdio.h> 
#include "_putchar.c"

int main(){
    int y;
    char x, space=' ';
    for(y=0;y<5;y++)
    {
        for(x='a';x<='z';x++)
        {
            _putchar(x);
        }
        write(1,"\n",1);
    }
    return 0;
}