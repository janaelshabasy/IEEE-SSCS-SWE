#include <stdio.h>
struct being{
    char* name;
    int age;
    float energylevel;
};
void printbeing(struct being* b){
    char n[20];
    for(int i=0;;i++)
    {
        n[i]= *((b->name)+i);
        //n[i]= b->name[i];
        if (n[i]=='\0') break;
    }
    printf("name: %s, age: %d, energy: %f\n", n, b->age, b->energylevel);
}
int main(){
    struct being s;
    s.name="jana";
    s.age=20;
    s.energylevel=10;
    printbeing(&s);
    return 0;
}