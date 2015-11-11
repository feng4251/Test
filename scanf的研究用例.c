#include<stdio.h>
int Aver(int score[],int n){
int sum=0,i;
for(i=0;i<n;i++)
sum+=score[i];
return sum/n;}
int GetAboveAver(int score[], int n){
int k=0,i;
for(i=0;i<=n;i++){
if(score[i]>=Aver(score,n+1))
k++;}
return k;}
main(){
int score[40],i=0;
do{scanf("%d",&score[i]);i++;}while(score[i-1]>=0);
printf("Total students are %d\n",i-1);
printf("Average score is %d\n",Aver(score,i-1));
printf("Students of above average is %d\n",GetAboveAver(score,i-2));}
