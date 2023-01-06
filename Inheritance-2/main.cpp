//
//  main.cpp
//  Inheritance-2
//
//  Created by Prince Rajpoot on 20/05/22.
//

#include <iostream>
using namespace std;

class a{

public:
void f(){
    cout<<"a::f"<<endl;
}
virtual void g(){
    cout<<"a::g"<<endl;
}
void h(){
    cout<<"a::h"<<endl;
}
};

class b:public a{
    
  
public:
    
    void f(){
        cout<<"b::f"<<endl;
    }
    void g(){
        cout<<"b::g"<<endl;
    }
    virtual void h(){
        cout<<"b::h"<<endl;
    }
    
};


class c:public b{
    
public:
    void f(){
        cout<<"c::f"<<endl;
    }
    void g(){
        cout<<"c::g"<<endl;
    }
    void h(){
        cout<<"c::h"<<endl;
    }
    
};
int main(){
    
    b *q = new c;
    a *p = q;
    
    p->f();
    p->g(); // ch
    
    p->h();
    
    q->f();
    q->g();
    q->h();
    
    
    
    
    
    
}




