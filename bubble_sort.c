#include <stdio.h>
void main(){
puts("Enter Number\n");
int n,i;
scanf("%d",&n);
int a[n];
puts("Enter Array\n");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
puts("sorting\n");
int t,c=1,b=n;
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
