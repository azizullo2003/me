#include <iostream>
using namespace std;
int main()
{
	long long int n, arr[100001], sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << abs(sum) << endl;
	return 0;
}