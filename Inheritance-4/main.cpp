//
//  main.cpp
//  Inheritance-4
//
//  Created by Prince Rajpoot on 21/05/22.
//

#include <iostream>
using namespace std;


class A{
    
  
public:
    A(){
        cout<<"constructor of a"<<endl;
    }
    virtual ~A(){
        cout<<"destructor of a"<<endl;
    }
    
};

class B : public A{
    
  
public:
    B(){
        cout<<"constructor of b"<<endl;
    }
    ~B(){
        cout<<"destructor of b"<<endl;
    }
    
};



int main(int argc, const char * argv[]) {
    
    //A a;  constructor of a and destructor of b
    //B b;  constructor of a the b and then destructor of b then a
    //A *ap=new A();
    //delete ap;
    
    
    
    // To call both the destructor from parent class pointer.
    A *ap=new B();
    delete ap;
    //Now, Delete ap will call both the destructor, that is destructor of a and b both will be called. As we have make the destructor of A as virtual.
    
    
    

    
    
    
    
    return 0;
}









