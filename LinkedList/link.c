#include<stdio.h>
#include<stdlib.h>
struct list{
    int no;
    struct list *next;
};
struct list *HEAD = NULL;

void CreateNode(int a){
    struct list *newnode = (struct list *) malloc(sizeof(struct list));
    newnode -> no = a;
    newnode -> next = NULL;

    if(HEAD == NULL){
        HEAD = newnode;
    }else{
        struct list *current = HEAD;
        while(current->next != NULL){
            current = current -> next;
        }
        current -> next = newnode;
    }
}
void Display(){
    struct list *current = HEAD;
    printf("\n\n\n");
    while(current != NULL){
        printf("ELEMENT:%d\n",current -> no);
        current = current -> next;
    }
}
void DeleteNode(int a){
    struct list *current = HEAD;
    struct list *prev = NULL;

    while(current!=NULL){
        if(current -> no == a){
            break;
        }else{
            prev = current;
            current = current -> next;
        }
    }
    prev -> next = current -> next;
    free(current);
}
void main(){
    //Create Node
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(40);
    Display();
    DeleteNode(20);
    Display();
}