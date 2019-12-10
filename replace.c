#include <stdio.h>
#include <stdlib.h>

void und(char s[],char t[])
{
    int i,j;
   while(s[i]!='\0')
    i++;
   while((s[i++]=t[j++])!='\0')
    ;

}
 main()
{
    char T[10],S[5];
    gets(T);
    gets(S);
    und(T,S);
    puts(T);

}
