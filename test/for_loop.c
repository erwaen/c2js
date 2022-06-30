#include<stdio.h>
int main(){
    int i; 
    for(i=0;i < 5; i++){
        printf("1");
    }

    int j = 0;
    while(j<100){
        printf("2");
    }

    int h = 0;
    do{
        printf("3");
    }while(h<100);
    return 0;
}