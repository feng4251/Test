#include <stdio.h>
void arrange(int a[]){
    int i=0;
    while(a[i]>=0){
        if(a[i]>9){
            if(a[i+1]<0)
                a[i+1]=a[i]/10;
            else
                a[i+1]+=a[i]/10;
            a[i]%=10;
        }
        i++;
    }
}
void mult(int a[],int n){
    int i;
    for(i=0;a[i]>=0;i++){
        a[i]*=n;
    }
    arrange(a);
}
void print(int a[]){
    int i=0,k;
    while(a[i]>=0){
        i++;
    }
    for(k=i-1;k>=0;k--)
        printf("%d",a[k]);
}
int main(){
    int i,n;
    int a[50];
    for(i=0;i<50;i++){
        a[i]=-1;
    }
    a[0]=1;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mult(a,i);
        printf("\n%d!=",i);
        print(a);
        printf("\n");
    }
    return 0;
}/*
int main(){
    int a[50],i;
    for(i=0;i<50;i++)
        a[i]=-1;
    a[i]=8;
    mult(a,9);
    print(a);
    return 0;
}*/
