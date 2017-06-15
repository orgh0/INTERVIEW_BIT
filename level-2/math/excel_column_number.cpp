int Solution::titleToNumber(string A) {
    int i;int ans = 0;
    for(i = 0;i < A.length();i++)
    {
        ans = ans * 26 + A[i] - 64;
    }
    return ans;
}