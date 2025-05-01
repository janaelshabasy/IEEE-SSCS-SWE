#include <stdio.h>
void echo(int n){
    if (n!=0)
    {
     printf("%d: Echo...\n",n);
     n--;
     return echo(n);
    }
}
int main(){
    echo(5);
    return 0;
}