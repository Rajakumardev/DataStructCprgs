#include<stdio.h>
#include<stdlib.h>

struct llist {
    int no ;
    struct llist *next;
};

struct llist *FRONT;
struct llist *REAR;

void Enqueue(int a){
    struct llist *newnode = (struct llist *) malloc(sizeof(struct llist));
    newnode -> no = a;
    newnode -> next = NULL;
    if(REAR == NULL){
        REAR = newnode;
        FRONT = newnode;
    }else{
        REAR -> next = newnode;
        REAR = REAR->next;
    }
}

void Dequeue(){
    struct llist *tmp = NULL;
    if(FRONT == NULL){
        printf("\n\t\tQUEUE IS EMPTY");
    }else{
        printf("\nELEMENT : %d",FRONT -> no);
        tmp = FRONT;
        FRONT = FRONT -> next;
        free(tmp);
    }
}

void main(){
Enqueue(10);
Enqueue(20);
Enqueue(30);
Enqueue(40);

Dequeue();
Dequeue();
Dequeue();
Dequeue();
Dequeue();
}