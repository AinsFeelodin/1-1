#define _USE_MATH_DEFINES
#include <iostream>
#включить <cmath>
использование пространства; имен std;

/**
* \brief Математическая функция, рассчитывающая значение a
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение a
**/
double GetA(const double x, const double y);

/**
* \brief Математическая функция, рассчитывающая значение b
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение b
**/
double getB(const double x, const double y);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main() {
	const double x = 0.335;
	const double y = 0.025;
	const auto a = GetA(x, y);
	const auto b = getB(x, y);
	std::cout << "x =" <
		std::cout << "\n y=" << y
		std::cout << "\n a=" <
		std::cout <<"\n b=" <;
	return 0;
}

double GetA(const double x, const double y) {
	return 1 + 𝑥 + (𝑥^2)/2 + (𝑥^3)/3 + (𝑥^4)/4;
}

double getB(const double x, const double y) {
	return 𝑥*(sin(𝑥 ^ 3) + cos ^ 2(𝑦));
}