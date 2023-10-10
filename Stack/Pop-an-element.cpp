#include <iostream>
using namespace std;

const int max_size = 100;

class Stack {
private:
    int s[max_size];
    int top;
    int size;

public:
    Stack() {
        top = -1;
        size = 0;
    }

    void push(int value) {
        top++;
        s[top] = value;
        size++;
    }

    void print() {
        for (int i = 0; i <= top; i++) {
            cout << s[i] << " ";
        }
    }

    int pop() {
        int value = s[top];
        top--;
        size--;
        return value;
    }
    
    bool isEmpty(){
        if(top == -1){
            cout<<"Stack is empty!";
        }
        else{
            cout<<"Stack is not empty!";
        }
    }
    
};

int main() {
    int n, value;
    cin >> n;

    Stack s;

    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
    }

    cout << "Elements of the stack: ";
    s.print();
    cout << endl;

    cout << "Popped value: " << s.pop() << endl;
    
    s.isEmpty();

    return 0;
}

