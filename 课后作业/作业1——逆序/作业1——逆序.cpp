#include<iostream>
using namespace std;
#define N 10
int n = N - 1;
int temp;
void change(int a[])
{
	for (int i = 0; i < N / 2; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
int main()
{
	int a[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	cout << "Ô­ÐòÎª£º";
	for (int i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
	change(a);
	cout << "ÄæÐòÎª£º";
	for (int i = 0; i < N; i++)
		cout << a[i] << " ";
	return 0;
}