#include <stdio.h>
int manual_sizeof(){
    int array[]={5,3,7};
    int *ptr1= &array[1];
    int *ptr2= &array[0];
    char p1[20];
    char p2[20];
    sprintf(p1, "%p", ptr1);
    sprintf(p2, "%p", ptr2);
    /* printf("%s\n",p1);
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    printf("%s\n",p2); */
    printf("%d\n",(p1[13]-'0')-(p2[13]-'0'));
    return 0;
}
int main (){
    manual_sizeof();
    return 0;
}