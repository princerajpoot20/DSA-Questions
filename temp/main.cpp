//
//  main.cpp
//  CP
//
//  Created by Prince Rajpoot on 13/06/22.
//
//long long int
#include <iostream>
using namespace std;
#include <vector>

void solve(){
    
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr1[m];
    vector<int>temp;
    
    long long int positiveSum=0;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        if(arr1[i]>=0){
            temp.push_back(arr1[i]);
        }
        
    }
    
    
    long long int prev_max = arr[0];
    long long int start=0;
    long long int start_o=0,curr_max=arr[0];
    long long int end=0;
    for(int i=0; i<n; i++){
        curr_max += arr[i];
        if(curr_max < 0){
            start = i+1;
            curr_max = 0;
        }
        else if(curr_max > prev_max){
            end = i;
            start_o = start;
            prev_max = curr_max;
        }
        
    }
    
    //cout<<start_o<<" "<<end<<endl;
    
    if(start_o==0){
        for(int i=temp.size()-1;i>=0;i--){
            cout<<temp[i]<<" ";
        }
        for(int i=0;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(end==n-1 ){
        for(int i=start_o;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    
    
    else{
        
        long long int p1=0,p2=0;
        long long int positive=0;
        for(int i=0;i<temp.size();i++){
            positive+=temp[i];
        }
        for(int i=0;i<start_o;i++){
            p1+=arr[i];
        }
        for(int i=end+1;i<n;i++){
            p2+=arr[i];
        }
        
        long long int m=max(p1,p2);
        if(positive+m<0){
            for(int i=start_o;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            if(p1>p2){
                for(int i=temp.size()-1;i>=0;i--){
                    cout<<temp[i]<<" ";
                }
                for(int i=0;i<=end;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                
                
            }
            else if(p2>p1){
                for(int i=start_o;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                for(int i=0; i<temp.size();i++){
                    cout<<temp[i]<<" ";
                }
                cout<<endl;
            }
            
            else{
                
                int a=start_o-1;
                int b=n-end-1;
                
                if(a>b){
                    for(int i=temp.size()-1;i>=0;i--){
                        cout<<temp[i]<<" ";
                    }
                    for(int i=0;i<=end;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
                else{
                    for(int i=start_o;i<n;i++){
                        cout<<arr[i]<<" ";
                    }
                    for(int i=0; i<temp.size();i++){
                        cout<<temp[i]<<" ";
                    }
                    cout<<endl;
                }
                
                
            }
        }
        
        
        
    }
    
    



       

   }



int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    //fast_io;
    
    
    int t;
    cin>>t;
    
    while(t--){
        
        solve();
        
    }//end of while loop...
    return 0;
}
