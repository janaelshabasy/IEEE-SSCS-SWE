#include <stdio.h>
void access1(int*counter , int*c){
    (*counter)++;
    (*c)++;
}
void access2(int*counter , int*c){
    (*counter)++;
    (*c)++;
}
int main(){
    int counter=0, c1=0, c2=0;
    access1(&counter,&c1);
    access1(&counter,&c1);
    access2(&counter,&c2);
    access1(&counter,&c1);
    access2(&counter,&c2);
    access2(&counter,&c2);
    access1(&counter,&c1);
    printf("%d %d %d\n",counter,c1,c2);
    return 0;
}