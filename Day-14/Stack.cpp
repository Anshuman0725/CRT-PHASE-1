#include <iostream>
using namespace std;

#define SIZE 5   // stack size

class Stack {
    int arr[SIZE];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " inserted\n";
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " removed\n";
    }

    // Peek (top element)
    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}