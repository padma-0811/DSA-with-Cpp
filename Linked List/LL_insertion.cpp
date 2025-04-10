/******************************************************************************

LINKED LISTS : Insertion at Beginning, End, Middle

*******************************************************************************/
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

    void printList(Node* head){
        Node* current = head;
        while(current!=nullptr){
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout<<"NULL";
    }
    
    void InsertAtBeginning(Node*& head, int newData){
        Node* newNode = new Node(newData);
        
        newNode->next = head;
        head = newNode;
    }
    
    void InsertAtEnd(Node*& head, int newData){
        Node* newNode = new Node(newData);
        
        if (head==nullptr){
            newNode->next = head;
            head = newNode;
            return;
        }
        
        Node* current = head;
        while(current->next !=nullptr){
            current = current->next;
        }
        current->next = newNode;
    }
    
    void InsertAtMiddle(Node*& head, int newData, int position){
        Node* newNode = new Node(newData);
        
        if (position==0){
            newNode->next = head;
            head = newNode;
            return;
        }
        
        Node* current = head;
        for(int i = 0; current!=nullptr && i<position-1; i++){
            current = current->next;
        }
        
        if(current == nullptr){
            cout<<"Out of Bounds";
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    
    int main(){
        Node* head = nullptr;
      
        InsertAtBeginning(head, 30);
        InsertAtBeginning(head, 20);
        InsertAtBeginning(head, 10);

        
        InsertAtEnd(head,50);
        
        InsertAtMiddle(head,60,2);
        
        printList(head);
    }