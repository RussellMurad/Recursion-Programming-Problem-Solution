#include <bits/stdc++.h>
using namespace std;

int Recursion(int N)
{
    if(N < 3)
        return 1;

    return Recursion(N-1) + Recursion(N-2);
}

int main()
{
    int N,Result;
    cin >> N;
    Result = Recursion(N);
    cout << Result;

    return 0;
}
