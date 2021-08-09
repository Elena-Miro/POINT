#include <iostream>
using namespace std;

int main()
{
	size_t size;
	cout << "Enter size of array: ";
	cin >> size;
	int* array = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter" << i + 1 << " element of array: ";
		cin >> array[i];
	}
	cout << "Your array: ";
	for (size_t i = 0; i < size; i++)
		cout << array[i] << " ";
	delete[] array;
	return 0;
}