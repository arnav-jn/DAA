#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n], i, j, k, flag = 0;
    for (i = 0; i < n; i++)
      cin >> a[i];
    for (i = 0; i < n - 2; i++)
    {
      for (j = i + 1; j < n - 1; j++)
      {
        for (k = j + 1; k < n; k++)
        {
          if (a[i] + a[j] == a[k])
          {
            cout << i + 1 << j + 1 << k + 1;
            flag = 1;
            goto label;
          }
        }
      }
    }
  label:
    if (flag == 0)
    {
      cout << "No sequence found";
    }
  }
  return 0;
}
