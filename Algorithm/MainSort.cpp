#include<iostream>
using namespace std;

int BubbleSort();
int SelectionSort();
int InsertionSort();
int ShellSort();
int MergeSort();
int QuickSort();

int main(void)
{
	BubbleSort();
	SelectionSort();
	InsertionSort();
	ShellSort();
	MergeSort();
	QuickSort();
	cout << "main done" << endl;
	return 0;
}