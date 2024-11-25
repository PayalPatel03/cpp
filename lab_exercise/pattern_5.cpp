// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j >= i; j--)
		{
			int num = j % 2;
			cout << num;
			cout << "  ";
		}
		cout << endl;
	}
}