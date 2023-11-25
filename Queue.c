 #include <stdio.h>
int rear = -1, front = -1,queue[20];
int enqueue(int item,int max);
int dequeue();
int display();
void main(){
	int n,choice,num,k = 1;
	printf("Enter the size of the queue: ");
	scanf("%d",&num);
	while (k != 0){
		printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n Enter a choice: ");
		scanf("%d",&choice);
		if (choice == 1){
			printf("Enqueue : ");
			printf("Enter a number: ");
			scanf("%d",&n);
			enqueue(n,num);
			}
		else if (choice == 3){
			display();
			}
		else if (choice == 2){
			dequeue();
			} 
		else if(choice == 4){
			break;
			}
		}
	}
int dequeue(){
	if (rear <= front){
		printf("\nThe queue is EMPTY.\n");
		rear = -1;
		front = -1;
		}
	
	else {
		front++;
		printf("The dequeued element is %d",queue[front-1]);
		}
	}
int display(){
	printf("The queue is: \n");
	for (int i = front; i < rear+1; i++){
		printf("%d ",queue[i]);
		}
	}
int enqueue(int item, int max){
	if (front == - 1 && rear == -1){
		rear = 0;
		front = 0;
		queue[rear] = item;
		}
	else if(rear == max - 1){
		printf("\nOVERFLOW\n");
		}
	else {
		rear++;
		queue[rear] = item;
		}
	
	}
