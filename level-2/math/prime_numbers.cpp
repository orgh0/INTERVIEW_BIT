vector<int> Solution::sieve(int A) {
    vector <int> ans;
    int arr[A + 1];
    memset(arr,0,sizeof(arr));
    int i, j;
    if(A < 2)return ans;
    for(i = 2;i <= A;i++)
    {
        if(arr[i] == 0)
        {
            ans.push_back(i);
            for(j = 2*i;j <= A;j += i)arr[j] = 1;
        }
    }
    return ans;
}
