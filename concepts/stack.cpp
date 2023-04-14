#include<iostream> 

using namespace std; 
int stack[100],n=100,top=-1;

void push(int data){
    if(top<n){
        top++;
        stack[top]=data;
    }
    else{
        cout<<"the stack is overflow";
    }
}

void pop(){
    if(top==-1) cout<<"the stack is empty";
    else {
        cout<<"the popped element is "<<stack[top];
        top--;
    }
}
void list(){
    if (top==-1)
    {
        cout<<"The list is empty";
    }
    else{
        for(int i =0;i<=top;i++){
            cout<<stack[i]<<", ";
        }
    }
}

int main(){
    cout<<"1. add new val"<<endl<<"2. pop"<<endl<<"3. list"<<endl<<"4. exit";
    int choice=0;
    do
    {
        cout<<endl<<"enter your choice"<<endl;
        cin>>choice;    // there is certain buffer problem here, when giving an invalid data any value is feeded by the buffer to cin and it couses the loop to go infinite.
        switch (choice)
        {
        case 1:
            int data;
            cout<<"enter the number ";
            cin>>data;
            push(data);
            cout<<"Data added";
            break;
        case 2:
            pop();
            break;
        case 3:
            list();
            break;
        case 4:cout<<"exited";break;
        default:
            cout<<"Thats not a valid choice";
            break;
        }
    } while (choice!=4);
    
    return 0;
};