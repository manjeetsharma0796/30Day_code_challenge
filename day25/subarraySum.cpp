class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> seen;    // for taking snapshot of each time sum
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
          sum += arr[i];
        
          if (sum == 0 || seen.count(sum) == 1) {  // ultimately if the sum is 0, so most likely it will match one the sum we recorded
            return true;
          }
        
          seen.insert(sum);
        }
        
        return false;
    }
};