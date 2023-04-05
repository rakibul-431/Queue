#include<stdio.h>
#include<stdbool.h>
#define capacity 5
int totalitem=0, rear=-1, front=0;

int Queue[capacity];

bool isfull(){
    if(totalitem==capacity){
        return true;
    }
    else
        return false;

}
bool isempty()
{
    if(totalitem==0){
        return true;
    }
    else
        return false;
}
void enqueue(int item)
{
  if(isfull()){
    printf("No exception!! Queue is full ");
    return -1;
  }
  else
  {
    rear=rear+1;
   Queue[rear]=item;
  totalitem++;
  }
}
 dequeue(){
    if(isempty()){
        printf("No exception !!!! Queue is empty");
        return -1;
    }
    else
    {
        int frontitem=Queue[front];
        front=(front+1)%capacity;
        return frontitem;
    }

}
void printQueue(){
int i;
printf("Queue:");
for(i=0;i<capacity;i++){
    printf("%d ",Queue[i]);
    printf("\n");
}
//printf("\n");
}
int main()
{
    enqueue(49);
    enqueue(45);
    enqueue(29);
     printf("Dequeue value: %d \n",dequeue());
      printf("Dequeue value: %d \n",dequeue());
       printf("Dequeue value: %d\n ",dequeue());
        printf("Dequeue value: %d \n",dequeue());
    printQueue();
    enqueue(34);
    enqueue(10);
    enqueue(32);
    enqueue(11);
    enqueue(21);
    printf("Dequeue value: %d ",dequeue());
    printQueue();
    enqueue(35);
}

