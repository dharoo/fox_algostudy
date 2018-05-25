#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int input[500][500];
int cache[500][500];

int findMax(int x, int y)
{
	//기저 사례
	if (x == 0)
	{
		return cache[x][y] = input[x][y];
	}
	//캐시 체크
	//있으면
	if (cache[x][y] != 0)
	{
		return cache[x][y];
	}
	//없으면
	if (y == 0) return cache[x][y] = findMax(x - 1, y) + input[x][y];
	if(x==y) return cache[x][y] = findMax(x - 1, y-1) + input[x][y];
	return cache[x][y] = max(findMax(x - 1, y - 1), findMax(x - 1, y)) + input[x][y];

}

int main()
{
	int n, t;
	cin >> n;
	//vector<int> a(10,1); //size 10, 1로초기화
	//vector<vector<int>> t(n,vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cin >> input[i][j];
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		//findMax(x,y) 는 cache[x][y] 값
		int temp = findMax(n - 1, i);
		if (temp > result) result = temp;
	}
	cout << result << endl << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j) break;
			cout << cache[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}