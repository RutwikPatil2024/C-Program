#include<stdio.h>
int queue[3];
int size=3;
int front=-1;
int rear=-1;
void enque(int val)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = val;
    }
    else if (front == 0 && rear == size - 1)
    {
        printf("queue is full.....\n");
    }
    else
    {
        rear++;
        queue[rear] = val;
    }
    
}
int main()
{
        

    return 0;
}