#include <bits/stdc++.h>
using namespace std;

int Recursion(int i, int j, int N)
{
    if(N<2)
        return 0;
    if(i>j)
        return 1;
    if(N%i == 0)
        return 0;
    return Recursion(i+1, j, N);
}

int main()
{
    int N;
    cin >> N;

    if(Recursion(2, (int)sqrt(N), N) == 1)
        cout << "It is Prime" << endl;
    else
        cout << "Its is not Prime" << endl;

    return 0;
}
