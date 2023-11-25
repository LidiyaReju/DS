#include<stdio.h>
void main()
{
int count=0,len,num,i,found=0;
count++;
count++;
printf("Enter a number to be searched");
scanf("%d",&num);
count++;
printf("Enter the length of array");
scanf("%d",&len);
count++;
int a[len];
printf("Enter elements");
for(i=0;i<len;i++)
{
count++;
scanf("%d",&a[i]);
count++;
if(a[i]==num)
{
count++;
found++;
count++;
}

}
if(found==1)
{
count++;
printf("Found");
}
else
{
count++;
printf("Not Found");
}
count+=2;
printf("\nThe time complexity %d\n",count);
printf("\nThe space complexity is %d",20+(4*len));
}


