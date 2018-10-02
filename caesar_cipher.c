#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
  int k,i;
  char s[50];
  printf("Enter text ");
  gets(s);
  puts("Enter key: ");
  scanf("%d",&k);
  for(i=0;i<strlen(s);i++)
  {
    if(islower(s[i])){printf("%c",(s[i]-'a'+1+k)%26+'a'-1);continue;}
    if(isupper(s[i])){printf("%c",(s[i]-'A'+1+k)%26+'A'-1);continue;}
    printf("%c",s[i]);
  }
}
