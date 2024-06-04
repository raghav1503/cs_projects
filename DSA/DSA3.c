#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Queue {
int items[MAX_SIZE];
int front;
int rear;
};
struct Queue* createQueue() {
struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
queue->front = -1;
queue->rear = -1;
return queue;
}
bool isEmpty(struct Queue* queue) {
return queue->front == -1;
}
void enqueue(struct Queue* queue, int value) {
if (queue->rear == MAX_SIZE - 1) {
printf("Queue is full\n");
} else {
if (queue->front == -1) {
queue->front = 0;
}
queue->rear++;
queue->items[queue->rear] = value;
}
}
int dequeue(struct Queue* queue) {
int item;
if (isEmpty(queue)) {
printf("Queue is empty\n");
item = -1;
} else {
item = queue->items[queue->front];
queue->front++;
if (queue->front > queue->rear) {
queue->front = queue->rear = -1;
}
}
return item;
}
void BFS(int graph[MAX_SIZE][MAX_SIZE], int vertices, int startVertex) {
struct Queue* queue = createQueue();
bool visited[MAX_SIZE] = {false};
visited[startVertex] = true;
enqueue(queue, startVertex);
while (!isEmpty(queue)) {
int currentVertex = dequeue(queue);
printf("%d ", currentVertex);
for (int i = 0; i < vertices; ++i) {
if (graph[currentVertex][i] == 1 && !visited[i]) {
visited[i] = true;
enqueue(queue, i);
}
}
}
}
int main()
{ int vertices, edges, startVertex;
printf("Enter the number of vertices: ");
scanf("%d", &vertices);
int graph[MAX_SIZE][MAX_SIZE];
printf("Enter the adjacency matrix:\n");
for (int i = 0; i < vertices; ++i) {
for (int j = 0; j < vertices; ++j)
{ scanf("%d", &graph[i][j]); }
}
printf("Enter the starting vertex for BFS: ");
scanf("%d", &startVertex);
printf("BFS Traversal starting from vertex %d: ", startVertex);
BFS(graph, vertices, startVertex);
return 0;
}
//write a code of 2+2 in c?