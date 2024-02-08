#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*head;
void insert_front();
void insert_end();
void insert_after();
void delete_Front();
void delete_End();
void delete_Any();
void Display();
void main(){
    int opt,x,key;
    do{
        printf("\n1.Insertion at front\n2.Insertion at end\n3.Insertion at after\n4.Delete at front\n5.Delete at end\n6.Delete at any postion\n7.Display\n");
        printf("Enter your choice");
        scanf("%d",&opt);
        switch(opt){
            case 1:
            printf("Enter a data");
            scanf("%d",&x);
            insert_front(x);
            break;
            case 2:
            printf("Enter a data");
            scanf("%d",&x);
            insert_end(x);
            break;
            case 3:
            printf("enter key");
            scanf("%d",&key);
            printf("Enter a data");
            scanf("%d",&x);
            insert_after(key,x);
            break;
            case 4:
            delete_Front();
            break;
            case 5:
            delete_End();
            break;
            case 6:
            printf("enter key");
            scanf("%d",&key);
            delete_Any(key);
            break;
            case 7:
            Display();
            break;
        }
       } while(opt!=8);
    
}
    void Display(){
        struct node*ptr;
        if(head==NULL)
         printf("Empty");
        else{
            ptr=head;
            while(ptr!=NULL){
                printf("\nElements are %d\n",ptr->data);
                ptr=ptr->link;
            }
        }
    }
    void insert_front(int x){
        struct node*new;
        new=(struct node*)malloc(sizeof(struct node));
        new->data=x;
        new->link=head;
        head=new;
        Display();
        
    }
    void insert_end(int x){
        struct node*new,*ptr;
        new=(struct node*)malloc(sizeof(struct node));
        new->data=x;
        new->link=NULL;
        if(head==NULL){
            head=new;
        }
        else{
            ptr=head;
            while(ptr->link!=NULL){
                ptr=ptr->link;
            }
            ptr->link=new;
        }
        Display();
     }
     void insert_after(int key,int x){
        struct node*new,*ptr;
        new=(struct node*)malloc(sizeof(struct node));
        new->data=x;
        if(head==NULL){
            printf("Not Found");
            
        }
        else{
            ptr=head;
            while(ptr->data!=key && ptr->link!=NULL){
                ptr=ptr->link;
            }
            if(ptr->data==key){
             new->link=ptr->link;
             ptr->link=new;
        }}
        Display();
     }
     void delete_Front(){
         struct node*temp;
         if(head==NULL){
             printf("Empty");
            
         }
         else{
             temp=head;
             head=head->link;
             free(temp);
             
         }
         Display();
         
     }
      void delete_End(){
        
     struct node *temp,*ptr;
    if(head==NULL){
      printf("no elements\n");
    }
    else if(head->link==NULL){
    ptr=head;
    head=NULL;
   
    free(ptr);
    }
    else {
    ptr=head;
    temp=head->link;
     while(temp->link!=NULL){
       ptr=temp;
       temp=temp->link;
   }
   ptr->link=NULL;
    
    free(temp);
   }
         
         Display();
         
     }
      void delete_Any(int key){
         struct node*temp,*prev,*curr;
         if(head==NULL){
             printf("Empty");
            
         }
         else if(head->data==key){
             temp=head;
             head=head->link;
             free(temp);
             
         }
         else{
             prev=head;
             curr=head->link;
             while(curr->data==key && curr->link!=NULL){
                 prev=curr;
                 curr=curr->link;
                 
             }
             if(curr->data==key){
             prev->link==curr->link;
             free(curr);
         }
         else{
             printf("NOT FOUND");
            
         }
         Display();
         
     }
     
     
     
        }
