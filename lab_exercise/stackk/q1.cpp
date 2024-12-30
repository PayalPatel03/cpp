#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int capacity;
    int top;
    int count;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        this->top = -1;
        this->count = 0;
    };
    ~Stack()
    {
        delete[] arr;
    }
    void push(int element)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->count++;
            cout << " Enter is Pushed..." << endl;
        }
    }
    void pop()
    {
        if (this->top == -1)

        {
            cout << "Stack is underflow..." << endl;
        }
        else
        {
            this->top--;
            cout << "Element is Pooped..." << endl;
            this->count--;
        }
    }
    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty...." << endl;
        }
        else
        {
            cout << arr[this->top] << endl;
        }
    }
    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty...." << endl;
        }
        else{
            for(int i = this->top; i>=0; i--){
                cout<< this->arr[i]<< " ";
            }
            cout<< endl;
        }
    }
    void isEmpty()
    {
         if (this->top == -1)
        {
            cout<< "Stack is empty...."<<endl;
        }
       else{
        cout << "Stack is not  empty...."<< endl;
       }
    }
    void isFull(){
        if (this->top == this->capacity -1)
        {
            cout << "Stack is full"<<endl;
        }
        else{
            cout << "Stack is not full"<< endl;
        }
    }
    void size(){
        cout<<"Size of a stack is " << this->count << endl;
    }
};

int main()
{
    Stack stack(4);

    int choice, element;

    do
    {
        cout << "Press 1 for push operation" << endl;
        cout << "Press 2 for pop operation" << endl;
        cout << "Press 3 for peek operation" << endl;
        cout << "Press 4 for display operation" << endl;
        cout << "Press 5 for isEmpty operation" << endl;
        cout << "Press 6 for isFull operation" << endl;
        cout << "Press 7 for size operation" << endl;
        cout << "Press 0 for exit operation" << endl;

        cout << "Enter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> element;
            stack.push(element);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            stack.isEmpty();
            break;
        case 6:
            stack.isFull();
            break;
        case 7:
            stack.size();
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice..." << endl;

            break;
        }

    } while (choice != 0);
}