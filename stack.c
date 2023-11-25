#include<stdio.h>
 int a[50],top=-1,max,c,item;
   
 void push(int max);
 void pop();
 void peek();
void display();   
void main() {
     int a[50],top=-1,max,c,item;
     printf("Enter stack limit ");
     scanf("%d",&max);
     
     
     
     printf(" 1:Push\n 2:Pop\n 3:Peek\n 4:Display\n");
     do
     {
     printf("\nEnter a choice\n");
     scanf("%d",&c);
     switch(c)
     { 
         case 1:
          
         push(max);
         break;
            
         case 2:
         pop();
         break;
         
         case 3:
         peek();
         break;
         
         case 4:
         display();
         break;
         
         case 5:
          break;
          
         default :
         {
         printf("Invalid Choice \n");
          break;
          }
          }
         } while(c!=5);
          
          
        }  
      
      
      void push(int max){
       
       if(top==(max-1)){
         printf("Over Flow ");
         }
       else{
        top=top+1;
        printf("Enter a value to add :");
        scanf("%d",&item);
        a[top]=item;
        
        }
        }
        
        
      void pop(){
       if(top==-1){
         printf("Under Flow ");
         }
       else{
       
        printf("\nThe poped element is \n%d",a[top]);
        top=top-1;
        }
        }
        
        
        void peek(){
         printf("The top element is \n%d",a[top]);
         }
         
         
        void display(){
        
         for(int i=0;i<=top;i++){
          printf("\n%d",a[i]);
          }
          }
          
        
        
     
     

