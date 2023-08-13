#include <iostream>
using namespace std;

template<typename dType, int size>
class Stacks{

    public:
    dType arr[size];
    int top=-1;
    
    public :
    void push(dType element){
        top++;
        if (top == size){
            cout<<"Push: Overflow"<<endl;
            return;
        }
        cout<<"Push: "<<element<<endl;
        arr[top]=element;
    }
    
    void pop(){
        if (top <= -1){
            cout<<"Pop: Underflow"<<endl;
            return;
        }
        top--;
        cout<<"Pop: "<<endl;
    }
    
    dType peek(){
        if (top<size && top>-1){
            return arr[top];
        }
        else{
            cout<<"garbage value = ";
            return dType();
        }
    }

    void isEmpty(){
        if (top<=-1){
            cout<<"Empty Stack"<<endl;
        }
        else{
           cout<<"Not Empty Stack"<<endl;
        }
    }

    bool isFull(){
        if (top>=size-1){
            cout<<"Full Stack"<<endl;
        }
        else{
           cout<<"Not Full Stack"<<endl;
        }
    }
};


int main() {
        
    Stacks <int, 5> s;
    
    s.pop();
    s.isEmpty();
    s.isFull();
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"Peek: "<<s.peek()<<endl;
    s.push(0);
    s.isEmpty();
    s.isFull();
    
    return 0;
}