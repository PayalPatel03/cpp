//OPERTAIONS ON QUEUE
#include<iostream>
using namespace std;
class Queue{
 private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

 public:
    Queue(int capacity){
        this->capacity=capacity;
        this->arr=new int(this->capacity);
        this->front=-1;
        this->rear=-1;
        this->count=0;
    }
};
int main(){
    Queue queue(5);
    return 0;
}