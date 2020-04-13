#include<iostream>
using namespace std;

int BubbleSort();
int SelectionSort();
int InsertionSort();
int ShellSort();

int main(void)
{
	BubbleSort();
	SelectionSort();
	InsertionSort();
	ShellSort();
	cout << "main done" << endl;
	return 0;
}