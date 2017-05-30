vector<string> Solution::fizzBuzz(int A) {
    int i;vector <string> ans;
    for(i = 1;i <= A;i++)
    {
        if(i % 3 == 0)
        {
            if(i % 5 == 0)ans.push_back("FizzBuzz");
            else ans.push_back("Fizz");
        }
        else if(i % 5 == 0)
        {
            ans.push_back("Buzz");
        }
        else ans.push_back(to_string(i));
    }
    return ans;
}