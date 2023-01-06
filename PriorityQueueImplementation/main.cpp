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
    
    void insertElement(int n){
        
        v.push_back(n);
        int levelOfTree=power(v.size());
       
        
        int currentElement=v.size()-1;
        int parent;
        //while(levelOfTree!=1){
            
        while (currentElement!=0){
            
            if(currentElement%2==0){
                parent=(currentElement/2)-1;
            }
            else{
                parent=((currentElement-1)/2);
            }
            
            if(v[parent]<n){
                //levelOfTree=1;
                currentElement=0;
                break;
            }
            else{
                int temp=v[parent];
                v[parent]=v[currentElement];
                v[currentElement]=temp;
                currentElement=parent;
                levelOfTree--;
            }
            
        }
        
        
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
    void deleteElement(){
        
        int temp=v[0];
        v[0]=v[v.size()-1];
        v[v.size()-1]=temp;
        
        v.pop_back();
        
        int parentIndex,childIndex1,childIndex2;
        
        parentIndex=0;
        
        while((childIndex1<v.size()-1) || (childIndex2<v.size()-1)){
            childIndex1=(2*parentIndex)+1;
            childIndex2=(2*parentIndex)+2;
            
            if(v[parentIndex]>v[childIndex1] && v[parentIndex]>v[childIndex2]){
                
                if(v[childIndex1]>v[childIndex2]){
                    temp=v[parentIndex];
                    v[parentIndex]=v[childIndex2];
                    v[childIndex2]=temp;
                    parentIndex=childIndex2;
                }
                else{
                    temp=v[parentIndex];
                    v[parentIndex]=v[childIndex1];
                    v[childIndex1]=temp;
                    parentIndex=childIndex1;
                }
            }
            else if(v[parentIndex]>v[childIndex1]){
                temp=v[parentIndex];
                v[parentIndex]=v[childIndex1];
                v[childIndex1]=temp;
                parentIndex=childIndex1;
            }
            else if (v[parentIndex]>v[childIndex2]){
                temp=v[parentIndex];
                v[parentIndex]=v[childIndex2];
                v[childIndex2]=temp;
                parentIndex=childIndex2;
            }
            else{
                break;
            }
            
        }
        
        
    }
    
    
};



int main(int argc, const char * argv[]) {

    
    
    
//    cout<<power(7)<<endl;
//    cout<<power(15)<<endl;
//    cout<<power(1)<<endl;
//
    PriorityQueue pq;
    cout<<"enter -1 to exit the entry"<<endl;
    int n;
    cin>>n;
    while(n!=-1){
        
        
        pq.insertElement(n);
        cout<<"enter next element"<<endl;
        cin>>n;
    }
    pq.display();
    return 0;
}
