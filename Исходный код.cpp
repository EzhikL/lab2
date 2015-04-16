#include <iostream>
using namespace std;
int a[100];
void quickSort(int l, int r) //!function sortirovki
{
	int x = a[l + (r - l) / 2];
	//!zapis ~ (l+r)/2, 
	//!ne visivaet perepolneniya
	int i = l;
	int j = r;
	while (i <= j) 
	{
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (i<r)
		quickSort(i, r);

	if (l<j)
		quickSort(l, j);
}
int main()
{
	int n;//!kol-vo elementov v massive
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}