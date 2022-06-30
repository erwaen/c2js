#include<stdio.h>

//variable global que 
//podemos usar en todas partes
int a;

int fun1(){
    a = 3; //ok

    int b; // solamente aca se puede usar
    b=4; // ok
}

int main(){
    a = 4; // ok
    b = 5; // ERROR
    return 0;
}