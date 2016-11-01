#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*3) ������ � ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� -N �� N.
�� ��������� ������� �� ������ 2-2 �������� ������� ������������ ������ ��������� ������� ������ �� k ���������
(1-� ������ 1+k -��, 2-� ������ 2+k -�� � �.�.) � ����� �� k ���������. � main �������� ����� ���� ������� ��� ����� k,
������� ������ ������������. (k ����� ���� � ��������� =0, ����� ������ ���, k=1 - ������ ���������� ���������� 2-2.cpp � �.�)
���� ��������� ������� ���������� ������ ������� �������� ����� �������� ����� ������ �� ������� �.*/

void sdvigarray(int k);

int main()
{
	setlocale(0, "");
	int k;
	cout << "��������� ����� ����� �������� �������� �������?\n";
	cin >> k;
	sdvigarray(k);
	system("pause");
}


void sdvigarray(int k)
{
	int const N = 8;
	int array[N];
	k = k % N;
	int doparray[N];
	int i = 0;

	//init+cout
	while (i < N)
	{
		array[i] = rand() % (2 * N) - N;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;

	if (N == k || k == 0)
	{
		cout << "������\n";
		return;
	}

	//v pravo
	
	i = 0;
	while (i < N)
	{
		doparray[(i+k) % N] = array [i];
		i++;
	}
	
	/*
	//vvod temp
	i = 0;
	while (i < k)
	{
		doparray[i] = array[N - k + i];
		i++;
	}

	//perestanovka
	i = 0;
	while ((i + k - 1) < N)
	{
		array[(N - 1 - i)] = array[((N - k) - 1 - i)];
		i++;
	}

	//vozrat temp
	i = 0;
	while (i < k)
	{
		array[i] = doparray[i];
		i++;
	}*/

	//cout

	i = 0;
	while (i < N)
	{
		cout << doparray[i] << "   ";
		i++;
	}
	cout << endl;

	//v levo

	i = 0;
	while (i < N)
	{
		doparray[(i - k + N) % N] = array[i];
		i++;
	}
	/*
	//vvod temp
	i = 0;
	while (i < k)
	{
		doparray[i] = array[i];
		i++;
	}

	//perestanovka
	i = 0;
	while ((i + k) < N)
	{
		array[i] = array[k + i];
		i++;
	}

	//vozrat temp
	i = 0;
	while (i < k)
	{
		array[N - k + i] = doparray[i];
		i++;
	}
	*/
	//cout
	i = 0;
	while (i < N)
	{
		cout << array[i] << "   ";
		i++;
	}
	return;
}
