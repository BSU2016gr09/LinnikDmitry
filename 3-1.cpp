#include<iostream>
#include<ctime>
using namespace std;

/*1) �������� ���� � ����� ����� ��������� � �����������. ��� �� ������� ������ �� ��� ������. 
��������� ��� � ���� ����� ������. ���� ������������� ���� ������� ����� >50. 
������ ������� � ��������� �-��� �������������� (��. ������� � �������� �������).*/

int game();
int rollthedice(int sum);
void drawkybik (int kybik);

int main()
{
	
	setlocale(0, "");
	game();
	system("pause");
}

int game()
{
	int sumplayer = 0, sumbot = 0;
	cout << "������ �� ������� ������ �� ��� ������. ��������� ��� � ���� ����� ������. ���� ������������� ���� ������� ����� >50.\n";
	system("pause");
	system("cls");
	bool i = 0;
	while (i == 0)
	{
		cout << "��� ���. ������� ������.\n";
		system("pause");
		sumplayer = rollthedice(sumplayer);
		cout << "���� ���� = " << sumplayer << endl;
		system("pause");
		
		
		cout << "��� ����������\n\n";
		sumbot = rollthedice(sumbot);	
		cout << "���� ���������� = " << sumbot << endl;
		system("pause");
		system("cls");

		if (sumplayer > 50 && sumbot > 50) 
		{
			cout << "�����\n";  return 0;
		}
		if (sumplayer > 50) 
		{
			cout << "�� ��������, ���!\n";  return 0;
		}
		if (sumbot > 50) 
		{
			cout << "� ���������, ������� ���������!\n";  return 0;
		}
	}
}

 
int rollthedice(int sum)
{
	srand(time(NULL));
	int kybik;
	int i = 0;
	while (i < 2)
	{
		kybik = rand() % 6 + 1;
		drawkybik(kybik);
		sum += kybik;
		i++;
	}
	return (sum);
}

void drawkybik(int kybik)
{
	switch (kybik)
	{
	case (1): cout << "  _____\n |     |\n |  O  |\n |_____|\n"; break; 
	case (2): cout << "  _____\n |    O|\n |     |\n |O____|\n"; break; 
	case (3): cout << "  _____\n |O    |\n |  O  |\n |____O|\n"; break;
	case (4): cout << "  _____\n |O   O|\n |     |\n |O___O|\n"; break;
	case (5): cout << "  _____\n |O   O|\n |  O  |\n |O___O|\n"; break;
	case (6): cout << "  _____\n |O   O|\n |O   O|\n |O___O|\n"; break;
	}
	cout << endl;
}