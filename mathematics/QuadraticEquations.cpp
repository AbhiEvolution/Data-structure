#include <iostream>
#include <math.h>

using namespace std;

void quad(int a, int b, int c)
{
  if (a == 0)
  {
    cout << "invalid";
    return;
  }

  int d;
  d = b * b - 4 * a * c;
  double sqrt_val = sqrt(abs(d));

  if (d > 0)
  {
    cout << "Roots are real and distinct: ";
    cout << (double)(-b + sqrt_val) / (2 * a), (double)(-b - sqrt_val) / (2 * a);
  }
  else if (d == 0)
  {
    cout << -(double)b / (2 * a);
  }
  else
  {
    cout << -(double)b / (2 * a),
        sqrt_val / (2 * a), -(double)b / (2 * a), sqrt_val / (2 * a);
  }
}

int main()
{
  int a, b, c;
  cout << "\nEnter the vale of a, b, and c: ";
  cin >> a;
  cin >> b;
  cin >> c;
  quad(a, b, c);
  cout<<endl;
}