#include <stdio.h>
void main(){
  printf("Enter Number\n");
  int n,i;
  scanf("%d",&n);
  int a[n];
  puts("Enter Array\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    printf("the %dth number is %d\n",i,a[i]);
  }
}
