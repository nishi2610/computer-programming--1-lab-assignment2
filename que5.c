#include<stdio.h>
int main()
{
printf("enter gross salary\n");
int gs,n,d;
scanf("%d",&gs);

if(gs>20000){
    d=0.15*gs;
    n=gs-d;
    printf("the net salary is %d",n);}
else if(gs>10000){
    d=0.1*gs;
    n=gs-d;
    printf("the net salary is %d",n);}
else{
    d=0.05*gs;
    n=gs-d;
    printf("the net salary is %d",n);}
return 0;
}
