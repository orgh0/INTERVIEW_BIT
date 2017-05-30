vector<int> Solution::plusOne(vector<int> &A) {
    int s, carry=1;
    s = A.size();
    vector <int> result;
    for(int i=s-1;i>=0;i--)
    {
        int sum;
        sum = A[i] + carry;
        carry = sum/10;
        result.push_back(sum%10);
    }
    result.push_back(carry);
    s = result.size();
    int i = s-1;
    vector<int> ans;
    while(i>=0 && result[i]==0)
    {
        i--;
    }
    while(i>=0)
    {
        ans.push_back(result[i]);
        i--;
    }
    return ans;
}