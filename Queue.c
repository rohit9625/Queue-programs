// Queue implementation using static array
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int CAPACITY = 5;
int Queue[5];
int front=0, rear=0;
int i;
// Functions Declerations 
void Push();
void Pop();
void Traverse();
// Main function
void main(){
    int ch;
    
    while(1){
        printf("Press 1 to Push \n");
        printf("Press 2 to Pop \n");
        printf("Press 3 to Traverse \n");
        printf("Press 4 to Exit \n\n");

        printf(">>Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : Push();
                     break;
            case 2 : Pop();
                     break;
            case 3 : Traverse();
                     break;
            case 4 : exit(0)               ;

            default : printf("xx..Invalid_Choice..xx\n\n");
        }
    }

    getch();
}
// Functions Definitions
//1. Push
void Push(){
    if(rear == CAPACITY){
        printf(">>Queue is overflow :) \n\n");
    }else {
        int ele = 0;
        printf("-->Enter the element : ");
        scanf("%d",&ele);

        Queue[rear] = ele;
        rear++;
    }
}
//2. Pop
void Pop(){
    if(front == rear){
        printf(">>Queue is empty :( \n\n");
    }else {
        printf("-->Deleted : %d \n\n",Queue[front]);
        for(i=0; i<rear; i++){
            Queue[i] = Queue[i+1];
        }
        rear--;
    }
}
//3. Traverse
void Traverse(){
    if(front == rear){
        printf(">>Queue is empty :( \n\n");
    }else {
        printf("->Queue elements : ");
        for(i=front; i<rear; i++){
            printf("%d ",Queue[i]);
        }
        printf("\n");
    }
}
