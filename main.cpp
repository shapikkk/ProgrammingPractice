#include <iostream>

int task4 = 9;

int main()
{
	/*                                                        Task 1
	int num1 = 17;

	std::cout << "Num1 = " << num1 << std::endl;

	float num2 = 2.8;
	std::cout << "Num2 = " << num2 << std::endl;

	int num3 = 012;
	std::cout << "Num3 = " << num3 << std::endl; // У цьому виводі виводиться 10, тому що "012" записано у восьмиричній системі. 012 = 10

	int num4 = 13;
	std::cout << "Num4 = " << num4 << std::endl; */

	/*                                                        Task 2
	char c1 = 'f';
	char c2 = 123;
	std::cout << "Char 1 = " << c1 << std::endl;
	std::cout << "Char 2 = " << c2 << std::endl; // У цьому випадку ми виводимо символьну змінну та отримаємо "{", яка відповідає числовому коду в таблиці ASCII
	*/

	/*                                                        Task 3
	float d1(2.8);
	float d2(4.8);
	
	int sum = d1 + d2; // Спочатку відбувається обчислення суми чисел, потім приведення до цілого числу

	printf("First num: %f\n", d1);
	printf("Second num: %f\n", d2);
	printf("Third num: %d\n", sum); */

	/*                                                        Task 4 */
	int localInt = 20;
	std::cout << "Локальна змінна = " << localInt << std::endl;
	std::cout << "Глобальна змінна number = " << ::task4 << std::endl;

	//Змінію значення
	localInt = 21;
	task4 = 23;

	std::cout << "Локальна змінна = " << localInt << std::endl;
	std::cout << "Глобальна змінна number = " << ::task4 << std::endl;

	return 0; 
}


