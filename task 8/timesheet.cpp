#include<iostream>

int main()
{
	double time;
	int stavka;
	std::cout << "Введите отработанное время в часах: " << std::endl;
	std::cin >> time;
	std::cout << "Введите часовую ставку: " << std::endl;
	std::cin >> stavka;
	std::cout << "Часы: " << time << "," << "ставка: " << stavka << std::endl;
	int whole_hours = static_cast<int>(time);
	double hours_part = time - whole_hours;
	int minute = static_cast<int>((hours_part * 60) + 0.5);
	double zarabotok = time * stavka;
	int price = static_cast <int>(zarabotok);
	double price_part = zarabotok - price;
	int copeyki = static_cast<int>((price_part * 100) + 0.5);
	std::cout << whole_hours << "ч" << " " << minute << "мин" << std::endl;
	std::cout << price << "руб" << " " << copeyki << "коп" << std::endl;
	return 0;
}
