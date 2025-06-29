struct matrix{
    int index;
    int value;
    struct matrix* next;
};
struct matrix* add(int n, struct matrix* head){
    struct matrix* temp;
    struct matrix* last;
    last=(struct matrix*)malloc(sizeof(struct matrix));
    last->index= 2;
    last->value= n;
    last->next=NULL;
    for(temp=head;;)
    {
        if(temp->next!=NULL) temp= temp->next;
        else {temp->next= last; break;}
    }
    return head;
}
int main(){
    struct matrix a,b;
    struct matrix* heada;
    struct matrix* headb;
    heada= (struct matrix*)malloc(sizeof(struct matrix));
    headb= (struct matrix*)malloc(sizeof(struct matrix));
    heada.index=1;
    headb.index=1;
    return 0;
}