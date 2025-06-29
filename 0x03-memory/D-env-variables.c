#include <stdio.h>
#include <stdlib.h>
struct var{
    char* key;
    char* value;
    struct var* next;
};
void add(struct var*head, char* k, char* v)
{
    struct var* last;
    last=(struct node*)malloc(sizeof(struct node));
    last->key= k;
    last->value= v;
    last->next=NULL;
    struct var*temp;
    temp=head;
    while(){
        if(temp->next != NULL) temp=temp->next;
        else{temp->next=last; break;}
    }
}
void update(struct var*head, char* k, char* v, int n){
    struct var*temp;
    temp=head;
    for(int i=1;i<n;i++)
        temp=temp->next;
    temp->key= k;
    temp->value= v;
}
void remove(struct var*head, char*k){
    struct var*temp;
    temp=head;
    for(int i=0;;i++){
        if (*(temp->key)==*k) head=NULL;
        else if (*(temp->next->key)==*k)
        {
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
}
char* getvalue(struct var*head, char*k){
    struct var*temp;
    temp=head;
    for(int i=0;;i++){
        if (*(temp->key)==*k)
        {
            return temp->value;
            break;
        }
        temp=temp->next;
    }
}
int main(){
    struct var* head;
    head= (struct var*)malloc(sizeof(struct var));
    char v="one";
    char k="xxx";
    head.value=&v;
    head.key=&k;
    head.next=NULL;
    free(head);
    return 0;
}