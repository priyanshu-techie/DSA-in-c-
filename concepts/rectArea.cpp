#include<iostream> 

using namespace std; 
class rectArea
{
private:
    double len;
    double bred;
public:
    rectArea(int l,int b){
        len=l;
        bred=b;
    }
    rectArea(double l,double b){
        len=l;
        bred=b;
    }
    ~rectArea(){
        cout<<endl<<"program ended";
    }

    double findArea(){
        return len*bred;
    }
    
};

int main(){
    rectArea finder(23.45,22.22);
    rectArea finder2(23,22);
    cout<<finder.findArea()<<endl;
    cout<<finder2.findArea();
    return 0;
}



