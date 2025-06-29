#include <stdio.h>
int main(){
    int command;
    printf("enter the command ");
    scanf("%d",&command);
    if(command==1){
        printf("\nprint");
    }
    else if(command==2){
        printf("\nscan");
    }
    else if(command==3){
        printf("\ncommand");
    }
    else printf("silence, nothing came through");
    return 0;
}