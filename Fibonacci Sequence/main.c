#include <stdio.h>

void fibinacci(){
    int num1 = 1;
    int num2 = 1;
    int result;

    int input;
    printf("Enter number of cycles: \n");
    scanf("%d", &input);
    printf("%d\n%d\n", num1, num2);

    for(int i = 0; i < input; i++){
        result = num1 + num2;
        num1 = num2;
        num2 = result;
        printf("%d\n", result);
    }
}

int main(void){
    fibinacci();
}