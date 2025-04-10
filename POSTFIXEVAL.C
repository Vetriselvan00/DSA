#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int isoperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatepostfix(char *expr) {
    int i;
    int length = strlen(expr);

    for (i = 0; i < length; i++) {
        if (isspace(expr[i])) {
            continue; 
        } else if (isdigit(expr[i])) {
            push(expr[i] - '0'); 
        } else if (isoperator(expr[i])) {
            int op2 = pop();
            int op1 = pop();
            switch (expr[i]) {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
                default:
                    break;
            }
        }
    }
    return pop();
}

void replaceVariables(char *expr, int A, int B, int C) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == 'A') {
            expr[i] = A + '0';  
        } else if (expr[i] == 'B') {
            expr[i] = B + '0';  
        } else if (expr[i] == 'C') {
            expr[i] = C + '0';  
        }
    }
}

int main() {
    int A, B, C;
    char expr[MAX];
    
 
    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter value for B: ");
    scanf("%d", &B);
    printf("Enter value for C: ");
    scanf("%d", &C);

   
    getchar();

    printf("Enter a postfix expression (use A, B, C as variables): ");
    fgets(expr, MAX, stdin);

    expr[strcspn(expr, "\n")] = '\0'; 

   
    replaceVariables(expr, A, B, C);

    printf("Updated expression: %s\n", expr);
    printf("Result: %d\n", evaluatepostfix(expr));

    return 0;
}
