#include <iostream>

using namespace std;

int main()
{
	int m = 0;
	int n = 0;
	int max = 0;
	int min = 0;

	cin >> m;
	cin >> n;

	for (int i = m; i < n + 1; i++)
	{
		int temp = 0;

		if (i == 1) continue;

		for (int j = 2; j < i; j++)
		{
			if (i % j != 0)
			{
				temp++;
			}
		}

		if (temp == i - 2)
		{
			if (min == 0)
			{
				min = i;
			}

			max += i;
		}
	}

	if (max != 0)
	{
		cout << max << endl;
		cout << min;
	}
	else
	{
		cout << -1;
	}

	return 0;
}