#include <stdio.h>
int signal_strength = 0;
void boost_signal(){
    int signal_strength = 100;
    printf("booster: signal strength = %d\n",signal_strength);
}
int main(){
    printf("%d\n", signal_strength);
    boost_signal();
    printf("%d\n", signal_strength);
    return 0;
}