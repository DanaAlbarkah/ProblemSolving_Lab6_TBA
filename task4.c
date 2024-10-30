#include <stdio.h>
#include <stdlib.h>

int main() {
    int *stack; 
    int size = 0;
    int capacity = 1;
    char command;    
    int value;       
    stack = malloc(capacity * sizeof(int));
    while (1) {
        printf("Enter a command (p: push, o: pop, d: display, e: exit): ");
        scanf(" %c", &command); 
        switch (command) {
            case 'p': 
                printf("Enter an integer to push: ");
                scanf("%d", &value); 
                if (size == capacity) {
                    capacity *= 2;
                    stack = realloc(stack, capacity * sizeof(int));}
                stack[size] = value;
                size++;
                break;
            case 'o':
                if (size > 0) {
                     size--;
                    printf("Popped value: %d\n", stack[size]);
		    stack[size]=0;
		    
                } else {
                    printf("Stack is empty, nothing to pop.\n");
                }
                break;
            case 'd': 
                if (size == 0) {
                    printf("The stack is empty.\n");
                } else {
                    printf("Stack contents: ");
                    for (int i = size - 1; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 'e': 
                free(stack); 
                printf("Exiting the program.\n");
                return 0;

            default: 
                printf("Invalid command. Please enter 'p', 'o', 'd', or 'e'.\n");
                break;
        } }    return 0;}
