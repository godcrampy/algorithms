#include <stdio.h>
#include <math.h>

void main(){
  int n,s=0;
  puts("Enter Number: ");
  scanf("%d",&n);
  while(n>9){
    while(n>=1){
      s+=n%10;n/=10;
    }
    n=s;
    s=0;
  }
printf("\n%d",n);
}
