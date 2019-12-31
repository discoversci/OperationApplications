#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

template<class I>
void print(const I& start, const I& end)
{
	I it;
	for (it = start; it != end; ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	vector <int> v1(a, a + 10);
	vector <int> v2(a + 10, a + 20);

	cout << "v1: ";
	print(v1.begin(), v1.end());
	cout << "v2: ";
	print(v2.begin(), v2.end());

	vector<int>::iterator itrtv1 = v1.begin() + 3;
	cout << "Iteratorjeva vrednost pred swapom: " << *itrtv1 << endl;

	cout << "Swapping elements.\n";
	v1.swap(v2);

	cout << "Iteratorjeva vrednost po swapu: " << *itrtv1 << endl;
	cout << "Vidimo, da se je iterator ohranil, s to razliko, da sedaj kaze na drug vector in ne vec na prvega."

	cout << "v1: ";
	print(v1.begin(), v1.end());
	cout << "v2: ";
	print(v2.begin(), v2.end());

	return 0;
}
