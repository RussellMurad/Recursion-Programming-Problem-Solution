#include <iostream>
using namespace std;

int Recursion(int j, int *Arr)
{
    if(j >= 0)
    {
        cout << Arr[j] << " ";
        Recursion(j-1,Arr);
    }
}

int main()
{
    int N, Arr[99];
    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> Arr[i];
    }

    Recursion(N-1, Arr);

    return 0;
}
