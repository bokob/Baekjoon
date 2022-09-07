#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* ptr = new int[N + 3];

	ptr[1] = 0;
	ptr[2] = 1;
	ptr[3] = 1;
	for (int i = 4; i < N + 1; i++) 
	{
		if (i % 6 == 0)
			ptr[i] = min(ptr[i / 2] + 1, ptr[i / 3] + 1);
		else 
		{
			if (i % 2 == 0)
				ptr[i] = min(ptr[i - 1] + 1, ptr[i / 2] + 1);
			else if (i % 3 == 0)
				ptr[i] = min(ptr[i - 1] + 1, ptr[i / 3] + 1);
			else
				ptr[i] = ptr[i - 1] + 1;
		}
	}
	cout << ptr[N];

	delete[] ptr;

	return 0;
}
