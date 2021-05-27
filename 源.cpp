#include <iostream>
#define ture 1
#define false 0
void ShellSort(int A[], int n)
{
	int i, j, d,tmp;
	d = n / 2;
	while (d > 0)
	{
		for (i = d; i < n; i++)
		{
			tmp = A[i];
			j = i - d;
			while (j >= 0 && tmp < A[j])
			{
				A[j + d] = A[j];
				j = j - d;
			}
			A[j + d] = tmp;
		}
		d = d / 2;
	}
}
int main()
{
    int A[] = { 1919,810,114514,4,5,3,7,8,1145,996 };
	ShellSort(A, 10);
	for (int i = 0; i < 10; i++)
		printf("%d ",A[i]);
}