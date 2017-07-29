#include <iostream>
using namespace std;

int Recursion(int N)
{
    if(N == 0)
        cout << "1";

    else if(N == 1)
    {
        Recursion(N-1);
        cout << "+x";
    }

    else
    {
        Recursion(N-1);
        cout << "+x^" << N;
    }
}

int main()
{
    int N;
    cin >> N;
    Recursion(N-1);

    return 0;
}
