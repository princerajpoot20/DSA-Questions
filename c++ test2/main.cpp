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
#include<string>
//----------------------------------------------//

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n,x;
        cin>>n>>x;
        int flag=0;
        int a1[n],a2[n];
        int a3[n],a4[n];
        //int a[n],arr[n];
        for(int i=0;i<n;i++)
            cin>>a1[i];
        for(int i=0;i<n;i++){
            cin>>a2[i];
            a4[i]=a2[i];
        }
            
        sort(a4,a4+n);
        int index1=0,index2=0;
//        int count =0;
//
//                int x=0,y=0;
//                for(int i=0;i<n;i++){
//                    for(int j=0;j<n;j++){
//                        if(arr1[i]==arr2[j]){
//                            if(arr1[j]==arr2[i]){
//                                if(i!=j){
//                                    count++;
//                                }
//                            }
//
//                        }
//
//                    }
//
//                }
        //cout<<count/2<<endl;
        
        int x=0,y=0;
        
        map <pair<int,int>, int>m;
        int count=0;
        for(int i=0;i<n;i++){
            //cout<<m[{arr1[i],arr2[i]}]<<endl;
//
            m[{arr2[i],arr1[i]}]++;
            count+=m[{arr1[i],arr2[i]}];
            
            //cout<<"\n\n"<<endl;
        }
        //cout<<endl;
                cout<<count/2<<endl;
        
            
            
    
        
      
     
        
        
       
    }//end of while loop...
    return 0;
}//end of main...

