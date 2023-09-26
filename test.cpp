#include<iostream> 

using namespace std; 

int main(){
    int V,W;
    cout<< "Enter the number of vehicles. ";
    cin>>V;
    cout<<endl<<"Enter the number of tyres: ";
    cin>>W;
    int twoWhe, fourWhe;
    twoWhe= (4* V - W)/2;
    fourWhe = V-twoWhe;
    cout<<endl<<twoWhe<<" "<<fourWhe;

    return 0;
}