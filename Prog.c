
#include <stdio.h>
#include <string.h> 

#define SIZE 10 

char buffer[SIZE];
int head = 0; 
int tail = 0; 
int count =0; 
void init() {
    head = 0;
    tail = 0;
    count = 0;
}
int isFull() {
    return count == SIZE;
}
int isEmpty() {
    return count == 0;
} 

(enqueue)
void enqueue(char c) {
    if (isFull()) {
        printf("Overflow! Buffer is full.\n");
        return;
    }
    buffer[tail] = c;
    tail = (tail + 1) % SIZE;
    count++;
} (dequeue)
char dequeue() {
    if (isEmpty()) {
        printf("Underflow! Buffer is empty.\n");
        return '\0';
    }
    char c = buffer[head];
    head = (head + 1) % SIZE;
    count--;
    return c;
} 

int main() {
    char name[50];
    char full[100]; 

    init();
    printf("Enter your name: ");
    scanf("%s", name);
    strcpy(full, name);
    strcat(full, "CE-ESY");
    for (int i = 0; i < strlen(full); i++) {
        enqueue(full[i]);
    }
    printf("Output: ");
    while (!isEmpty()) {
        printf("%c", dequeue());
    }
    printf("\n");
    if (isEmpty()) {
        printf("Buffer is now empty.\n");
    } 

    return 0;
}
