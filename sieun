#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	int cCount = 0;
	int n = 0;
	cin >> n;
	int a = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;

		for (int j = 2; j < a + 1; ++j)
		{
			if ((a % j) == 0)
			{
				count++;
			}
		}
		if (count == 1)
		{
			cCount++;
		}
		count = 0;
	}

	cout << cCount;


	return 0;
}
