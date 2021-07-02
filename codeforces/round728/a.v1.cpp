#include <iostream>

using namespace std;

int t, n, limit, i;


int
main (void)
{
  cin >> t;
  while (t--)
    {
      cin >> n;

      if (n % 2 == 0)
	{
	  limit = n - 1;
	}
      else
	{
	  limit = n - 2;
	}

      for (i = 1; i <= limit; i++)
	{
	  if (i % 2 == 1)
	    {
	      cout << i + 1 << " ";
	    }
	  else
	    {
	      cout << i - 1 << " ";
	    }
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
