#include<iostream>
#include<ctime>
using namespace std;

/*1) ������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� 1 �� N.
"�����������" ������ (��������� ������� ������ ������, 1-� ������ ���������,
2-� ���������� � ������������� � �.�.) ����������� ��������� ������ ��������� N*/
void arraycoup(int raz);

int main()
{
	setlocale(0, "");
	int raz;
	cout << "������� ��� ����� �������������� �������� � �������?\n";
	cin >> raz;
	arraycoup(raz);
	system("pause");
}

void arraycoup(int raz)
{
	int const N = 8;
	int array[N];
	int i = 0;
	srand(time(NULL));

	//init+cout
	while (i < N)
	{
		array[i] = i + 1;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	//peretysovka
	
	//random
	
	i = 0;
	while (i < raz)
	{

		int rand1 = rand() % N;
		int rand2 = rand() % N;
		swap(array[rand1], array[rand2]);
		i++;
	}

	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	
	//s ispolz dop array
	cout << endl << "Dop array\n";
	
	//cout
	i = 0;
	while (i < N)
	{
		array[i] = i + 1;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	
	//cout dop array
	int doparray[N];
	i = 0;
	while (i < N)
	{
		doparray[i] = N - i;
		cout << doparray[i] << "   ";
		i++;
	}
	cout << endl;
	
	i = 0;
	while (i < N)
	{
		if (i % 2 == 0)
		{
			array[i] = doparray[i];
		}
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
