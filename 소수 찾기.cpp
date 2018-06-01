#include <iostream>

using namespace std;

int main()
{
	int n, num, result = 0;
	cin >> n;
	while (n--)
	{
		cin >> num;
		if (num == 1) continue;
		int div = num / 2;
		while (div != 1)
		{
			if (num%div == 0) break;
			div--;
		}
		if (div == 1) result++;
	}
	cout << result << endl;
	return 0;
}