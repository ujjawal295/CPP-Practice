#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node * next;

    Node(int value)
    {
        data=value;
        next=NULL;    
    }

};
void traverse(Node * head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";

}

int main()
{
    Node* node1=new Node(1);
    Node* node2=new Node(23);
    Node* node3=new Node(29);

    node1->next=node2;
    node2->next=node3;

    Node *head = node1;

    traverse(head);
}

