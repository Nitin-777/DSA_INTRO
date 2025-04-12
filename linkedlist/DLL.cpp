#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }

    public:
    Node(int data2){
        data=data2;
        next=NULL;
        prev=NULL;

    }
};
Node* DLL(vector<int>&values){
    Node* head=new Node(values[0]);
    Node* prev =head;
    for(int i=1; i<values.size(); i++){
        Node* temp= new Node(values[i]);
        temp->next=NULL;
        temp->prev=prev;
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void Print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deletehead(Node* head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete(temp);
    return head;
}
Node* deletetail(Node* head){
    Node*tail=head;
    Node* Last;
    while(tail->next!=NULL){
     tail=tail->next;
    }
    Last=tail->prev;
    Last->next=NULL;
    tail->prev=NULL;
    delete(tail);
    return head;
}

Node *deleteKelement(Node* head, int k){
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
        Node *last=temp->prev;
        Node* front=temp->next;
        if(last==NULL && front==NULL){
           return NULL;
        }
        else if(last==NULL){
           return deletehead(head);
        }
        else if(front==NULL){
            return deletetail(head);
        }
            last->next=temp->next;
            temp->next=temp->prev;
            temp->next=NULL;
            temp->prev=NULL;
            delete(temp);
         
 return head;
}
int main() {
    vector<int> values{1,2,3,4,5};
    Node* head=DLL(values);
     Print(head);
    //head=deletehead(head);
    cout<<" "<<endl;
    //CPrint(head);
   // head=deletetail(head);
   // Print(head);
   head=deleteKelement(head,3);
   Print(head);
    
    return 0;
}