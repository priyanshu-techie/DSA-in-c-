#include<iostream> 
#include<cmath>

using namespace std; 
int num1; int num2;
void askForNum(){
    cout<<endl<<"Enter the two nums to be operated on:";
    cin>>num1>>num2;
}

void calculate(){
    int input;
    cout<<"Choose an option:\n0.exit\n1. For addition\n2.Sub\n3. mul\n4. div\n5. pow\n";
    while (true)
    {
        cin>>input;
        if(!input){
            cout<<"\n Exited Successfully";
            break;
        }
        switch (input)
        {
            case 1:
                askForNum();
                cout<<"Answer is "<< num1+num2;
                break;
            case 2:
                askForNum();
                cout<<"Answer is "<< num1-num2;
                break;
            case 3:
                askForNum();
                cout<<"Answer is "<< num1*num2;
                break;
            case 4:
                askForNum();
                if(num2==0){cout<<"Second number cant be 0.Try entring again."; askForNum();}
                cout<<"Answer is "<< num1/num2;
                break;
            case 5:
                askForNum();
                cout<<"Answer is "<< pow(num1,num2);
                break;
            
            default:
                cout<<"Invalid option, try Again";
                break;
        }
        cout<<"\nChoose the option for you next operation";
    }
    
}

int main(){
    calculate();
    return 0;
}