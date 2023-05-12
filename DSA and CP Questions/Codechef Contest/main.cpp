
//----------------PRINCE RAJPOOT----------------//
//----------------------------------------------/ /
//#include<bits/stdc++.h>

// CPP program to illustrate
// std::lcm function of C++
#include <iostream>
#include <numeric>
#include <iostream>
#include<vector>
using namespace std;
#define ll             long long int;
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define pii            pair<long long int,long long int>
#define all(x)         (x).begin(), (x).end()
#define fast_io        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define f(i,a,b)       for(long long int i=a;i<b;i++)
#define loop(i,n)      for(long long int i=0;i<n;i++)
#define mod            1000000007
#define pi             3.141592653589793238462
#define fillvv(v,a)    f(i,0,v.size()) f(j,0,v.size()) v[i][j] = a;
#define fillv(v,a)     f(i,0,v.size()) v[i] = a;
#define inf            (1LL<<60)
#define endl           "\n"
#include<map>
//----------------------------------------------//



int mincost(vector<vector<int>>nums){
    
    int n=nums[0].size();
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        arr[i][0]=nums[0][i];
    }
    
    for(int i=1;i<n;i++){
        
        for(int j=0;j<n;j++){
            int ans_i=dp[i-1][j];
            
            if(i-1>)
        }
        
        
    }
    
    return max(arr[0][n-1],max(arr[1][n-1],arr[2][n-1]));
    
    
}



void solve(){
    
}


int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    fast_io;
    
    
    long long int t;
    cin>>t;
//    t=1;
    while(t--){
        
        solve();
        
    }//end of while loop...
    return 0;
}




