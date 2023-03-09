

#include <iostream>
#include <math.h>

float FindMinInMatrix(float matrix[40][40], int n)
{
	float min = matrix[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
		}
	}

	return min;
}

void ModifyMatrix(float matrix[40][40], int n, float otherMin)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			matrix[i][i] += otherMin;
		}
	}
}

int main()
{

	setlocale(LC_ALL, "rus");


	int n1, n2;
	float matrix1[40][40];
	float matrix2[40][40];
	std::cout << "введите размерность первой матрицы\n";
	std::cin >> n1;
	std::cout << "введите первую матрицу\n";

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}

	std::cout << "введите размерность второй матрицы\n";
	std::cin >> n2;
	std::cout << "введите второй матрицу\n";

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}



	std::cout << "\nИсходные матрицы\n";
	std::cout << "-----------------------------------------\n";

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			std::cout << matrix1[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "-----------------------------------------\n";


	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			std::cout << matrix2[i][j] << " ";
		}
		std::cout << "\n";
	}


	float min1 = FindMinInMatrix(matrix1, n1);
	float min2 = FindMinInMatrix(matrix2, n2);

	ModifyMatrix(matrix1, n1, min2);
	ModifyMatrix(matrix2, n2, min1);

	std::cout << "\nПреобразованные матрицы\n";
	std::cout << "-----------------------------------------\n";

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			std::cout << matrix1[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "-----------------------------------------\n";


	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			std::cout << matrix2[i][j] << " ";
		}
		std::cout << "\n";
	}

}
	