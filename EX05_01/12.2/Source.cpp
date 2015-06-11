//Colin Bondy
//EX05_01

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T linearSearch(const T list[], T key, int arraySize) //Generic template for any arguments
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
};


int main()
{
	
	//int test using 7.9 requirement to ensure correct coding
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	int i = linearSearch(list, 4, 8);
	cout << i << endl;
	int j = linearSearch(list, -4, 8);
	cout << j << endl;
	int k = linearSearch(list, -3, 8);
	cout << k << endl << endl;


	double list2[] = { 1.1, 4.4, 4.4, 2.2, 5.5, -3.3, 6.6, 2.2 }; //same test batch for doubles
	double l = linearSearch(list2, 4.4, 8);
	cout << l << endl;
	double s = linearSearch(list2, -4.4, 8);
	cout << s << endl;
	double m = linearSearch(list2, -3.3, 8);
	cout << m << endl << endl;

	string list3[] = { "Hello World" }; //same test batch for doubles
	string hello = "Hello World";
	string hello1 = "Hello World1";
	string well = "WELL";
	string a = linearSearch(list3, hello, 8);
	cout << a << endl;
	string t = linearSearch(list3, hello1, 8);
	cout << t << endl;
	string v = linearSearch(list3, well, 8);
	cout << v << endl << endl;
}
