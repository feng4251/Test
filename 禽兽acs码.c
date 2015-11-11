#include <stdio.h>
int main(){
    struct{
        int m;
        int n;
    }s={0x70706168,0x79};
    printf("%s\n",&s.m);
    int d;
    d = 0x70706168;
    printf("%s\n",&d);
//    printf("%s\n",&(s.m));
//    printf("")
    return 0;

}
