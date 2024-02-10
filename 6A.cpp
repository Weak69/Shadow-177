<!-- codeforce problem -->


#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if ((a < b + c && b < a + c && c < a + b) || (a < b + d && b < a + d && d < a + b) || (a < d + c && d < a + c && c < a + d) || (d < b + c && b < d + c && c < d + b))
    cout << "TRIANGLE" << endl;
  else if ((a == b + c || b == a + c || c == a + b) || (a == b + d || b == a + d || d == a + b) || (a == d + c || d == a + c || c == a + d) || (d == b + c || b == d + c || c == d + b))
    cout << "SEGMENT" << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}
