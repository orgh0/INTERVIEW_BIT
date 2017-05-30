int Solution::maxSubArray(const vector<int> &A) {
    int min = A[0], ans, c, max_val, i;
    for(i = 0;i < A.size();i++)
    {
        if(A[i] < min)min = A[i];
    }
    max_val = min;
    ans  = min;
    c = 0;
    for(i = 0;i < A.size();i++)
    {
        max_val = max(max_val, A[i]);
        c += A[i];
        ans = max(c,ans);
        if(c < 0)
        {
            c = 0;
        }
    }
    return max(ans, max_val);
}
