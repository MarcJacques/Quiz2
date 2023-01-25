#include <iostream>
using namespace std;
int main() 
{

  int x, y;
  // int answer = !(6 > 7 || 3 ==4);
  // cout << answer;
  
  x = 4;

  if (x > 5)
    y = 1;
else if (x < 5)
{
    if (x < 3)
        y = 2;
    else
        y = 3;
}
else
    y = 4;

  cout << y << endl;
  return 0;
}