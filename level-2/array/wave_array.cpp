vector<int> Solution::wave(vector<int> &A) {
    int i, n, temp;
    sort(A.begin(), A.end());
    n = A.size();
    if(n % 2 == 0)
    {
        for(i = 0;i < A.size();i++)
        {
            if(i % 2 == 0)
            {
                temp = A[i + 1];
                A[i + 1] = A[i];
                A[i] = temp;
            }
        }
    }
    else
    {
        for(i = 0;i < A.size() - 1;i++)
        {
            if(i % 2 == 0)
            {
                temp = A[i + 1];
                A[i + 1] = A[i];
                A[i] = temp;
            }
        }
    }
    return A;
}