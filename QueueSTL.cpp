#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<int>q;
  q.push(10);
  cout<<"Front is->"<<q.front()<<endl;
  q.push(20);
   cout<<"Front is->"<<q.front()<<endl;
  q.push(30);
   cout<<"Front is->"<<q.front()<<endl;
  q.push(40);
   cout<<"Front is->"<<q.front()<<endl;
  cout<<"size of queue is:"<<q.size()<<endl;
  q.pop();
  q.pop();
  /*q.pop();
   q.pop();*/

  cout<<"size of queue is:"<<q.size()<<endl;
  if(q.empty()){
    cout<<"Queue is Empty"<<endl;
}
else{
    cout<<"Queue is Not Empty"<<endl;
}
}
