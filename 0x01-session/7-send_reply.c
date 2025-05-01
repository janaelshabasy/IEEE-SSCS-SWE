#include <stdio.h>
#include <string.h>
const char str[]="returned message";
const char* get_reply(){
     return str;
}
int main(){
    int i;
    char arr[20];
    for(i=0;i<16;i++)
      arr[i]= *(get_reply()+i);
    printf("%s",arr);
    return 0;
}