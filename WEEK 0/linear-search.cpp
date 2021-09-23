#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cout << "Input test case:";
  cin >> t;
  while (t--)
  {
    int n, key, i;
    cout << "\nInput array size:";
    cin >> n;
    unsigned int a[n];
    for (i = 0; i < n; i++)
      cin >> a[i];
    cout << "\ninput key element: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
      if (a[i] == key)
      {
        cout << "\nkey found";
        cout << "\ntotal comparison: " << i + 1;
        break;
      }
    }
    if (i == n)
    {
      cout << "\nkey not found!";
    }
  }
  return 0;
}
