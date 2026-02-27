#include <iostream>
#include <random>

int rollDice(std::mt19937 &gen);

int main()
{
    unsigned seed;
    std::cin >> seed;

    std::mt19937 gen(seed);

    int sum = rollDice(gen);

    if(sum == 7 || sum == 11){
        std::cout << "You win\n";
        return 0;
    }

    if(sum == 2 || sum == 3 || sum == 12){
        std::cout << "You lose\n";
        return 0;
    }

    int point = sum;

    while(true) {
        sum = rollDice(gen);

        if(sum == point){
            std::cout << "You win\n";
            break;
        }
        if(sum == 7){
            std::cout << "You lose\n";
            break;
        }
    }
}

int rollDice(std::mt19937 &gen)
{
    std::uniform_int_distribution<int> dist(1,6);
    return dist(gen) + dist(gen);
}