#include<stdio.h>

int f(int i){
    if(i==1)
        return 1;
    else
        return 2*f(i-1)+2;
}

int main(){
    printf("%d",f(10));
    return 0;
}
