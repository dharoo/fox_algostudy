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
	mergeSort(from, mid);	//from부터 mid까지 정렬완료
	mergeSort(mid + 1, to);	//mid+1부터 to까지 정렬완료
	//from부터 to까지 merge한 배열을 저장할 공간
	vector<int> temp;
	int leftIdx = from;			//from부터 mid배열 탐색할 index
	int rightIdx = mid + 1;			//mid+1부터 to배열 탐색할 index
	while (1)
	{
		//한쪽 배열이라도 vector에 추가가 완료되면 while문 탈출, 남은부분은 while문 밖에서 추가
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
	//정렬한배열을 arr에 덮어쓰며 기록
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