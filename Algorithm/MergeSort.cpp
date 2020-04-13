#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>
void Merge_sort_recursive(T data[], T tmp[], int start, int end)
{
	if (data == nullptr || tmp == nullptr || start >= end)
		return;

	int len = end - start;
	int middle = (len >> 1) + start;
	int start1 = start, end1 = middle;
	int start2 = middle + 1, end2 = end;

	Merge_sort_recursive(data, tmp, start1, end1);
	Merge_sort_recursive(data, tmp, start2, end2);

	int k = start;
	while (start1 <= end1 && start2 <= end2)
		tmp[k++] = data[start1] < data[start2] ? data[start1++] : data[start2++];

	while (start1 <= end1)
		tmp[k++] = data[start1++];
	while (start2 <= end2)
		tmp[k++] = data[start2++];

	for (k = start; k <= end; k++)
		data[k] = tmp[k];
}

template<typename T>
void Merge_sort_iterative(T data[], int len)
{
	T* a = data;
	T* b = new T[len];
	for (int seg = 1; seg < len; seg += seg)
	{
		for (int start = 0; start < len; start += seg + seg)
		{
			int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
			int k = low;
			int start1 = low, end1 = mid;
			int start2 = mid, end2 = high;

			while (start1 < end1 && start2 < end2)
				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
			while (start1 < end1)
				b[k++] = a[start1++];
			while (start2 < end2)
				b[k++] = a[start2++];
		}
		T* temp = a;
		a = b;
		b = temp;
	}
	if (a != data)
	{
		for (int i = 0; i < len; i++)
			b[i] = a[i];
		b = a;
	}
	delete[] b;
}

int MergeSort()
{
	cout << endl;
	float arrf[] = { 17.5, 19.1, 0.6, 1.9, 10.5, 12.4, 3.8, 19.7, 1.5, 25.4, 28.6, 4.4, 23.8, 5.4 };
	int len = (int)sizeof(arrf) / sizeof(*arrf);
	Merge_sort_iterative(arrf, len);
	for (int i = 0; i < len; i++)
		cout << arrf[i] << ' ';
	cout << endl;

	float arrf2[] = { 17.5, 19.1, 0.6, 1.9, 10.5, 12.4, 3.8, 19.7, 1.5, 25.4, 28.6, 4.4, 23.8, 5.4 };
	int len2 = (int)sizeof(arrf2) / sizeof(*arrf2);
	float* reg = new float[len2];
	Merge_sort_recursive(arrf2, reg, 0, len2 - 1);
	delete[] reg;
	for (int i = 0; i < len2; i++)
		cout << arrf2[i] << ' ';
	cout << endl;
	return 0;
}