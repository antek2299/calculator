#include <iostream>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_CTYPE, "Polish");

	int wybor;
	float wynik, czynnik, czynnik2;

	std::cout << "Witam w kalkulatorze\n";
	std::cout << "kliknij enter";
	std::cin.get();

	system("cls");
	while (1)
	{
		std::cout << "wybierz opcję\n";
		std::cout << "1) dodawanien\n";
		std::cout << "2) odejmownie\n";
		std::cout << "3) mnożenie\n";
		std::cout << "4) dzielenie\n";
		std::cin >> wybor;

		system("cls");

		switch (wybor)
		{
		case 1://funkcja dodawania
			std::cout << "podaj pierwszy składnik\n";
			std::cin >> czynnik2;
			std::cout << "podaj drugi składnik\n";
			std::cin >> czynnik;

			wynik = czynnik2 + czynnik;

			break;
		case 2://funkcja odejmowania
			std::cout << "podaj odjemną\n";
			std::cin >> czynnik2;
			std::cout << "podaj odjemnik\n";
			std::cin >> czynnik;

			wynik = czynnik2 - czynnik;

			break;
		case 3://funkcja mnozenia
			std::cout << "podaj mnożną\n";
			std::cin >> czynnik2;
			std::cout << "podaj mnożnik\n";
			std::cin >> czynnik;

			wynik = czynnik2 * czynnik;

			break;
		case 4://funkcja dzielania
			std::cout << "podaj dzielną\n";
			std::cin >> czynnik2;
			std::cout << "podaj dzielnik\n";
			std::cin >> czynnik;

			if (czynnik == 0) {
				system("cls");
				std::cout << "nie można dzielić przez zero";
				std::cin.get();
				std::cin.get();
				system("cls");
				continue;
			}
			else {
				wynik = czynnik2 / czynnik;
			}

			break;
		default:
			std::cout << "niema takiej opcji";
			std::cin.get();
			std::cin.get();
			system("cls");
			break;
		}

		system("cls");
		std::cout << wynik << std::endl;
		std::cin.get();
		std::cin.get();
		system("cls");

		wynik = 0;
		czynnik2 = 0;
		czynnik = 0;
	}
}