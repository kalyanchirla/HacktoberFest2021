#include <iostream>
#include <vector>

using namespace std;

int fibonacci_recursive(int n)
{
    // Base condition
    if(n==0||n==1)
    {
        return n;
    }
    // Recursive condition
    return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

void fibonacci_dp(int n)
{
    // Initializing a vector to store values for memoization
    vector<int>fibo_dp(n+1,0);
    fibo_dp[1]=1;

    // Calculating the fibonacci values for all 'i' upto n
    for(int i=2;i<=n;i++)
    {
        fibo_dp[i] = fibo_dp[i-1]+fibo_dp[i-2];
    }
    // Printing the fibonacci series
    for(int i=0;i<=n;i++)
    {
        cout << fibo_dp[i] << " ";
    }
    cout << "\n";
}
int main()
{
    /*
        Objective: Fibonacci Recursive and Fibonacci DP

        This program is going to show us the fibonacci series 
        using both the recursive approach and also using
        dynamic programming

        The main difference between both the approach is the time
        complexities where recursive approach uses exponential
        time complexity and dynamic programming approach uses O(N) time
    */
    int n; 
    cin >> n;

    // First, we will print the fibonacci series using recursive approach 
    for(int i=0;i<=n;i++)
    {
        cout << fibonacci_recursive(i) << " ";
    }
    cout << endl;
    // Next, we will use the Dynamic Programming approach to print the fibonacci series
    fibonacci_dp(n);
}