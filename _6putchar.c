#include <unistd.h>
#include <stdio.h>

int main(){
    int y=0,x=1;
    write(1,65,1);
    write(1,66,1);
    /*while(x<100)
    {
     if(x<10)
     {
      write(1,&y,4);
      write(1,&x,4);
     }
     else
      write(1,&x,4);
     x++;
    }*/
    return 0;
}