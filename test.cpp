#include<iostream> 

using namespace std; 
class feild{
    private:
        int length;
        int breadth;
    public:
        feild(int l,int b):length(l),breadth(b){}
        void calculateArea(){
            cout<<"The area is "<<length*breadth<<endl;
        }
        void showDetails(){
            cout<<"The length is "<<length<<" and the breadth is "<<breadth<<endl;
        }
};

int main(){
    feild golus(23,56);
    golus.calculateArea();
    golus.showDetails();
    return 0;
}