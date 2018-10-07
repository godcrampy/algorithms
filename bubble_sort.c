#include <stdio.h>
void main(){
  //Take Array
puts("Enter Number\n");
int n,i;
scanf("%d",&n);
int a[n];
puts("Enter Array\n");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
//Sort Array
puts("sorting\n");
int t,c=1,b=n-1;
// t is used for swapping
//b is used for keeping track pf how much to bubble in one iteration
// b is n-1 coz i will reach till n-2 then whic will be the second last number of the array
// c is couter to keep track when the array is sorted and no more swaps are required
while(c!=0){
  c=0;
  for(i=0;i<b;i++){
    if(a[i]>=a[i+1]){
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
      c++;
    }
  }
  b--;
}
for(i=0;i<n;i++){
  printf("%d ",a[i]);
}
}
