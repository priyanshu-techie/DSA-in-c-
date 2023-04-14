#include<stdio.h>
#include<stdlib.h>



  struct ListNode {
      int val;
      struct ListNode *next;
  };
  
  struct ListNode* adAtEnd( struct ListNode* head,int data ){
    if(head==NULL){
        struct ListNode* temp=( struct ListNode*)malloc(sizeof( struct ListNode));
        temp->val=data;
        temp->next=NULL;
        head=temp;
    }else{
        struct ListNode* copy=head;
        while (copy->next!=NULL)
        {
            copy=copy->next;
        }
        
        struct ListNode* temp=( struct ListNode*)malloc(sizeof( struct ListNode));
        temp->val=data;
        temp->next=NULL;
        copy->next=temp;
    }
    return head;
  }
  

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode * ptr1=list1,*ptr2=list2,*newNodeHead=NULL;
    
    while(ptr1!=NULL || ptr2!=NULL)
    {  
        if(ptr1!=NULL && ptr2!=NULL) {
            if(ptr1->val < ptr2->val){
                newNodeHead=adAtEnd(newNodeHead,ptr1->val);
                ptr1=ptr1->next;
            }
            else if(ptr1->val > ptr2->val){
                newNodeHead=adAtEnd(newNodeHead,ptr2->val);
                ptr2=ptr2->next;
            }
            else{
                newNodeHead=adAtEnd(newNodeHead,ptr1->val);
                ptr1 = ptr1->next;
            }
        } 
        else if(ptr1==NULL&&ptr2!=NULL){
            // copy the remaining elems in ptr2 in the answer
            while (ptr2!=NULL)
            {
                newNodeHead=adAtEnd(newNodeHead,ptr2->val) ;
                ptr2=ptr2->next;
            }
            
        }
        else if(ptr1!=NULL&&ptr2==NULL){
            // copy the remaining elems in ptr1 in the answer
            while (ptr1!=NULL)
            {
                newNodeHead=adAtEnd(newNodeHead,ptr1->val) ;
                ptr1=ptr1->next;
            }
            
        }
    }

    return newNodeHead;
}
void listPrint(struct ListNode* head){
    while (head!=NULL)
    {
        printf("%d \n",head->val);
        head=head->next;
    }
    
}

int main(){
    struct ListNode *l1=NULL,*l2=NULL,*mergeList;
    l1=adAtEnd(l1,1);
    l1=adAtEnd(l1,2);
    l1=adAtEnd(l1,5);
    l2=adAtEnd(l2,3);
    l2=adAtEnd(l2,5);
    l2=adAtEnd(l2,5);
    l2=adAtEnd(l2,7);

    mergeList=mergeTwoLists(l1,l2);
    listPrint(mergeList);

    return 0;
}