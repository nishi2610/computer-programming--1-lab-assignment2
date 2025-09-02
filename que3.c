#include<stdio.h>
int main()
{
printf("enter gross salary\n");
int gs,a,d,n;
scanf("%d",&gs);

if(gs>10000)
{
    a=0.1*gs;
    d=0.03*gs;
    n=gs+a-d;
    printf("the net salary is %d",n);
}
if(gs>5000){
    a=0.07*gs;
    d=0.02*gs;
    n=gs+a-d;
    printf("the net salary is %d",n);}
return 0;
}
