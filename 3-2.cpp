#include<iostream>
#include<ctime>
using namespace std;

/*2) � ������� ������� N, ������������ ����.������� �� 0 �� 10, 
���������� ���������� ���������, ������������� ����� ������ ����.*/

void countdoubles();

int main()
{
	countdoubles();
	system("pause");
}

void countdoubles()
{
	setlocale(0, "");
	srand(time(NULL));
	int const N = 16;
	int array[N];
	int i = 0;

	//init+cout
	while (i < N)
	{
		array[i] = rand() % 10;
		cout << array[i] << "   ";
		i++;
	}
	cout << endl;
	
	//count 
	
	i = 0;
	int j = 0, counter = 0;
	while (i < N)
	{
		j = i + 1;
		//������ �����
		while (j < N)
		{
			if (array[i] == -1) break;
			if (array[i] == array[j])
			{
				counter++;
				int k = 0;
				while (k < N)
				{
					if (array[k] == array[j])
					{
						array[k] = -1;
						
					}
					k++;
				}
				break;
			}
			j++;
		}
		i++;
	}
	cout << "����� = " << counter << endl;
	return;
}