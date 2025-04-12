#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
   
    public:
    Node(int data1){
       data=data1;
       next=NULL;
       prev=NULL; 
    }

    Node(int data1,Node* next1, Node* prev1){
       data=data1;
       next=next1;
       prev=prev1;
    }
};
Node* makeLL(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* prev=head;
    for(int i=1; i<nums.size(); i++){
        Node* temp=new Node(nums[i]);
        temp->next=NULL;
        temp->prev=prev;
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head) {
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* Insertatbegin(Node*head, int x){
    Node* value=new Node(x);
    head->prev=value;
    value->next=head;
    value->prev=NULL;
    head=value;
    return head;

}

int main() {
    vector<int> nums{1,2,3,4,5};
    Node* head=makeLL(nums);
    print(head);
    head=Insertatbegin(head,6);
    cout<<" "<<endl;
    print(head);
      
    
    return 0;
}