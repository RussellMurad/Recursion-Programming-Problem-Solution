#include <bits/stdc++.h>
using namespace std;

int Recursion(int A, int B, int M)
{
    if(A*M % B == 0)
        return A*M;

    return Recursion(A, B, M+1);

}

int main()
{
    int A,B,temp;
    cin >> A >> B;
    temp = Recursion(A,B,1);

    cout << temp << endl;

    return 0;
}
