int comparator(string a, string b)
{
    return a+b > b+a;
}
string Solution::largestNumber(const vector<int> &A) {
    vector <string> b;
    bool allZero = true;
    int i;
    for( i = 0;i < A.size();i++)
    {
        b.push_back(to_string(A[i]));
        if(A[i] != 0)
            allZero = false;
        
    }
    if(allZero)
        return "0";
    sort(b.begin(), b.end(), comparator);
    string ans = "";
    for( i = 0;i < b.size();i++)
    {
        ans += b[i];
    }
    return ans;
}
