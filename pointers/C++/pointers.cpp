// fking pointers...
#include <iostream>
using namespace std;

int main ()
{
  int x, y;
  int * p;

  p = &x;
  *p = 10;
  p = &y;
  *p = 20;
  cout << "x is " << x << endl;
  cout << "y is " << y << endl;
  return 0;
}
