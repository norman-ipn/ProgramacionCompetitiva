#include <iostream>

using namespace std;

int t, n, limit, i, extra;


int
main (void)
{
  cin >> t;
  while (t--)
    {
      cin >> n;

      limit = n - 1 - n%2;
      
      extra = 1;

      for (i = 1; i <= limit; i++)
	{
	  cout << i + extra << " ";
	  extra *= -1;
	}

      if (n % 2 == 0)
	{
	  cout << i - 1 << endl;
	}
      else
	{
	  cout << n << " " << n - 2 << endl;
	}
    }

  return 0;
}
