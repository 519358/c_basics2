#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void node_add(Node* node,int x,Node* head){
    node->data=x;
    node->next=head;
}

int main(void){
    int x;
    Node* head = NULL;

    for (int i=0;i<5;i++){
        Node* new_node = malloc(sizeof(Node));
        printf("enter the data\n");
        scanf("%d",&x);
        node_add(new_node,x,head);
        head=new_node;
    }

    Node* cursur=head;
    for (int i=0;i<5;i++){
        printf("%d ", cursur->data);
        cursur=cursur->next;
    }
    puts(" ");

    for (int i=0;i<5;i++){
        Node* tmp=head->next;
        free(head);
        head=tmp;
    }

    return 0;
}