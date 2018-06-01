#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int to, idx, curidx = 0;
	cin >> to >> idx;
	vector<int> numbers(to - 1);
	vector<int> prime;
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i] = i + 2;
	}

	while (numbers.size() != 0)
	{

		int prime_num = numbers.front();
		//numbers.erase(numbers.begin());
		vector<int>::iterator iter = numbers.begin();
		while (iter != numbers.end())
		{
			if ((*iter) % prime_num == 0)
			{
				curidx++;
				if (idx == curidx) cout << (*iter) << endl;
				iter = numbers.erase(iter);
			}
			else iter = ++iter;
		}
		prime.push_back(prime_num);
	}
	return 0;
}