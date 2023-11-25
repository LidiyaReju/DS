#include<stdio.h>
void main()
{
int lim,i,j,count=0,min_index,temp,sc=24;
count++;
count++;
printf("Enter limit");
scanf("%d",&lim);
count++;
int a[lim];
printf("Enter Number");
for(i=0;i<lim;i++){
count++;
 scanf("%d",&a[i]);
 count++;
 }
 count++;
for(i=0;i<lim;i++){
count++;
 min_index=i;
 for(j=i+1;j<lim;j++){
 count++;
  if(a[j]<a[min_index]){
  count++;
  
   min_index=j;
   temp=a[min_index];
   a[min_index]=a[i];
   a[i]=temp;
   count=count+4;
  }
  count++;
 }
 count++;
 }
 printf("The sorted array");
for(i=0;i<lim;i++){
count++;
 printf("%d\n",a[i]);
 count=count+2;}
printf("Time complexity %d\n",count);
printf("The space complexity %d\n",24+(4*lim));

 
 }
 

