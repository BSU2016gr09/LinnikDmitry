#include<iostream>
#include<ctime>
using namespace std;

/*1) ������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� 1 �� N. 
"�����������" ������ (��������� ������� ������ ������, 1-� ������ ���������, 
2-� ���������� � ������������� � �.�.) ����������� ��������� ������ ��������� N*/
void arraycoup();

int main()
{
	arraycoup();
	system("pause");
}

void arraycoup()
{
	int const N = 7;
	int array[N];
	int i = 0;
	srand(time(NULL));

	//init+cout
	while (i < N)
	{
		array[i] = rand() % N + 1;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	//sdvig
	i = 0;
	while (i < N / 2)
	{
		swap(array[i], array[N - (i + 1)]);
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
