#include <iostream>
using namespace std;

int sirFrecventa[10];

int main()
{
	int matrice[10][10];
	bool corect = true;
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			cin >> matrice[i][j];
		}
	}

	// suma linie
	for (int linie = 1; linie <= 9; ++linie)
	{
		int suma = 0;
		for (int coloana = 1; coloana <= 9; ++coloana)
		{
			suma += matrice[linie][coloana];
		}
		if (suma != 45)
		{
			corect = false;
			break;
		}
	}

	// suma coloana
	if (corect)
	{
		for (int coloana = 1; coloana <= 9; ++coloana)
		{
			int suma = 0;
			for (int linie = 1; linie <= 9; ++linie)
			{
				suma += matrice[linie][coloana];
			}
			if (suma != 45)
			{
				corect = false;
				break;
			}
		}
	}

	//suma per chenar
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			int suma = 0;
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int coloana = 1; coloana <= 3; ++coloana)
				{
					suma += matrice[linie][coloana];
				}
			}
			if (suma != 45)
			{
				corect = false;
				break;
			}
		}
	}
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			int suma = 0;
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int coloana = 4; coloana <= 6; ++coloana)
				{
					suma += matrice[linie][coloana];
				}
			}
			if (suma != 45)
			{
				corect = false;
				break;
			}
		}
	}
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			int suma = 0;
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int coloana = 7; coloana <= 9; ++coloana)
				{
					suma += matrice[linie][coloana];
				}
			}
			if (suma != 45)
			{
				corect = false;
				break;
			}
		}
	}

	// verifica duplicate linie
	if (corect)
	{
		for (int linie = 1; linie <= 9; ++linie)
		{
			for (int colona = 1; colona <= 9; ++colona)
			{ 	++sirFrecventa[matrice[linie][colona]];
			}
			for (int i = 1; i <= 9; ++i)
			{
				if (sirFrecventa[i] > 1)
				{
					corect = false;
					break;
				}
				sirFrecventa[i] = 0;
			}
		}
	}

	// verifica duplicate coloana
	if (corect)
	{
		for (int colona = 1; colona <= 9; ++colona)
		{
			for (int linie = 1; linie <= 9; ++linie)
			{ 	++sirFrecventa[matrice[linie][colona]];
			}
			for (int i = 1; i <= 9; ++i)
			{
				if (sirFrecventa[i] > 1)
				{
					corect = false;
					break;
				}
				sirFrecventa[i] = 0;
			}
		}
	}

	//duplicate per chenar
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int colona = 1; colona <= 3; ++colona)
				{ 		++sirFrecventa[matrice[linie][colona]];
				}
			}
			for (int i = 1; i <= 9; ++i)
			{
				if (sirFrecventa[i] > 1)
				{
					corect = false;
					break;
				}
				sirFrecventa[i] = 0;
			}
		}
	}
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int colona = 4; colona <= 6; ++colona)
				{ 		++sirFrecventa[matrice[linie][colona]];
				}
			}
			for (int i = 1; i <= 9; ++i)
			{
				if (sirFrecventa[i] > 1)
				{
					corect = false;
					break;
				}
				sirFrecventa[i] = 0;
			}
		}
	}
	if (corect)
	{
		for (int i = 0; i <= 6; i += 3)
		{
			for (int linie = i + 1; linie <= i + 3; ++linie)
			{
				for (int colona = 7; colona <= 9; ++colona)
				{ 		++sirFrecventa[matrice[linie][colona]];
				}
			}
			for (int i = 1; i <= 9; ++i)
			{
				if (sirFrecventa[i] > 1)
				{
					corect = false;
					break;
				}
				sirFrecventa[i] = 0;
			}
		}
	}

	if (corect)
		cout << "corect";
	else
		cout << "incorect";

	return 0;
}
