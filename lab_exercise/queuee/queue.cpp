//OPERTAIONS ON QUEUE
#include<iostream>
using namespace std;
class Queue
{
 private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

 public:
    Queue(int capacity)
    {
        this->capacity=capacity;
        this->arr=new int(this->capacity);
        this->front=-1;
        this->rear=-1;
        this->count=0;
    }
    
    void enqueue(int element)
    {
        if(this->rear == this->capacity-1) 
        {
            cout << "Queue is overflow..." << endl;
        }
    }
};
int main()
{
    int choice;
    do
    {

        cout << "Press 1 for enqueue:" << endl;
        cout << "Press 2 for dequeue:" << endl;
        cout << "Press 3 for front:" << endl;
        cout << "Press 4 for rear:" << endl;
        cout << "Press 5 for display:" << endl;
        cout << "Press 6 for isEmpty:" << endl;
        cout << "Press 7 for isFull:" << endl;
        cout << "Press 8 for size:" << endl;
        cout << "Press 0 for exit:" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;
    }while(choice !=0);
    return 0;
}