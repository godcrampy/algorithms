#include <stdio.h>
#include <string.h>
#include <ctype.h>
//bug for printing z
void main()
{
  int k,i;
  char s[50],t[50];
  printf("Enter text ");
  gets(s);
  puts("Enter key: ");
  gets(t);
  int d=0;
  for(i=0;i<strlen(s);i++)
  {
    if(isspace(s[i])){goto label;}
    if(islower(t[d%(strlen(t))])){k=t[d%(strlen(t))]-'a';d++;}
    if(isupper(t[d%(strlen(t))])){k=t[d%(strlen(t))]-'A';d++;}
    label:
    if(islower(s[i])){printf("%c",(s[i]-'a'+k)%26+'a');continue;}
    if(isupper(s[i])){printf("%c",(s[i]-'A'+k)%26+'A');continue;}
    printf("%c",s[i]);
  }
}
