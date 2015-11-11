#include<stdio.h>
int Aver(int score[],int n){
int sum=0,i;
for(i=0;i<n;i++)
sum+=score[i];
return sum/n;}
main(){
int score[40],i,n;
printf("Input n:");
scanf("%d",&n);
printf("Input score:");
for(i=0;i<n;i++)
scanf("%d",&score[i]);
printf("Average score is %d\n",Aver(score,3));}
