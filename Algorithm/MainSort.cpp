#include<iostream>
using namespace std;

int BubbleSort();
int SelectionSort();
int InsertionSort();
int ShellSort();
int MergeSort();

int main(void)
{
	BubbleSort();
	SelectionSort();
	InsertionSort();
	ShellSort();
	MergeSort();
	cout << "main done" << endl;
	return 0;
}