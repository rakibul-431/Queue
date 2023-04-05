#include<stdio.h>
#include<stdbool.h>
#define capacity 4

int front=0, rear=-1,totalitem=0;
int queue[capacity];

bool isfull()
{
    if(capacity==totalitem){
    return true;
    }
    else
        return false;
}
bool isempty(){
    if(totalitem==0){
        return true;
    }
    else
        return false;
}
void enqueue(int item){
   if(isfull()){
    printf("Exception !! queue is full\n");
    return -1;
   }
       rear=rear+1;
       queue[rear]=item;
       totalitem++;


}
 int dequeue(){
    if(isempty()){
        printf("Exception !! Queue is Empty \n");
        return -1;
    }
    int printitem =queue[front];
    front=front+1;
    totalitem++;
    return printitem;
}
int printqueue(){
  int i;
  printf("Queue:");
  for(i=0;i<capacity;i++)
    printf("%d ",queue[i]);
}
int main(){
  enqueue(34);
  enqueue(23);
  enqueue(54);
  printf("Dequeue value:%d \n",dequeue());
  printqueue();

}
