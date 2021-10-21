int findMaxSubarray(vector<int> array, int k){
    int maxValue = INT_MIN;
    int currSum = 0;
    
    for(int i = 0; i<array.size(); i++){
        currSum += array[i];
        
        if(i>=(k-1)){
            maxValue = max(maxValue, currSum);
            currSum -= array[i-k+1];
        }
    }
    return maxValue;
} //{4,2,1,7,8,1,2,8,1,0} k = 3
