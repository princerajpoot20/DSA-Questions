//#include<bits/stdc++.h>
#include <iostream>
#include <vector>

//----------------PRINCE RAJPOOT----------------//
//----------------------------------------------/ /
//#include<bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long int;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define f(i, a, b) for (int i = a; i < b; i++)
#define loop(i, n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pi 3.141592653589793238462
#define fillvv(v, a) f(i, 0, v.size()) f(j, 0, v.size()) v[i][j] = a;
#define fillv(v, a) f(i, 0, v.size()) v[i] = a;
#define inf (1LL << 60)
#define endl "\n"
#include <map>
//----------------------------------------------//


bool checkPrime(int n){
    
    if(n==1){
        return false;
    }
    int sqr=(int)sqrt(n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
    
}


void solve() {
    
    int n;
    cin>>n;
    
    int count=0;
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            count+=1;
        }
    }
    cout<<count<<endl;
    
}

int main() {
  //    ios_base::sync_with_stdio(false);
  //    cin.tie(NULL);
  //    cout.tie(NULL);
  fast_io;

  int t;
//  cin>>t;
    t=1;
  while (t--) {

    solve();

  } // end of while loop...
  return 0;
}
