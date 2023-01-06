//
//  main.cpp
//  stack
//
//  Created by Prince Rajpoot on 06/04/22.
//

#include <iostream>
using namespace std;
class stack{
    int *data;
    int nextIndex;
    int capacity;
    
public:
    stack(){
        data=new int [4];
        nextIndex=0;
        capacity=4;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        if (nextIndex==0){
            return true;
        }
        return false;
        //return (if nextIndex==0);
    }
    void push(int temp){
        if(nextIndex==capacity){
            int *newData=new int [capacity*2];
            newData=data;
            delete data;
            data=newData;
            capacity=capacity*2;
            
        }
        data[nextIndex]=temp;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else{
            nextIndex--;
            return data[nextIndex];
        }
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
    
};

//int main(){
//    
//    stack s;
//    return 0;
//}
