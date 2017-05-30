vector<int> Solution::allFactors(int A) {
    int i;
    vector <int> ans;
    if(A < 2)
    {
        ans.push_back(A);
        return ans;
    }
    ans.push_back(1);
    ans.push_back(A);
    for(i = 2;i <= (int)sqrt(A);i++)
    {
        if(A % i == 0)
        {
            ans.push_back(i);
            if(A/i != i)ans.push_back(A/i);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
