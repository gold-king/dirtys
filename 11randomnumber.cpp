#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

int main(int argc, char **argv)
{
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<unsigned int> randomInt(0, 9);

    int length;

    if (argc < 2) {
	length = 10;
    } else {
	length = std::atoi(argv[1]) / 10;
    }    

    for (int i = 1; i <= length; ++i) {
        for (unsigned int counter =1; counter <= 10; ++counter) {
            std::cout << std::setw(2) << randomInt(engine);
        }

	std::cout << std::endl;
    }

    return 0;
}