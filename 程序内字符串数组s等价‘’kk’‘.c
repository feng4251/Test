#include <stdio.h>
#include<string.h>
main(){
    char s[50];
    FILE *fp;
    gets(s);
    fp=fopen(s,"w");
    if(fp==NULL)
        printf("fail");
    else
        printf("success");
}

