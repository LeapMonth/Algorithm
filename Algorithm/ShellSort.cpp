#include<iostream>
using namespace std;

template<typename T>
void Shell_sort(T data[], int length)
{
	if (data == nullptr || length <= 0)
		return;

	for (int increment = length / 2; increment > 0; increment /= 2)
	{
		for (int i = increment; i < length; i++)
		{
			int temp = data[i];
			int j;
			for (j = i; j >= increment; j -= increment)
			{
				if (data[j - increment] > temp)
					data[j] = data[j - increment];
				else
					break;
			}
			data[j] = temp;
		}
	}
}

int ShellSort()
{
	int data[] = { 13, 14, 94, 33, 82, 25, 59, 94, 65, 23, 45, 27, 73, 25, 39, 10 };
	int len = (int)sizeof(data) / sizeof(*data);
	Shell_sort(data, len);
	for (int i = 0; i < len; i++)
		cout << data[i] << ' ';

	return 0;
}