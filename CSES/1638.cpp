#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int solveBottomUp(vector<vector<char>>& g, vector<vector<int>>& dp, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(g[i][j]!='*') {
                if(!i && !j) {
                    dp[i][j]=1;
                    continue;
                }
                int up = (i>0) ? dp[i-1][j] : 0; 
                int left = (j>0) ? dp[i][j-1] : 0;
                dp[i][j] = (up+left)%MOD;
            }
        }
    }
    return dp[n-1][n-1];
}

int solveTopDown(int i, int j, vector<vector<char>>& g, vector<vector<int>>& dp) {    
    if (i < 0 || j < 0 || g[i][j] == '*') return 0;   
    if (i==0 && j==0) return 1;                           
    if (dp[i][j] != -1) return dp[i][j];              
    int up   = solveTopDown(i-1, j, g, dp);
    int left = solveTopDown(i, j-1, g, dp);
    return dp[i][j] = (up + left) % MOD;
}

int main(){
    int n;
    cin>>n;
    vector<vector<char>> g(n, vector<char>(n));
    vector<vector<int>> dp(n, vector<int>(n,0)); //For Bottom Up DP
    // vector<vector<int>> dp(n, vector<int>(n,-1)); //For Top Down DP
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>g[i][j];
        }
    }
    cout<<solveBottomUp(g,dp,n)<<"\n";
    // cout<<solveTopDown(n-1,n-1,g,dp)<<"\n";
}