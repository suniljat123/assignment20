#include<stdio.h>
void swap(char *,char*);
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st stings=");
    fflush(stdin);
    fgets(s1,100,stdin);
    printf("Enter 2nd stings=");
    fflush(stdin);
    fgets(s2,100,stdin);
    swap(s1,s2);
   // s1[strlen(s1)-1]=NULL;
    s2[strlen(s2)-1]=NULL;
    printf("String1=%s\nstring2=%s",s1,s2);
    return 0;
}
void swap(char *p,char *q)
{
    char temp[100];
    int i;
    for(i=0;p[i]!='\n';i++)
        temp[i]=p[i];
    temp[i]='o';
    for(i=0;q[i]!='\n';i++)
        p[i]=q[i];
    p[i]=NULL;
    for(i=0;temp[i];i++)
        q[i]=temp[i];
    q[i]=NULL;

}
