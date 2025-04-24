#include <stdio.h>
#include <unistd.h>
#include "_putchar.c"

int main(){
    int x,i;
    char y;
    for(x=0;x<4;x++)
    {
        y='0';
        _putchar(y);
        write(1," ",1);
        for(i=0;i<3;i++)
        {
            _putchar(y+x);
            write(1," ",1);
            y=y+x;
        }
        write(1,"\n",1);
    }

    return 0;
}