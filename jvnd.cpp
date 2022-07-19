#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      string s;
      int p = 0;
      int q = 0;
      cin >> s;
      int x = 0;
      int y = 0;

      vector < int >p0 (10);
      vector < int >p1 (10);

      if (s[0] == '0')
	p0[0] = 1;
      else
	p0[0] = 0;

      if (s[0] == '1')
	p1[0] = 1;
      else
	p1[0] = 0;

      for (int i = 1; i < 10; i++)
	{
	  if (s[i] == '0')
	    {
	      p0[i] = p0[i - 1] + 1;
	      p1[i] = p1[i - 1];
	    }
	  else if (s[i] == '1')
	    {
	      p0[i] = p0[i - 1];
	      p1[i] = p1[i - 1] + 1;
	    }
	  else
	    {
	      p0[i] = p0[i - 1];
	      p1[i] = p1[i - 1];
	    }

	}

      for (int i = 0; i < 10; i++)
	{

	  if (s[i] == '1' or s[i] == '?')
	    {
	      x = x + 1 + p1[9] - p1[i];
	      //cout<<x<<" ";
	      if (x >= 6)
		{
            // low brightness
		  p = i + 1;
		  cout << p << endl;
		  break;
		}
	    }

	  if (s[i] == '0' or s[i] == '?')
	    {
	      y = y + 1 + p0[9] - p0[i];
	      //  cout<<y<<" ";
	      if (y >= 6)
		{
		  q = i + 1;
		  cout << q << "q" << endl;
		  break;
		}
	    }
	}

//  cout<<min(p,q)<<endl;

    }
}