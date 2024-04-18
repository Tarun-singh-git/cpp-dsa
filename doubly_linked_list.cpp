#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node*prev;
node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
~node(){
    int value=this->data;
    while(next!=NULL){
        delete next;
        next=NULL;
    }
}
};
void insertathead(node*&head,int d){
    node*temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(node*&tail,int d){
    node*temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertatmid(node*&head,node*&tail,int k,int d){
    if(k==1){
        insertathead(head,d);
        return;
        }
        node*temp=head;

        int c=1;
        while(c<k-1){
            temp=temp->next;
            c++;
        }
        if(temp->next==NULL){
            insertattail(tail,d);
            return;
        }
        node*ip=new node(d);
        ip->next=temp->next;
        temp->next->prev=ip;
        temp->next=ip;
        ip->prev=temp;

}
void del(node*&head,int k){
    if(k==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
       
        temp->next=NULL;
        delete temp;
    }
    else{
        int c=1;
        node*curr=head;
        node*prev=NULL;
        while(c<k){
            prev=curr;
            curr=curr->next;
            c++;
        }
     curr->prev=NULL;
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;
    }
}
void print(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }cout<<endl;
    
    
}
int main(){
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertatmid(head,tail,1,5);
    insertatmid(head,tail,3,15);
    insertatmid(head,tail,4,20);
    insertatmid(head,tail,5,25);
    insertatmid(head,tail,3,12);
    print(head);
    del(head,3);
    print(head);
    del(head,1);
    print(head);
    del(head,4);
print(head);
   return 0;
}
