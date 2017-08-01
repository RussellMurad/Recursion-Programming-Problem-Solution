#include <iostream>
using namespace std;

int Recursion(int N, int M)
{
    int temp;

    if(M%N == 0)
        return N;

    else
    {
        temp = N;
        N = M%N;
        M = temp;
        Recursion(N,M);
    }

}

int main()
{
    int N,M,temp;
    cin >> N >> M;

    temp=Recursion(N,M);
    cout << temp;

    return 0;
}
