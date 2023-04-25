#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void shuffle(int arr[], int n)
{
	srand(time(NULL));
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i);
		swap(arr[i], arr[j]);
	}
}

int main()
{
	cout << "vvedite kolichestvo chisel" << endl;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	shuffle(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
	system("pause");
}
