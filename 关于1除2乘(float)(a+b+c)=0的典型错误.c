#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s,area;
printf("Input a,b,c:\n");
scanf("%f,%f,%f",&a,&b,&c);
s=1/2*(a+b+c);
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area=%.2f\n",area);
return 0;
}
