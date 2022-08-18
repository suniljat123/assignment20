#include<stdio.h>
int length(char *);
int main()
{
    char s1[100];
    printf("Enter string=");
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]=NULL;
    int i=length(s1);
    printf("length of %s=%d",s1,i);
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;p[i];i++);
    return i;
}
