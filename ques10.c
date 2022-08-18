#include<stdio.h>
int main()
{
    char a[100],*p;
    printf("Enter string=");
    fgets(a,100,stdin);
    p=a;
    int j=strlen(p);
    printf("String in reverse order=");
    for(int i=j-2;i>=0;i--)
        printf("%c",p[i]);
    return 0;
}
