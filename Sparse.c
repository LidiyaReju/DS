#include<stdio.h>
void main()
{
 int r,c,count=0;
 printf("Enter the row and column:\n");
 scanf("%d%d",&r,&c);
 int a[r][c];
 printf("Enter the matrix");
 for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
   scanf("%d",&a[i][j]);
   }
  }
  for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
    if(a[i][j]!=0){
      count++;
      }
     }
    }
 int tup[count+1][3];
 tup[0][0]=r;
 tup[0][1]=c;
 tup[0][2]=count;
  int b=1;
 
printf("The Sparse matrix:\n");
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
   printf("%d\t",a[i][j]);
   
   }
   printf("\n");

  }

for(int i=0;i<count;i++)
 {
  for(int j=0;j<3;j++){
   if(a[i][j]!=0){
    tup[b][0]=i;
    tup[b][1]=j;
    tup[b][2]=a[i][j];
    b++;
    }
    }
    }
    printf("The tuple matrix: \n");
    for(int i=0;i<count+1;i++)
    {
    for(int j=0;j<3;j++)
    {
    printf("%d\t",tup[i][j]);
    }
    printf("\n");
    }
    }
    
    
 

       
   
 
 
