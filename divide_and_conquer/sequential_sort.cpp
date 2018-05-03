#include <iostream>
#include <vector>

using namespace std;
vector<int> arr;


int main()
{
	int n = 0;
	cin >> n;
	int temp;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}