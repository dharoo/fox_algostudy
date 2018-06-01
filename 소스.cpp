#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int temp = 0;
	int sosu = 0;
	int arr[100] = { 0 };

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> temp;

		arr[i] = temp;
	}

	for (int i = 0; i < num; i++)
	{
		if (arr[i] == 1) continue;

		int temp1 = 0;

		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j != 0)
			{
				temp1++;
			}
		}

		if (temp1 == arr[i] - 2)
		{
			sosu++;
		}
	}

	cout << sosu;

	return 0;
}