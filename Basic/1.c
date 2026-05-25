#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char parsingTable[2][4][10] = {
    {"aBd", "",   "",   ""},
    {"",   "cB", "e",  ""}
};

int getNonTerminalIndex(char nt) {
    if (nt == 'S') return 0;
    if (nt == 'B') return 1;
    return -1;
}

int getTerminalIndex(char t) {
    if (t == 'a') return 0;
    if (t == 'c') return 1;
    if (t == 'd') return 2;
    if (t == '$') return 3;
    return -1;
}

int isTerminal(char c) {
    return (c == 'a' || c == 'c' || c == 'd' || c == '$');
}

int main() {
    char input[MAX];
    int i = 0;

    scanf("%s", input);

    push('$');
    push('S');

    while (top >= 0) {
        char X = stack[top];
        char a = input[i];

        if (isTerminal(X)) {
            if (X == a) {
                pop();
                i++;
            } else {
                printf("String Rejected\n");
                return 0;
            }
        } else {
            int row = getNonTerminalIndex(X);
            int col = getTerminalIndex(a);

            if (row == -1 || col == -1 || strlen(parsingTable[row][col]) == 0) {
                printf("String Rejected\n");
                return 0;
            }

            pop();
            char *production = parsingTable[row][col];

            if (production[0] != 'e') {
                for (int k = strlen(production) - 1; k >= 0; k--)
                    push(production[k]);
            }
        }

        if (stack[top] == '$' && input[i] == '$') {
            printf("String Accepted\n");
            return 0;
        }
    }

    printf("String Rejected\n");
    return 0;
}