#include <stdio.h>

int array[100]; 
int front = 0; 
int rear = -1; 

void push() {
    
    int data; 
    
    printf("\nEnter element: "); 
    scanf("%d", &data); 
    
    rear = rear + 1; 
    array[rear] = data; 
   
}
void pop() {
    
    printf("\nDeleted element: %d", array[front]); 
    front = front + 1; 
}
void show() {
    
    printf("\nElements in queue: "); 
    for(int i = front; i <= rear; i++) {
        printf("%d", array[i]); 
    }
    
}
