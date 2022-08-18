 #include<stdio.h>
void reverse(int *,int);
int main()
{
    int a[10],s,i;
    printf("Enter 10 elements=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    reverse(a,10);
    printf("Elements in reverse order=");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
void reverse(int *p,int size)
{
    int i,j;
    for(i=0,j=size-1;i<j;i++,j--)
    {
        int temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
}
