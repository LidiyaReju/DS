#include<stdio.h>
void main()
{  int n,i,position;
   printf("Enter the number of elements in the binary tree:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements in the tree:");
   for(i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter position of a node:");
   scanf("%d",&position);
   
   if(2*position>n)
   {
     printf("%d Has no left child\n",a[position]);
   }
   else
   {
      printf("Left child of %d is %d\n",a[position],a[2*position]);
   }
   if(2*position+1>n)
   {
     printf("%d Has no right child\n",a[position]);
   }
   else
   {
      printf("Right child of %d is %d\n",a[position],a[2*position+1]);
   }
   if(position>1&&position<=n)
   {
     printf("Parent of %d is %d\n",a[position],a[position/2]);
   }
   else
   {
      printf("%d Has no parent\n",a[position]);
   }
  
}
