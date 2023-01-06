#include <iostream>
using namespace std;

class rational{
int x;

public:
    void getData(){
        cout<<"Enter the value"<<endl;
        cin>>x;
        if(x==0){
            cout<<"Invalid Input"<<endl;
        }
    }
    void display(){
        cout<<x<<endl;
    }
    rational operator +(rational r){
        rational temp;
        temp.x=x+r.x;
        return temp;
    }
    rational operator -(rational r){
        rational temp;
        temp.x=x-r.x;
        return temp;
    }
    rational operator *(rational r){
        rational temp;
        temp.x=x*r.x;
        return temp;
    }
    rational operator /(rational r){
        rational temp;
        if(r.x==0){
            cout<<"Invalid Input"<<endl;
            temp.x=0;
            return temp;
        }
        
        temp.x=x/r.x;
        return temp;
    }
};


int main(){

    rational r1,r2,r3;
    r1.getData();
    r2.getData();
    
    r3=r1+r2;
    r3.display();
    r3=r1-r2;
    r3.display();
    r3=r1*r2;
    r3.display();
    r3=r1/r2;
    r3.display();

return 0;
}
