//Colin Bondy
//EX05_02

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
		if (list[i] > list[i + 1])
			return false;

	return true;
}


int main()
{
	int list1[] = { 1, 2, 3, 4, 5, 6 };

	int a = isSorted(list1, 6);

	
	if (a == 1)
		cout << "Is this int array sorted? True" << endl;
	else
		cout << "Is this int array sorted? False" << endl;


	double list2[] = { 1.1, 2.2, 3.3, 4.4, 5.5, -6.6 };
	int b = isSorted(list2, 6);
	if (b == 1)
		cout << "Is this double array sorted? True" << endl;
	else
		cout << "Is this double array sorted? False" << endl;


	string list3[] = {"abc", "def", "ghi"};
	
	int c = isSorted(list3, 3);

	if (c == 1)
		cout << "Is this String array sorted? True" << endl;
	else
		cout << "Is this String array sorted? False" << endl;


	return 0;
}
