#include <bits/stdc++.h>
using namespace std;

int Recursion(int N)
{
    if(N < 2)
        return 1;

    return N * Recursion(N-1);
}

int main()
{
    int N;
    cin >> N;
    cout << "Recursion is " << Recursion(N) << endl;
    return 0;
}

