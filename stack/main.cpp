//
//  main.cpp
//
//  Created by Prince Rajpoot on 16/02/22.
//

//----------------PRINCE RAJPOOT----------------//
//----------------------------------------------/ /
//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll             long long int;
#define pb             push_back
#include<map>
//----------------------------------------------//

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        //int a[n],arr[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            //a[i]=arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            //arr[i]=arr2[i];
        }
//        sort(a, a + n);
//        sort(arr, arr + n);
//
        
        
        int x=0,y=0;
        
        map <pair<int,int>, int>m;
        int count=0;
        for(int i=0;i<n;i++){
            count+=m[{arr1[i],arr2[i]}];
            m[{arr2[i],arr1[i]}]++;
            
        }
        
        cout<<count<<endl;
       
        
            
            
    
        
      
     
        
        
       
    }//end of while loop...
    return 0;
}

