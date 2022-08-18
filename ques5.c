#include<stdio.h>
int max(int *,int*);
int main()
{
    int a,b,i;
    printf("Enter 2 numbers=");
    scanf("%d%d",&a,&b);
    i=max(&a,&b);
    printf("Maximum number between %d and %d=%d",a,b,i);
    return 0;
}
int max(int *p,int *q)
{
    if(*p>*q)
        return *p;
    return *q;
}
