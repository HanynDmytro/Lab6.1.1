// Варіант 25(Ітераційний код)
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int A, const int B)
{
	for (int i = 0; i < size; i++) {
		a[i] = A + rand() % (B - A + 1);
	}
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(4) << a[i];
	}
	cout << endl;
}
int Sum(const int* const a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] < 0 || i % 2 == 0) {
			S += a[i];
		}
	}
	return S;
}
int Count(const int* const a, const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] < 0 || i % 2 == 0) {
			c++;
		}
	}
	return c;
}
void Replacement(int a[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0 || i % 2 == 0)
			a[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 26;
	int a[n];
	int A = -40;
	int B = 20;
	Create(a, n, A, B);
	Print(a, n);
	cout << "The sum of the elements that satisfy the condition = " << Sum(a, n) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(a, n) << endl;
	Replacement(a, n);
	Print(a, n);
	return 0;
}
