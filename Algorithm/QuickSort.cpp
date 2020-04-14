#include<iostream>
#include<ctime>
using namespace std;

template<typename T>
int Partition(T data[], int length, int start, int end)
{
	if (data == nullptr || length <= 0 || start < 0 || end >= length)
		throw new exception("invalid parameters");

	srand((unsigned)time(NULL));
	int index = (int)rand() % (end - start) + start;

	swap(data[index], data[end]);

	int small = start - 1;
	for (index = start; index < end; ++index)
	{
		if (data[index] < data[end])
		{
			++small;
			if (small != index)
				swap(data[small], data[index]);
		}
	}
	++small;
	swap(data[small], data[end]);

	return small;
}

template<typename T>
void QuickSort_recursive(T data[], int length, int start, int end)
{
	if (start == end)
		return;

	int index = Partition(data, length, start, end);
	if (index > start)
		QuickSort_recursive(data, length, start, index - 1);
	if (index < end)
		QuickSort_recursive(data, length, index + 1, end);
}

int QuickSort()
{
	int data[] = { 13, 14, 94, 33, 82, 25, 59, 94, 65, 23, 45, 27, 73, 25, 39, 10 };
	int len = (int)sizeof(data) / sizeof(*data);
	QuickSort_recursive(data, len, 0, len - 1);
	for (int i = 0; i < len; i++)
		cout << data[i] << ' ';

	cout << endl;

	return 0;
}