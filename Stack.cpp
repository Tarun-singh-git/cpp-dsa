#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int top;
int size;
stack(int size){
    this->size=size;
    arr=new int(size);
    top=-1;
}
void push(int x){
    if(size-top>1){
        top++;
        arr[top]=x;
    }
    else{
        cout<<"stack overflow"<<endl;
}

}
void pop(){
    if(top>=0){
        top--;

    }
    else{
        cout<<"stack underflow"<<endl;

    }
}
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stack empty"<<endl;
        return-1;
    }
}
bool isempty(){
    if(top==-1){
        return true;
    }
    else{
return false;
    }
}
};
int main()
{
    stack st(5);
    st.push(25);
    st.push(65);
    st.pop();
    cout<<st.peek()<<endl;
    /* code */
    return 0;
}
