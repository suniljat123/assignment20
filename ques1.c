#include<stdio.h>
void swap(int *,int*);
int main()
{
    int a,b;
    printf("Enter 2 numbers=");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}
void swap(int *p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
