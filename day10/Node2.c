#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void add_Node(Node* cursur,int x,Node* head){
    cursur->data=x;
    cursur->next=head;
    //head=cursur;
    //cursur=malloc(sizeof(Node));    
}

int main(void){
    
    Node* head=NULL;
    Node* cursur;
    int x;
    for (int i=0;i<5;i++){
        cursur=malloc(sizeof(Node));
        printf("enter the data: ");
        scanf("%d",&x);
        add_Node(cursur,x,head);
        head=cursur;
    }

    

}