#include<stdio.h>
void fun(int a[],int n,int *pmax,int *pmin,int *px,int *pn)
{
    int i;
    *pmax=a[0];
    *px=0;
    *pmin=a[0];
    *pn=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>*pmax)
        {
            *pmax=a[i];
            *px=i;
        }
        else if(a[i]<*pmin)
        {
            *pmin=a[i];
            *pn=i;
        }
    }
}
main()
{
    int a[10],n,mx,mn,ix,in,i;
    int *pmax=&mx,*pmin=&mn,*px=&ix,*pn=&in;
    printf("Input n(n<=10):");
    scanf("%d",&n);
    printf("Input %d numbers:",n);
    for(i=0; i<n; i++)  scanf("%5d",&a[i]);
    fun(a,n,pmax,pmin,px,pn);
    printf("Exchange results:");
    printf("%5d%5d%5d%5d",mx,mn,ix,in);
}
