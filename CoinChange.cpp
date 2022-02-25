int main() {  
    vector<int> coins = {1,3,7,10};
    int target = 15;
    vector<int> dp(target+1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i<=target; i++){
        
        for(int c:coins ){
            if(i-c >=0){
                 if(dp[i-c] != INT_MAX)
                    dp[i] = min(dp[i], dp[i-c] + 1);
            }
        }
    }
    
    cout<<dp[target] <<endl;
}
