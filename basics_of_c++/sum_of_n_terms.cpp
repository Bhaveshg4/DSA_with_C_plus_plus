
#include <iostream>
using namespace std;

int findSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + i;
	return sum;
}

// Driver code
int main()
{
	int n = 5;
	cout << findSum(n);
	return 0;
}
 