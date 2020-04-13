#include<iostream>
using namespace std;

template<typename T>
void Selection_sort(T data[], int len)
{
	if (data == nullptr || len <= 0)
		return;
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
			if (data[j] < data[min])
				min = j;
		swap(data[i], data[min]);
	}
}

int SelectionSort()
{
	float dataf[] = { 17.5, 19.1, 0.6, 1.9, 10.5, 12.4, 3.8, 19.7, 1.5, 25.4, 28.6, 4.4};
	int len = (int)sizeof(dataf) / sizeof(*dataf);
	Selection_sort(dataf, len);
	for (int i = 0; i < len; i++)
		cout << dataf[i] << ' ';
	cout << endl;
	return 0;
}