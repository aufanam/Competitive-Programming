#include <bits/stdc++.h>
#define ll long long
using namespace std;

int factorial(int n)
{
    ll factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, bocah = 1;
    
    cin >> n;
    n--;

    for (int i = 1; i < 2*n; i+=2)
    {
        bocah *= i;
    }
    
    cout << pow(2, n)*(bocah)/(factorial(n)) << '\n';
    // code
    return 0;
}