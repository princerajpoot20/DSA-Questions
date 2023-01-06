//
//  main.cpp
//  Inheritance-3
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
    
    //A a;                                  constructor of a and destructor of a
    
    //B b;                                  constructor of a the b and then destructor of b then a
    
    
    //A *ap=new A();
    //delete ap;                            constructor of a and destructor of a
    
    
//    B *bp=new B();
//    delete bp;                            constructor of a the b and then destructor of b then a
    
 // ----------------*************************----------------------------------
//    A *ap=new B();
//    delete ap;()                            constructor of a the b and destructor of a only.   Delete ap will only
    //                                        call base class destructor
    //Solution: to destroy object of derived class, the destructor of parent class sholud be declared as virtual.
    
   // for code of virtual destructor, goto inheritance-4 code
    return 0;
}















 
