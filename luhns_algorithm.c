#include <stdio.h>
#include <math.h>
void main(){
  puts("Number: ");
  unsigned long long int n;
  scanf("%llu",&n);
  int s=0,c=0,t=0;
  while(n>=1)
  {
    if(c==0){s+=n%10;n/=10;c=1;continue;}
    if(c==1){
      t=(n%10)*2; n/=10;c=0;
      if(t>9){s+=(t-9);}
      else{s+=t;}
    }
  }
  printf("%d\n",s);
  if(s%10==0){puts("Luhns");}
  else{puts("Not Luhns");}

}
