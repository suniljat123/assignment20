#include<stdio.h>
int main()
{
    int *p,a;
    a=4;
    p=&a;
    printf("\nPrinting value of a using vaiable=%d",a);
    printf("\nPrinting value of a using pointer=%d",*p);
    printf("\nPrinting address of a using variable=%d",&a);
    printf("\nPrinting address of a using pointer=%d",p);
    printf("\nChanging value of a using pointer:");
    *p=6;
    printf("\n-------------------------------------------------------------------\nNow Value of a was changed using pointer");
    printf("\nPrinting value of a using vaiable=%d",a);
    printf("\nPrinting value of a using pointer=%d",*p);
    printf("\nPrinting address of a using variable=%d",&a);
    printf("\nPrinting address of a using pointer=%d",p);
    printf("\nChanging value of a using pointer:");
    return 0;
}
