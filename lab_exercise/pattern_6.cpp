// A
// B A
// C B A
// D C B A
// E D C B A

#include <iostream>
using namespace std;
int main()
{
	char ch = 'A';
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << 'A' + i - j;
			cout << "  ";
		}
		cout << endl;
	}
	return 0;
}