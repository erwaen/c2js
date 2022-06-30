#include<stdio.h>
int main(){
    int a= 0;
    int b = 1;
    //if else if y else
    if ( a == b) {
        printf("1");
    }else if( b > a){
        printf("2");
    }
    else{
        printf("3");
    }

    //solo if
    if (a) {
        printf("4");
    }
    
    //if else
    if ( a == b) {
        printf("5");
    }else{
        printf("6");
    }

    //if else if
    if ( a == b) {
        printf("7");
    }else if(a<b){
        printf("8");
    }

    // doble else if
    if ( !(a++)) {
        printf("9");
    }else if(a<b){
        printf("8");
    }else if(a>b){
        printf("9");
    }
    return 0;
}