#include <vector>
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	//1
	//int n = 10;
	//vector <int>a(n);
	//for (vector<int>::size_type i = 1; i!=a.size(); ++i)
	//{
	//	a[i] = i * i;
	//	cout << a[i] << " ";
	//}


	//2
	int size = 10;
	vector<int>vect;
	for (int i = 1; i < size; i++)
	{
		vect.push_back(i);
	}
	for (int i = 1; i < size; i++)
	{
		for (auto it = vect.begin(); it != vect.end(); it++)
		{
			cout << setw(5) << *it * i;
		}cout << endl;
	}

}