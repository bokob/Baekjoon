#include <iostream>

using namespace std;

int** create_matrix(int N, int M)
{
	int** matrix = new int* [N];
	
	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[M];
	}
	return matrix;
}

void free_matrix(int** matrix, int N)
{
	for (int i = 0; i < N; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int** matrix1 = create_matrix(N, M);
	int** matrix2 = create_matrix(N, M);
	int** matrix3 = create_matrix(N, M);

	int element;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> element;
			matrix1[i][j] = element;
		}
		cin.ignore();
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> element;
			matrix2[i][j] = element;
		}
		cin.ignore();
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix3[i][j] << " ";
		}
		cout << "\n";
	}

	free_matrix(matrix1, N);
	free_matrix(matrix2, N);
	free_matrix(matrix3, N);

	return 0;
}
