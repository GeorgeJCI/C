#include <stdio.h>

void addition(int num1,int num2, int *result){
    *result = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,*result);
}
void subtraction(int num1,int num2,int *result){
    *result = num1 - num2;
    printf("%d - %d = %d\n",num1,num2,*result);
}
void multi(int num1,int num2,int *result){
    *result = num1 * num2;
    printf("%d * %d = %d\n",num1,num2,*result);
}
void div(int num1,int num2,int *result){
    *result = num1 / num2;
    printf("%d / %d = %d\n",num1,num2,*result);
}

void calc(int *num1, int *num2, int *result, char *operator){
    printf("Enter sum eg (2 + 2):");
    scanf("%d %c %d", num1,operator,num2);
}

int main(){

    int val1;
    int val2;
    char oper;
    int final;
    calc(&val1,&val2,&final,&oper);

    switch (oper) {
        case '+':
            addition(val1, val2, &final);
            break;
        case '-':
            subtraction(val1, val2, &final);
            break;
        case '*':
            multi(val1, val2, &final);
            break;
        case '/':
            div(val1, val2, &final);
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}

