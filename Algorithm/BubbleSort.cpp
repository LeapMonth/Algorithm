#include<iostream>
using namespace std;

template<typename T>
void Bubble_sort(T data[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
		}
	}
}

int BubbleSort()
{
	int data[] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62};
	int len = (int)sizeof(data) / sizeof(*data);
	Bubble_sort(data, len);
	for (int i = 0; i < len; i++)
		cout << data[i] << ' ';
	cout << endl;
	return 0;
}