#include <stdio.h>

int is_response_detected(int strength);
int main(){
    int x = is_response_detected(52);
    printf("%d,response is detected\n",x);
    int y = is_response_detected(20);
    printf("%d,response is not detected\n",y);
    return 0;
}
int is_response_detected(int strength){
    if(strength>50)
      return 1;
    else
      return 0;
}