#include <stdio.h>
#include "myfunctions.h"

// FizzBuzz in C
void fizzBuzz(){
        for(int i = 0; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0){
            printf("Fizz\n");
        } else if(i % 5 == 0){
            printf("Buzz\n");
        } else{
            printf("%d\n", i);
        }
    }
}

// nested loop
void nestedLoopExample(){
    int rows, columns;
    printf("\nEnter number of rows");
    scanf("%d",&rows);

    printf("\nEnter number of columns");
    scanf("%d",&columns);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}

/*Conditional Expressions*/

int ternCons(){
    int x,y;

    x = -1;

    y = (x > 2) ? 5 : 8;

    printf("sum is %d\n", y);

    int a,b;
    a = ((b = 7) , b * 3);
    printf("sum is %d\n", a);
}

int arrayTest(){
    #define ARRSIZE 50
    float x[ARRSIZE];
    int i;
    for(i = 0; i < ARRSIZE; i++){
        x[i] = 5;
        printf("%d",i);
    }
}

int pointerTest(){
    int x, y, * intptr;
    x = 5;
    printf("%d\n",x);
    intptr = &x;
    printf("%d\n",x);
    y = * intptr;
    printf("%d %d\n",x, y);
}

int structTest(){
    struct mystruct{
        int c;
        float y;
    } z;

    z.c = 7;
    z.y = 5.2E-2;

    printf("int: %d\nfloat: %f\n", z.c, z.y);

    struct mystruct new_struct;
    struct mystruct * struct_ptr;

    struct_ptr = & new_struct;

    new_struct.c = 23;
    struct_ptr -> c = 23;

    struct mystruct p, q;
    p.c = 7;
    p.y = 27.34;

    q = p;
    printf("int: %d\nfloat: %f\n", q.c, q.y);

}

int tripleTest(){
    float p;
    p = triple(2.7);
    printf("p = %f", p);
}

float tripleinc(float *);

int main(){

   // nestedLoopExample();
   //ternCons();
   //arrayTest();
   // pointerTest();
   //structTest();
   //tripleTest();

    float p = 2.7;
    float q = tripleinc(&p);

    printf("P=%f, q, = %f \n", q, p);

    return 0;
}

float tripleinc(float * tv){
    float result = 3.0 * *tv;

    *tv = *tv+1;

    return result;
}