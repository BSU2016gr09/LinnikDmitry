#include<iostream>
#include<ctime>
using namespace std;

/*2) ������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� -N �� N. 
���������� �������� �������� ������� ������ �� 1 ������� (��������� ������� ������ ������, 1-� ������ 2-�, 
2-� ������ 3-� � �.�.) ����� ���������� �������� �������� ������� ����� �� 1 ������� 
(������ ������� ������ ���������, 2-� ������ 1-� � �.�)*/

void sdvigarray();

int main()
{
	sdvigarray();
	system("pause");
}

void sdvigarray()
{
	int const N = 8;
	int array[N];
	int i = 0;
	srand(time(NULL));
	
	//init+cout
	while (i < N)
	{
		array[i] = rand() % (2*N) - N;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//v pravo
	i = N - 1; 
	while (i > 0)
	{
		swap(array[i-1], array[i]);
		i--;
	}
	
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//v levo
	i = 0;
	while (i < (N - 1))
	{
		swap(array[i + 1], array[i]);
		i++;
	}
	
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
}