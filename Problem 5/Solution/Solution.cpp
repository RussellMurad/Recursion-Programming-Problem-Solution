#include <bits/stdc++.h>
using namespace std;

int sum = 0;

int Recursive(int i, int Count, int N)
{
    if(i == 0)
    {
        sum += 1;
        Recursive(i+1, Count, N);
    }

    else if(i < Count)
    {
        sum = sum + pow(N, i);
        Recursive(i+1, Count, N);
    }

    else
        return sum;

}

int main()
{
    int M,N;
    cin >> M >> N;

    Recursive(0, N, M);
    cout << "Sum is " << sum << endl;

    return 0;
}

