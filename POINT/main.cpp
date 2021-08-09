#include <iostream>
using namespace std;
void decriment(int* a)
{
		(*a)--;
		
}
void myswap(int* a, int* b)
{
	int tap = *a;
	*a = *b;
	*b = tap;
}
void qwadro(int* a)
{
	
	*a= *a**a;
	
}
int main()
{
	
	int a;
	cout << "Enter value to decrement: ";
	cin >> a;
	decriment(&a);
	cout << "Decrement:" << a << endl;
	cout << "Enter two numbers: ";
	int first, second;
	cin >> first >> second;
	myswap(&first, &second);
	cout << "Your values: " << first << " " << second << endl;
	int m;
	cout << "Enter number: ";
	cin >> m;
	qwadro(&m);
	cout << "Your values: " << m << endl;

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

	return 0;
}