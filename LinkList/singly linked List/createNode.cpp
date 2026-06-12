#include <iostream>
using namespace std;

class Node{

    public:

    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        next = NULL;

    }

};
void traverseList(Node * head)
    {
        Node * temp = head;
        while(temp != NULL)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
            
        }
        cout<<"Null";
    }
int main()
{
    Node * node1 = new Node(10);
    Node * node2 = new Node(20);
    Node * node3 = new Node(40);

    node1->next=node2;
    node2->next=node3;


    Node * head = node1;
    traverseList(head);

}