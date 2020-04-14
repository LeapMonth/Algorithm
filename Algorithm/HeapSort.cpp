#include<iostream>
using namespace std;

template<typename T>
void Max_Heapify(T data[], int start, int end)
{
	int parent = start;
	int child = parent * 2 + 1;

	while (child <= end)
	{
		if (child + 1 <= end && data[child] < data[child + 1])
			child++;
		if (data[parent] > data[child])
			return;
		else
		{
			swap(data[parent], data[child]);
			parent = child;
			child = parent * 2 + 1;
		}
	}
}

template<typename T>
void Heap_sort(T data[], int len)
{
	if (data == nullptr || len <= 0)
		return;

	for (int i = len / 2 - 1; i >= 0; i--)
		Max_Heapify(data, i, len - 1);

	for (int i = len - 1; i > 0; i--)
	{
		swap(data[0], data[i]);
		Max_Heapify(data, 0, i - 1);
	}
}

int HeapSort()
{
	int data[] = { 13, 14, 94, 33, 82, 25, 59, 94, 65, 23, 45, 27, 73, 25, 39, 10 };
	int len = (int)sizeof(data) / sizeof(*data);
	Heap_sort(data, len);
	for (int i = 0; i < len; i++)
		cout << data[i] << ' ';

	cout << endl;
	return 0;
}