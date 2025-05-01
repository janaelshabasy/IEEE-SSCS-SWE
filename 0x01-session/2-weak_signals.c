#include <stdio.h>

int is_strong_signal(int strength);
void check_signal(int strength);
int main(){
    check_signal(52);
    check_signal(20);
    return 0;
}
void check_signal(int strength){
    int x = is_strong_signal(strength);
    if(x==1)
      printf("strong signal detected\n");
    else
      printf("no signal detected\n");
}
int is_strong_signal(int strength){
    if(strength>50)
      return 1;
    else
      return 0;
}