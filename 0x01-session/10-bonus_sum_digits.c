#include <stdio.h>
int sumdigits(int n, int count){
    if(n>10)
     return(n%10 + sumdigits((n-n%10)/10,count+1));
    else if (n>0)
    {
     printf("%d digits\n",count);
     return n;
    }
    else if (n<0)
    {
     return(sumdigits(-n,count));
    }
}
int main(){
    int a= sumdigits(357,1);
    int b= sumdigits(262,1);
    printf("%d\n%d\n",a,b);
    return 0;
}