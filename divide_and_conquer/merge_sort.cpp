#include <iostream>
#include <vector>
#include <time.h>

using namespace std;
vector<int> arr;

void mergeSort(int from, int to)
{
	if (from >= to )
	{
		return;
	}
	if (from + 1 == to)
	{
		if (arr[from] > arr[to])
		{
			int t = arr[to];
			arr[to] = arr[from];
			arr[from] = t;
		}
		return;
	}
	int mid = (to + from) / 2;
	mergeSort(from, mid);	//from���� mid���� ���ĿϷ�
	mergeSort(mid + 1, to);	//mid+1���� to���� ���ĿϷ�
	//from���� to���� merge�� �迭�� ������ ����
	vector<int> temp;
	int leftIdx = from;			//from���� mid�迭 Ž���� index
	int rightIdx = mid + 1;			//mid+1���� to�迭 Ž���� index
	while (1)
	{
		//���� �迭�̶� vector�� �߰��� �Ϸ�Ǹ� while�� Ż��, �����κ��� while�� �ۿ��� �߰�
		if (leftIdx == mid + 1 || rightIdx == to + 1) break;
		if (arr[leftIdx] <= arr[rightIdx])
		{
			temp.push_back(arr[leftIdx++]);
		}
		else
		{
			temp.push_back(arr[rightIdx++]);
		}
	}
	while (leftIdx != mid + 1)
	{
		temp.push_back(arr[leftIdx++]);
	}
	/*while (rightIdx != to + 1)
	{
		temp.push_back(arr[rightIdx++]);
	}*/
	//�����ѹ迭�� arr�� ����� ���
	for (int i = 0; i < temp.size(); i++)
	{
		arr[from + i] = temp[i];
	}
	return;
}
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
	/*clock_t start;
	clock_t end;
	start = clock();*/
	mergeSort(0, n - 1);
	//end = clock();
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	/*float result = (float)(end - start);
	cout << result <<endl;*/
	return 0;
}