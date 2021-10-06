#include <iostream>

using namespace std;

int main()
{
    cout << "Lab 2 Var 4" << endl;

    int n;
    cout << "Input Fibonacci number index: ";
    cin >> n;

    long long fnum = 1, snum = 1, ans;

    if (n == 0 || n == 1) cout << "F(" << n << ") = " << 1 << endl;
    else
    {
        for (int i = 1; i < n; i++)
        {
            ans = fnum + snum;
            fnum = snum;
            snum = ans;
        }
        cout << "F(" << n << ") = " << ans << endl;
    }

    return 0;
}
