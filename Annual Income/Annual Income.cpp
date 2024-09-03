#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
	double income2024, income2023, income2022, income2021, income2020, incomeaverage;

	cout << "Enter income for 2024: ";
	cin >> income2024;

	cout << "Enter income for 2023: ";
	cin >> income2023;

	cout << "Enter income for 2022: ";
	cin >> income2022;

	cout << "Enter income for 2021: ";
	cin >> income2021;

	cout << "Enter income for 2020: ";
	cin >> income2020;

	incomeaverage = (income2024 + income2023 + income2022 + income2021 + income2020) / 5;

	cout << "Income (averaged over the past 5 years) is: $" << fixed << setprecision(2) << incomeaverage;
	return 0;
}


