#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Panjang Element Array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang array adalah 20" << endl;
	}
	cout << "\n____________________" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n____________________" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_sort(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;

	pivot = arr[low];

	i = low + 1;
	j = high;
	while (i <= j)
	{
		while ((arr[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count++;
		}
		cmp_count++;
}