int Solution::isPrime(int A) {
    int i;
    if(A == 2)return true;
    if(A == 1)return false;
    for(i = 2;i <= (int)sqrt(A);i++)
    {
        if(A % i== 0) return false;
    }
    return true;
}