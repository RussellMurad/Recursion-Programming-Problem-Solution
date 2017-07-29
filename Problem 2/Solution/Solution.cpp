#include <iostream>
using namespace std;

int Recursion(int i, int j, int *Arr)
{
    if(i <= j)
    {
        cout << Arr[i] << " " << Arr[j] << endl;
        Recursion(i+1, j-1, Arr);
    }
}

int main()
{
    int i,temp,N,Arr[99];
    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> Arr[i];
    }

    temp = i;

    Recursion(0, temp-1, Arr);


    return 0;
}
