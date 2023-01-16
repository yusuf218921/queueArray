#include <stdio.h>
#define MAX 10

int front = -1;
int rear = -1;

void enqueue(int queue[], int s) {
    if (rear == -1) {
        front = rear = 0;
        queue[front] = s;
        printf("kuyruga %d elemani eklendi.\n", s);
    }
    else if (rear == MAX - 1) {
        printf("kuyruk dolu, eleman eklenemez!!!\n");
    }
    else {
        rear++;
        queue[rear] = s;
        printf("kuyruga %d elemani eklendi.\n", s);
    }
}

void dequeue(int queue[]) {
    if (front == -1) {
        printf("kuyruk bos eleman silinemez!!!\n");
    }
    else if (rear == front) {
        printf("%d elemanı kuyruktan silindi\n", queue[front]);
        rear = front = -1;
    }
    else {
        printf("%d elemanı kuyruktan silindi\n", queue[front]);
        front++;
    }
}

void read(int queue[]) {
    if (front == -1) {
        printf("kuyruk bos eleman okunamaz!!!\n");
    }
    else {
        for (int i = front; i <=rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    int queue[MAX];

    enqueue(queue, 5);
    enqueue(queue, 4);
    enqueue(queue, 3);
    enqueue(queue, 2);
    enqueue(queue, 1);

    read(queue);
    dequeue(queue);
    read(queue);
}


