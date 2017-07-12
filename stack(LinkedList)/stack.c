#include<stdio.h>
#include<stdlib.h>

//dec
struct llist{
    int no;
    struct llist *next;   
};
struct llist *TOP = NULL;

void Push(int a){
    struct llist *newnode = (struct llist *)malloc(sizeof(struct llist));
    newnode -> no = a;
    newnode -> next = NULL;
    if(TOP == NULL){
        TOP = newnode;
    }else{
        newnode -> next = TOP;
        TOP = newnode;
    }
}
void Pop(){
    struct llist *tmp = NULL;
    if(TOP != NULL){
        printf("TOP ELEMENT : %d\n",TOP -> no);
        tmp = TOP;
        TOP = TOP->next;
        free(tmp);
    }else{
        printf("\nStack is empty");
    }
}
void main(){
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);

    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
}