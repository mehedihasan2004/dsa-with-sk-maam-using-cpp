#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;

      cin >> n;

      for (int i = 1; i <= n; i++)
      {

            for (int j = 1; j <= n - i; j++)
            {
                  cout << "  ";
            }

            int x;

            for (int j = 1; j <= i; j++)
            {
                  cout << j << ' ';
                  x = j;
            }

            while (--x)
            {
                  cout << x << ' ';
            }

            cout << endl;
      }

      return 0;
}