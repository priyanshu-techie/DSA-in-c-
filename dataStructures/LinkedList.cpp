#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int dat)
    {
        data = dat;
        this->next = NULL;
        nodeCount++;
    }
    static int nodeCount;
};

int Node::nodeCount;

void addAtEnd(Node *&head, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void addAtFront(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void adAtPosition(Node *&head, int position, int data)
{
    if (position == 1)
    {
        addAtFront(head, data);
        return;
    }

    Node *temp = head;
    for (int i = 0; i < position - 2; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
        else
            break;
    }
    if (temp->next == NULL)
    {
        cout << "position exceeds the size of the linked list, Adding at end of the linked list." << endl;
    }
    Node *temp2 = new Node(data);
    temp2->next = temp->next;
    temp->next = temp2;
}

void deleteAtBeg(Node *&head){
    Node* temp=head->next;
    delete head;
    head=temp;
}

void deleteEnd(Node * head){
    while(head->next->next!=NULL)
       { head=head->next;}
    delete head->next;
    head->next=NULL;
}

void deleteAtPosition(Node *& head , int position){
    if(position<0){cout<<"not a valid position value!!"; return;}
    if(position==1){deleteAtBeg(head); return;}
    Node* temp=head,*temp2;
    for(int i =0;i<position-2;i++){
        if(temp->next==NULL) break;
        temp=temp->next;
    }
    if(temp->next==NULL){deleteEnd(head);return;}
    temp2=temp->next->next;
    delete temp->next;
    temp->next=temp2;

}

int findLength(Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

int findLengthRecursive(Node* head){
    static int count=0; 
    if(head!=NULL){
        count++;
        findLengthRecursive(head->next);// i dont want to do anything with the returned value, just want the  functino to run as many times so as to increase the static variable count.
    }
    return count;

}

void reverseLL(Node* & head){
    Node* prev=NULL, * next=NULL, *curr=head;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}

Node* revLLRecur(Node* head){
    // here we are assuming that the previous recurrsion call will do the work of reversin the ll given
    // 1. make the ll small by recursively taking head as the forward node
    // 2. we have the first if conditino as escape condition
    // 3. in the last reccursion call, we get a pointer to a node whose next is pointing to null, 
    // 4. then we come out and our head is the second last node , whose next is changed to null and previous last node which we got, its last node is pointing to null change it to head and heads next to null 
    // 5. similary first we need to go to the last node in the reversed ll and then do these changes
    if(head==NULL || head->next==NULL)
        return head;
    
    Node* temp,*lastNode;
    temp=revLLRecur(head->next);
    lastNode=temp;
    while (lastNode->next!=NULL)
        lastNode=lastNode->next;
    lastNode->next=head;
    head->next=NULL;
    return temp;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    addAtFront(head,73);
    int elems[] = {24, 78, 47, 93, 29, 61};
    for (int i = 0; i < 6; i++)
    {
        addAtEnd(head, elems[i]);
    }
    adAtPosition(head, 1000, 856);
    // display(head);
    // cout<<endl<<Node::nodeCount;
    // cout<<endl<<findLengthRecursive(head);
    // cout<<endl<<findLength(head)<<endl;
    // reverseLL(head);
    // display(head);
    // cout<<endl<<endl<<findLength(head);
    // head=revLLRecur(head);
    display(head);
    // deleteEnd(head);
    cout<<endl<<"---------------------------------------"<<endl;
    deleteAtBeg(head);
    deleteAtPosition(head,300);
    display(head);

}
