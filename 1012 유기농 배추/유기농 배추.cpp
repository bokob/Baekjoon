#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(int** field, int** visit, int x, int y);
int** make_field(int N, int M);		 // 땅 만들기
void fill_plant(int** field, int K); // 배추 심는 함수

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T, M, N, K;	// T: 테스트 케이스 수, M: 가로, N: 세로, K: 배추 위치 개수
	cin >> T;

	for(int t=0; t<T; t++)
	{ 
		cin >> M >> N >> K;
		int** field = make_field(N, M);
		fill_plant(field, K);
		int** visit = make_field(N, M);

		int count = 0;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				if (field[i][j] == 1 && visit[i][j] == 0)
				{
					count++;
					bfs(field, visit, i, j);
				}
			}
		}

		cout << count << "\n";
	}
	return 0;
}

void bfs(int** field, int** visit, int x, int y)
{
	int dx[4] = { 0,-1,0,1 };
	int dy[4] = { 1,0,-1,0 };

	int go_x, go_y;
	queue<pair<int, int>> q;
	q.push(pair<int, int>(x, y));
	visit[x][y] = 1;

	while (q.size())
	{
		int tmp_x, tmp_y;
		tmp_x = q.front().first;
		tmp_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			go_x = tmp_x + dx[i];
			go_y = tmp_y + dy[i];

			if (field[tmp_x][tmp_y] == 1 && visit[go_x][go_y] == 0)
				bfs(field, visit, go_x, go_y);
		}
	}
}

int** make_field(int N, int M)
{
	int** field = new int* [N + 2];

	for (int i = 0; i < N + 2; i++)
		field[i] = new int[M + 2];

	for (int i = 0; i < N + 2; i++)
	{
		for (int j = 0; j < M + 2; j++)
			field[i][j] = 0;
	}
	return field;
}

void fill_plant(int** field, int K)
{
	int X, Y;
	for (int i = 0; i < K; i++) // 배추 심기
	{
		cin >> Y >> X;
		Y += 1;
		X += 1;
		field[X][Y] = 1;
	}
}
