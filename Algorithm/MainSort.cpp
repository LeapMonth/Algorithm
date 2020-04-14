#include<iostream>
using namespace std;

int BubbleSort();
int SelectionSort();
int InsertionSort();
int ShellSort();
int MergeSort();
int QuickSort();
int HeapSort();

int main(void)
{
	BubbleSort();
	SelectionSort();
	InsertionSort();
	ShellSort();
	MergeSort();
	QuickSort();
	HeapSort();
	cout << "main done" << endl;
	return 0;
}