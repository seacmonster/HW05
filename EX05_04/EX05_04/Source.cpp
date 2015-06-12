//Colin BOndy
//Ex05_04

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(0)); //Without quzi-random it outputs same pattern each time
	for (int i = 0; i < 10; i++)
	{
		int a = rand() % v.size();
		T temp = v[a];
		v[a] = v[i];
		v[i] = temp;
	}
}


int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);

	shuffle(v);

	for (int i = 0; i < 10; i++)
		cout << v[i] << " ";

	return 0;
}


