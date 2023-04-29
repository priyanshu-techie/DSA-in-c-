#include<iostream> 

using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node(int dat){
        data = dat;
        this->next = NULL;
    }
};

void addAtEnd(Node* &head, int data){
    Node* n = new Node(data);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void addAtFront(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void adAtPosition(Node * &head, int position, int data ){
    if (position==1){
        addAtFront(head,data);
        return;
    }

    Node * temp=head;
    for(int i=0;i<position-2;i++){
        if(temp->next!=NULL){
            temp=temp->next;
        }
        else break;
    }
    if(temp->next==NULL){
        cout<<"position exceeds the size of the linked list, Adding at end of the linked list."<<endl;
    }
    Node* temp2=new Node(data);
    temp2->next=temp->next;
    temp->next=temp2;
}


// Node* reverse(Node* head){
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;
//     while(curr != NULL){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// Node* reverseRecursive(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     Node* newHead = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newHead;
// }

void display(Node * head ){
    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    
}


int main(){
    Node * head=NULL;
    int elems[]={24,78,47,93,29,61};
    for(int i=0; i<6;i++){
        addAtEnd(head,elems[i]);
    }
    adAtPosition(head,1000,856);
    display(head);
}



