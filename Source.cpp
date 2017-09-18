#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int t;
	while (cin >> t)
	{
		if (!t)
			break;
		int x, y, n;
		n = round(sqrt(t));
		if (n % 2)
		{
			if (n*n > t)
			{
				x = n * n - t + 1;
				y = n;
			}
			else if (n*n == t)
			{
				x = 1;
				y = n;
			}
			else
			{
				x = t - n * n;
				y = n + 1;
			}
		}
		else
		{
			if (n*n > t)
			{
				x = n;
				y = n * n - t + 1;
			}
			else if (n*n == t)
			{
				x = n;
				y = 1;
			}
			else
			{
				x = n + 1;
				y = t - n * n;
			}
		}
		cout << x << " " << y << endl;
	}
	return 0;
}