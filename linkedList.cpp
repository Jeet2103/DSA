#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data = val;
            next = nullptr;
        }
};
class LinkedList
{
    private:
        Node* head;
    public:
        LinkedList()
        {
            head = nullptr;
        }
        void insert(int val)
        {
            Node* newNode =new Node(val);
            if(head==nullptr)
            {
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next!=nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void display()
        {
            Node* temp = head;
            while(temp)
            {
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<< "NULL"<<endl;
        }

        void reverse()
        {
            Node* prev = nullptr;
            Node* current = head;
            Node* currnext;
            while(current)
            {
                currnext = current->next;
                current->next = prev;
                prev = current;
                current = currnext;
            }
            head =  prev;
        }
        ~LinkedList()
        {
            Node* temp;
            while(head)
            {
                temp = head;
                head = head ->next;
            }
            delete temp;
        }

};

int main()
{
    LinkedList list;
    list.insert(23);
    list.insert(56);
    list.insert(79);
    list.display();
    list.reverse();
    list.display();

    return 0;
}