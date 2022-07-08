#include <iostream>

using namespace std;

int** create_matrix(int row, int col)
{
	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
	}
	return matrix;
}

void free_matrix(int **matrix, int row)
{
	for (int i = 0; i < row; i++)
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

	int N, M, K, temp;
	cin >> N >> M;
	int** matrix1 = create_matrix(N, M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> temp;
			matrix1[i][j] = temp;
		}
	}

	cin >> M >> K;
	int** matrix2 = create_matrix(M, K);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> temp;
			matrix2[i][j] = temp;
		}
	}

	int** matrix3 = create_matrix(N, K);

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < K; k++)
		{
			temp = 0;
			for (int j = 0; j < M; j++)
			{
				temp += matrix1[i][j] * matrix2[j][k];
			}
			matrix3[i][k] = temp;
		}	
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << matrix3[i][j] << " ";
		}
		cout << "\n";
	}

	free_matrix(matrix1, N);
	free_matrix(matrix2, M);
	free_matrix(matrix3, N);

	return 0;
}
