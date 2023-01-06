//
//  main.cpp
//  UseOfStack
//
//  Created by Prince Rajpoot on 06/04/22.
//

#include <iostream>
#include "stack.cpp"
using namespace std;


void reverseStack(stack &input, stack &extra) {
    //Write your code here
    //bool a=input.isEmpty();
    if(input.isEmpty()==true){
        return;
    }
    int temp=input.pop();
    reverseStack(input, extra);
    
   // extra.push(temp);
    
    while(!input.isEmpty()){
        extra.push(input.pop());
        
    }
    extra.push(temp);
    
    while(!extra.isEmpty()){
        input.push(extra.pop());
        
    }
    //return;
}


int main(){
    
    stack s ,rev;
    stack input,extra;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    
    
//    for(int i=0;i<4;i++){
//        cout<<input.pop()<<endl;
//    }
    reverseStack(input,extra);
    
    for(int i=0;i<4;i++){
        cout<<input.pop()<<endl;
    }
//
    
//    cout<<s.pop()<<endl;
//    cout<<s.size()<<endl;
//    for(int i=0;i<4;i++){
//        cout<<s.pop()<<endl;
//    }
  
    
    
//    for(int i=0;i<4;i++){
//            cout<<rev.pop()<<endl;
//        }
    
    
    return 0;
}
