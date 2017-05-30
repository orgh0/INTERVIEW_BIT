bool Solution::isPower(int A) {
    int num, i;
    num = A;
    for(i = sqrt(A);i > 1;i--)
    {
        if(A % i == 0)
        {
            while(A >= 1 && A%i == 0)
            {
                A /= i;
            }
            break;
        }
    }
    if(A == 1)return true;
    A = num;
    for(i = 2;i * i <= A;i++)
    {
        if(A % i == 0 )
        {
            while(A >= 1 && A % i == 0)
            {
                A /= i;
            }
            break;
        }
    }
    if(A == 1)return true;
    return false;
}
