//
//  main.cpp
//  inheritance
//
//  Created by Prince Rajpoot on 17/05/22.
//

#include <iostream>
using namespace std;

class Parent{
  
public:
    int x;
    void display(){
        cout<<"Parent display"<<endl;
    }
};
class child:public Parent{
    
public:
    int y;
    void show(){
        cout<<"Child display"<<endl;
    }
    
    
};

int main(int argc, const char * argv[]) {

    {
//    Demo ob;
//    Demo *ptr=&ob;
//
//    child ch;
//    child *ctr=&ch;
//
//    cout<<ptr->x<<endl;// garbage value
//    cout<<(*ptr).x<<endl;
//    ptr->display();//clling display funtion
//
//    cout<<(*ctr).y<<endl;
//    ctr->show();
//
//    ptr=&ctr; //Up casting
////    child* cp=&ob; // down casting is not allowed
////
////    cout<<((Demo *)cp)->; // Error. accessing of child class member
////
////    ((Demo *)cp)->show(); //It is not allowed with pointer of parent class
////
//    //cout<<((Demo *)cp)->x<<endl; //No error
//
//    //((Demo *))
    
    }
    
    Parent p ,*pp;
    child c,*cp;

    pp->display(); // null pointer , still we will get the desired output
    
    pp=&p;
    pp->display();
    //output: parent display
    
    cp=&c;
    cp->display();
    //output: child display
    
    //parent class pointer that contain child class object, cannot excess the child class data. type of pointer matters
    
    
    
//    if we use virtual machine, then it will be run time binding and in this case periority is given to type of data in pointer.
    //in parent class , you have to make display function as virtual, in order to do runtime polymorphism, and in this case if we use parent class pointer and store child class object in it, and after that if we call display funtion, then display will we called according to the object type.
    
    
    
    
    
 
    
    
    
    
    
    
    
    
    
    pp->display(); //Static binding
    

    
    
    
    
    
    
    return 0;
}




