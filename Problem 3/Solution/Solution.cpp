#include <iostream>
using namespace std;

void recursion(int i, int j, int *N, int *Arr)
{
    if(i == *N)
    {
        *N = j;
        return;
    }

    if(Arr[i] % 2 == 0)
    {
        Arr[j++] = Arr[i];
    }

    recursion(i+1, j, N, Arr);
}

int main()
{
    int N,i,Arr[99];
    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> Arr[i];
    }

    recursion(0, 0, &N, Arr);

    for(i=0; i<N; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
