#include<stdio.h>
int sum(int *);
int main()
{
    int a[10],s,i;
    printf("Enter 10 elements=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    s=sum(a);
    printf("Sum of all elements=%d",s);
    return 0;
}
int sum(int *p)
{
    int i,s=0;
    for(i=0;i<10;i++)
    {
        s=s+p[i];
    }
    return s;
}
