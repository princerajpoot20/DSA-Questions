#include <iostream> // header file includes every Standard library
#include <cstdlib>
using namespace std;

int main() {

    // Your code here
    int t;
    cin>>t;
    while(t--){
        int finalCount=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left =1;
        int temp;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                temp+=1;
            }
            else{
                if(temp!=1){
                temp+=1;
                finalCount=finalCount+((temp*(temp+1))/2);
                temp=1;
                }
            }
            
            
            
        }
        if(temp!=1){
            temp+=1;
            finalCount=finalCount+((temp*(temp+1))/2);
            temp=1;
            
        }
        temp=1;
        for(int i=n-1;i>0;i--){
            if(arr[i]<arr[i-1]){
                temp+=1;
            }
            else{
                if(temp!=1){
                temp+=1;
                finalCount=finalCount+((temp*(temp+1))/2);
                temp=1;
                }
            }
            
            
        }
        
        if(temp!=1){
        temp+=1;
        finalCount=finalCount+((temp*(temp+1))/2);
        temp=1;
        }
        cout<<"Final Count::"<<finalCount<<endl;
        
        
        
        
        
        
    }
    return 0;
}
