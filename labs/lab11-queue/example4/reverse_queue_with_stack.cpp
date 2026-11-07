#include <iostream>
#include <queue>
#include <string>
#include <stack>

using namespace std;

void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

// Function to reverse the queue
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }

    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}

int main()
{
    queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(80);
    Queue.push(180);
    Queue.push(57);
    Queue.push(60);
    Queue.push(72);
    Queue.push(31);
    Queue.push(64);
    Queue.push(100);
    queue<int> temp(Queue);
    cout << "Kurylygan kezek elementteri" << endl;
    Print(temp);
    reverseQueue(Queue);
    cout << endl;
    cout << "Keri ornalastyrylgan kezek elementteri" << endl;
    Print(Queue);
    cout << endl;
}