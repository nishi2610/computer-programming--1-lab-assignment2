#include<stdio.h>
int main()
{
printf("enter number\n");
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if(a>b&& a>c)
{
    printf("%d is greatest",a);
    }
if(b>a&&b>c)
{
    printf("%d is greatest",b);
    }
else
{printf("%d is greatest",c);}
return 0;
}
