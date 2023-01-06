//
//  main.cpp
//  Lab8-Que1
//
//  Created by Prince Rajpoot on 24/05/22.
//

#include <iostream>
using namespace std;
class shape{
  
protected:
    double length1,length2;
    
public:
    void set_data(int x,int y=0){
        length1=x;
        length2=y;
    }
    virtual void display_area()=0;
    
};

class triangle :public shape{
    
public:
    
    void display_area(){
        int area=length1*length2/2;
        cout<<"Area of triangle:"<<area<<endl;
    }
};
class rectangle :public shape{
  
public:

    void display_area(){
        int area=length1*length2;
        cout<<"Area of rectangle:"<<area<<endl;
    }
};

class circle :public shape{
  
public:
    void display_area(){
        int area=3.14*length1*length1;
        cout<<"Area of circle:"<<area<<endl;
    }
};

int main(){
    
    shape *s;
    
    triangle tr;
    rectangle rec;
    circle cr;
    
    s=&tr;
    s->set_data(10, 20);
    s->display_area();
    
    s=&rec;
    s->set_data(10,20);
    s->display_area();
    
    s=&cr;
    s->set_data(10);
    s->display_area();
    
}
