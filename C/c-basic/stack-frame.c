#include <stdio.h>
#include <stdlib.h>

int bar(int y){
    int a = 3*y;
    printf("bar returned %d", a);
    printf("\n");
    return a;
    system("pause");
}

int foo(int x){
    int b = 5*x;
    printf("foo returned %d", b);
    printf("\n");
    return b;
    system("pause");
}

int main(){
    int c = foo(7);
    printf("main passed %d", c);
    printf("\n");
    system("pause");
}