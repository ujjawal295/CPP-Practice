#include <iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node * next = NULL;


    Node(int val)
    {
        data=val;
        next=NULL;
    }

};

void traverse(Node* head){
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}

void insertAtBeg(Node * head, int val)
{
    Node * newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}

int main()
{
    Node * node1 = new Node(12);
    Node * node2 = new Node(13);

    node1->next=node2;

    Node * head = node1;
    
    insertAtBeg(head,34);
    traverse(head);

}