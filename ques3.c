#include<stdio.h>
void sort(int *,int);
int main()
{
    int a[10],i;
    printf("Enter 10 elements=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    printf("Elements of array in sorted order=");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int *p,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(p[i]>p[j])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
