#include <iostream>
using namespace std;

class Stacks{

    public:
    int size=10;
    int arr[10];
    int top=-1;
    
    public :
    void push(int element){
        top++;
        if (top == size){
            cout<<"Overflow";
            return;
        }
        arr[top]=element;
    }
    
    void pop(){
        top--;
        if (top == -1){
            cout<<"Underflow";
            return;
        }
    }
    
    int peek(){
        return arr[top];
    }
};


int main() {
        
    Stacks s;
    s.push(5);
    s.push(2);
    s.push(11);
    s.push(10);
    s.push(11);
    s.push(2);
    s.push(11);
    s.push(10);
    s.push(11);
    s.push(10);

    cout<<s.peek();

    s.pop();

    cout<<s.peek();
    
    return 0;
}
