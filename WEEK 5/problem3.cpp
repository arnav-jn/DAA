#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, i, j, flag = 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  cin >> m;
  int b[m];
  for (i = 0; i < m; i++)
    cin >> b[i];
  i = j = 0;
  while (i < n && j < m)
  {
    if (a[i] == b[j])
    {
      cout << a[i];
      i++;
      j++;
      flag = 1;
    }
    else if (a[i] < b[j])
      i++;
    else
      j++;
  }
  if (flag == 0)
    cout << "No Common Element";
  return 0;
}
