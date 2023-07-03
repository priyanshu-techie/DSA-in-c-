#include<iostream> 

using namespace std; 
class Room{
    int length, breadth, height;
    public:
        Room(int l,int b, int h){
            length=l, breadth=b, height=h;
        }
        int calculateArea(){
            return length*breadth*height;
        }
};
Room createRoom(){
    Room anyroom(23,44,21);
    return anyroom;
}

void printArea(Room anyroom){
    cout<<"The are of the room is "<< anyroom.calculateArea();
}

int main(){
    Room room1(34,5,32);
    Room room2(5,5,5);
    // though room2 is created but it overwritten by createRoom function
    room2=createRoom();
    printArea(room1);
    printArea(room2);

    return 0;
}