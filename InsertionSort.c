#include<stdio.h>
void main()
{
int n,temp;
printf("Enter the number of elements");
scanf("%d",&n);
int a[n];
printf("Enter Elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int i=1;
while(i<n)
{
int j=i;
  while(a[j]<a[j-1]&& j>0)
  {
  temp=a[j];
  a[j]=a[j-1];
  a[j-1]=temp;
  j=j-1;
  }
  i=i+1;
}
printf("The sorted array\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}

}



