//
//  main.cpp
//  PriorityQueueImplementation
//
//  Created by Prince Rajpoot on 15/06/22.
//

#include <iostream>
#include <vector>
using namespace std;
int power(int n){
    int ans=0;
    while(n>0){
        n/=2;
        ans++;
    }
    return ans;
}

class PriorityQueue{
    vector<int>v;
    
public:
    bool isEmpty(){
        if(v.size()==0)
            return true;
        else
            return false;
        
    }
    // number of element in priority queue
    int getSize(){
        return v.size();
    }
    
    int getMin(){
        if(v.size()==0){
            cout<<"Priority Queue is empty."<<endl;
            return 0;
        }
        else{
            return v[0];
        }
    }
    
    
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
    void insert(int n){
        
        v.push_back(n);
        
        
        
    }
    
   
    
};



int main(int argc, const char * argv[]) {

    
    
    
    
    return 0;
}
