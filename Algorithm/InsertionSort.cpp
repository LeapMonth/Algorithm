#include<iostream>
using namespace std;

template<typename T>
void Insertion_sort(T data[], int len)
{
	if (data == nullptr || len <= 0)
		return;
	for (int i = 1; i < len; i++)
	{
		T key = data[i];
		int j;
		for (j = i - 1; j >= 0 && key < data[j]; j--)
			data[j + 1] = data[j];
		data[j + 1] = key;
	}
}

int InsertionSort()
{
	float dataf[] = { 17.5, 19.1, 0.6, 1.9, 10.5, 12.4, 3.8, 19.7, 1.5, 25.4, 28.6 };
	int len = (int)sizeof(dataf) / sizeof(*dataf);
	Insertion_sort(dataf, len);
	for (int i = 0; i < len; i++)
		cout << dataf[i] << ' ';
	cout << endl;
	return 0;
}