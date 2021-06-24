#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
//#define PLUS_MINUS
//#define ROMB2
//#define PLUS_MINUS2
//#define CHESS_BOARD
#define SQUARE2
#define TRIANGLE_PIFAGORA

#define UPPER_LEFT_ANGLE	(char)218
#define DOWN_RIGHT_ANGLE	(char)217
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define VERT_LINE			(char)179
#define HORIZ_LINE			(char)196 << (char)196
#define WHITE_BOX			(char)219 << (char)219
#define BLACK_BOX			(char)32 << (char)32

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i * 2; j < (n - 1) * 2; j++) cout << " ";
		cout << "/";
		cout << endl;
	}
	cout << endl;

#endif // ROMB

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j - i < n; j++)
		{
			if (j % 2 == 0) cout << "+";
			else cout << "-";
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef ROMB2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++) cout << " ";
		cout << "/";
		cout << endl;
	}
	cout << endl;
#endif // ROMB2

#ifdef PLUS_MINUS2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ ";	else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS2

#ifdef CHESS_BOARD
	setlocale(LC_ALL, "C"); //Возвращает кодировку по умолчанию
/*for (int i = 0; i < 256; i++)
{
	cout << i << "\t" << (char)i << endl;
}*/
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n) cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else
			{
				if ((i + j) % 2 == 0)cout << WHITE_BOX;
				else cout << "  ";
			}
		}
		cout << endl;
	}
#endif // CHESS_BOARD

#ifdef SQUARE2
	for (int l = 0; l < n; l++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int k = l; k-l < n; k++)
			{
				if(k%2==0)
				for (int j = 0; j < n; j++)
				{
					cout << "* ";
				}
				else
				for (int j = 0; j < n; j++)
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	cout << endl;
#endif // SQUARE2

#ifdef TRIANGLE_PIFAGORA
	int resultat = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++) cout << "  ";
		for (int k = 0; k <= i; k++)
		{
			if (k == 0 || i == 0)
				resultat = 1;
			else
				resultat = resultat * (i - k + 1) / k;
			cout << resultat << "   ";
		}
		cout << endl;
	}
#endif // TRIANGLE_PIFAGORA

}