#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int j = 0; j < n; j++)
  {
    cin >> arr[j];
  }

  int z = 0;
  int count = 0;
  int index = 0;
  int mxjump = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    z =i;
    while (i < n && i <= arr[i] + z)
    {
      if (mxjump < arr[i])
      {
        mxjump = arr[i];
        index = i;
      }
      i++;
    }
    i = index;
    count++;
    cout<<" i = "<<i<<" index = "<<index<<" Mxjump = "<<mxjump<<" Count = "<<count<<endl;
  }

}