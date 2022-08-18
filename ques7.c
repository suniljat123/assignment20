#include<stdio.h>
void count(char *);
int main()
{
    char s1[100];
    printf("Enter string=");
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]=NULL;
    count(s1);
    return 0;
}
void count(char *p)
{
    int i,v=0,c=0;
    for(i=0;p[i];i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
            v++;
        else if((*(p+i)>=65&&p[i]<=90)||(*(p+i)>=97&&p[i]<=122))
            c++;
    }
    printf("Number of vowels=%d\nNumber of consonants=%d",v,c);
}
