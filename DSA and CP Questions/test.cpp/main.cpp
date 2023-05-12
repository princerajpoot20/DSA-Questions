#include <iostream>
using namespace std;
 
int countWays(int n)
{
    // declaring  two variables to store the count
    int prev = 1;
    int prev2 = 1;
    // Running for loop to count all possible ways
    for (int i = 2; i <= n; i++) {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << "Number of Ways : " << countWays(n)<<endl;
    }
    return 0;
}
