vector<int> Solution::primesum(int A) {
    vector <bool> val;
    vector <int> sol;
    int i, j;
    for(i = 0;i < A;i++)
    {
        val.push_back(true);
    }
    for(i = 2;i <= (int)sqrt(A);i++)
    {
        if(val[i] == true)
        {
            for(j = 2*i;j <= A;j+=i)
            {
                val[j] = false;
            }
        }
    }
    for(i = 2;i < A;i++)
    {
        if(val[i] == true)
        {
            if(val[A - i] == true)
            {
                sol.push_back(i);
                sol.push_back(A - i);
                return sol;
            }
        }
    }
    return sol;
}