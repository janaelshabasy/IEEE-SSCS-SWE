#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node* next;
};
struct node* add(int n, struct node* head){
    struct node* temp;
    struct node* last;
    last=(struct node*)malloc(sizeof(struct node));
    last->value= n;
    last->next=NULL;
    for(temp=head;;)
    {
        if(temp->next!=NULL) temp= temp->next;
        else {temp->next= last; break;}
    }
    return head;
}
struct node* create(int n){
    struct node* head;
    head=(struct node*)malloc(sizeof(struct node));
    head->value=n;
    head->next=NULL;
    return head;
}
void printlist(struct node*head){
    struct node* temp;
    for(temp=head;;)
    {
        printf("%d\n",temp->value);
        if(temp->next!=NULL) temp= temp->next;
        else break;
    }
}
int main(){
    struct node* head;
    head= create(5);
    add(3,head);
    add(9,head);
    printlist(head);
    free(head);
    return 0;
}