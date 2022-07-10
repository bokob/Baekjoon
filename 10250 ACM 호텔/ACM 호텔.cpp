#include <iostream>
#include <string>
#include <vector>
using namespace std;

string romm_assign(int H, int W, int N)
{
	int floor = N % H;				
	int room_number;

	string Y, X;

	if (floor == 0)				// 나누어 떨어지면 H층
	{
		room_number = N / H;
		Y = to_string(H);
	}
	else
	{
		room_number = N / H + 1;
		Y = to_string(floor);
	}

	if (room_number < 10)
		X = '0' + to_string(room_number);
	else
		X = to_string(room_number);

	Y += X;

	return Y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, H, W, N;
	cin >> T;

	vector<string> v;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		v.push_back(romm_assign(H, W, N));
	}

	for (int i = 0; i < T; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}
