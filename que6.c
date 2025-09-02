#include<stdio.h>
int main()
{
    int x,y,z,m;
    printf("enter your marks of 3 subjects seperating it by commas:")
    scanf("%d,%d,%d",&x,&y,&z);
    m=(x+y+z)/3;
    printf("your average marks are %d\n",m);
    if(m>=70){
        printf("distinction");}
    else if(m>=60){
        printf("first class");}
    else if(m>=50){
        printf("second class");}
    else if(m>=35){
        printf("third class");}
    else{
        printf("fail");}
    return 0;
}
