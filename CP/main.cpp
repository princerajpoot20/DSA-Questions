//
//  main.cpp
//  CP
//
//  Created by Prince Rajpoot on 13/06/22.
//

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
    
    int positiveSum=0;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        if(arr1[i]>=0){
            temp.push_back(arr1[i]);
        }
        
    }
    
    
    int prev_max = arr[0];
    int start=0;
    int start_o=0,curr_max=arr[0];
    int end=0;
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
    
    cout<<start_o<<" "<<end<<endl;
    
    



       

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
