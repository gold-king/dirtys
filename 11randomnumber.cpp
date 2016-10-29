#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

int main(int argc, char **argv)
{
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<unsigned int> randomInt(0, 9);

    int length(100);

    if (argc == 2) {
	length = std::atoi(argv[1]);
    }

    for (int i = 1; i <= length; ++i) {
	std::cout << std::setw(2) << randomInt(engine);

	if (i % 10 == 0) {
	    std::cout << std::endl;
	}
    }

    return 0;
}