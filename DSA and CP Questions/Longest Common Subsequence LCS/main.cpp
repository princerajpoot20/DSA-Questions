//#include<bits/stdc++.h>
#include <iostream>
#include <vector>

//----------------PRINCE RAJPOOT----------------//
//----------------------------------------------/ /
//#include<bits/stdc++.h>
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

int lcs(char *s1, char *s2, int m, int n) {

  int dp[m][n];

  for (int i = 0; i < n; i++) {

    if (s1[0] == s2[i]) {
      dp[0][i] = 1;
    } else {
      dp[0][i] = 0;
    }
  }
  for (int i = 0; i < m; i++) {
    if (s2[0] == s1[i]) {
      dp[i][0] = 1;
    } else {
      dp[i][0] = 0;
    }
  }

  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {

      if (s1[i] == s2[j]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
          dp[i][j] = max(dp[i - 1][j], max( dp[i][j - 1] , dp[i-1][j-1]));
      }
    }
  }
   
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {

          cout<<dp[i][j]<<"   ";
      }
        cout<<endl;
        cout<<endl;
    }
    
  return dp[m - 1][n - 1];
}

void solve() {

  char s1[100];
  char s2[100];

  cin >> s1;
  cin >> s2;
  int m = strlen(s1);
  int n = strlen(s2);
  cout << lcs(s1, s2, m, n) << endl;
}

int main() {
  //    ios_base::sync_with_stdio(false);
  //    cin.tie(NULL);
  //    cout.tie(NULL);
  fast_io;

  int t;
  cin>>t;

  while (t--) {

    solve();

  } // end of while loop...
  return 0;
}
