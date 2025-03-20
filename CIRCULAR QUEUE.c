#include <stdio.h>
#define MAX 3
void enqueue(int queue[], int *front, int *rear) {

if ((*rear == MAX - 1 && *front == 0) || (*rear + 1 == *front)) {
printf("Circular Queue Overflow\n");
return; 
}
int value;
if (*front == -1) {
*front = 0;
}
if (*rear == MAX - 1) {
*rear = 0; 
} else {
(*rear)++;
}
printf("Enter the value to enqueue: ");
scanf("%d", &value);
queue[*rear] = value;
printf("Enqueued: %d\n", value);
}

void dequeue(int queue[], int *front, int *rear) {
if (*front == -1) {
printf("Circular Queue Underflow\n");
} else {
printf("Dequeued: %d\n", queue[*front]);
if (*front == *rear) {

*front = -1;
*rear = -1;
} else if (*front == MAX - 1) {
*front = 0; 
} else {

(*front)++;
}
}
}

void display(int queue[], int front, int rear) {
if (front == -1) {
printf("Circular Queue is empty\n");
} else {
printf("Circular Queue contents: ");
if (front <= rear) {
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
} else {
for (int i = front; i < MAX; i++) {
printf("%d ", queue[i]);
}
for (int i = 0; i <= rear; i++) {
printf("%d ", queue[i]);
}
}
printf("\n");
}
}
int main() {
int queue[MAX], front = -1, rear = -1; 
int choice;
do {
printf("\n--- Circular Queue Menu ---\n");
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
enqueue(queue, &front, &rear);
break;
case 2:
dequeue(queue, &front, &rear);
break;
case 3:
display(queue, front, rear);
break;
case 4:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice, please try again.\n");
}
} while (choice != 4);
return 0;
}
