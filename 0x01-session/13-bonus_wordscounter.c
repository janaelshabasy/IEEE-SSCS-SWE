#include <stdio.h>
int counter(char*mystring){
    int count=1;
    char space=' ';
    for(int x =0;x<30;x++)
    {
        if (*(mystring+x)==space)
         count++;
    }
    return count;
}
int main(){
    char str[30]="sun mon tue wed thu fri sat";
    int a = counter(str);
    printf("%d words\n",a);
    return 0;
}