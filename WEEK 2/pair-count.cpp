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
    int a[n], i, j, count = 0;
    for (i = 0; i < n; i++)
      cin >> a[i];
    int key;
    cin >> key;
    for (i = 0; i < n - 1; i++)
    {
      for (j = i + 1; j < n; j++)
      {
        if (fabs(a[j] - a[i]) == key)
        {
          count++;
        }
      }
    }
    if (count == 0)
      cout << "No Pair Found";
    else
      cout << count;
  }
  return 0;
}
