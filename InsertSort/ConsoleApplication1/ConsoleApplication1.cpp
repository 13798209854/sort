#include <vector>
#include <iostream>


void insert_sort(int a[], int size)
{
	if (size < 2) return;
	for (int i = 1; i < size; ++i)
	{
		for (int j = i; j >= 1; --j)
		{
			if (a[j] < a[j - 1])
			{
				auto t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}

template<typename T>
void printArray(T a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(a+i)<<" ";
	}
	std::cout << std::endl;
}

int main()
{
	int a[] = {6,8,6,9,5,2,1,6,4,6,3,9};
	int b = 0;
	b = sizeof(a)/sizeof(int);
	printArray<int>(a, b);
	insert_sort(a, b);
	printArray<int>(a, b);
}


