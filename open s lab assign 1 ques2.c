#include<stdio.h>
int main(){ int n;
printf("Enter the no. of elements:");
scanf("%d",&n);
int i;
int a[n];

for(i=0;i<n;i++){printf("Enter element of the array:");
scanf("%d",&a[i]);
}
int sum=0;
for(int i;i<n;i++){
sum=sum+a[i];


}
float avgint;
avgint=sum/(float)n;
printf("The sum is:%d\n",sum);
printf("Avg of integer:%f",avgint);

return 0;
}
