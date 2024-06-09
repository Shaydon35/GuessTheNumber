#include <iostream>
#include <String>

int main()
{
    int secretNumber = 72; //var-data << 72 (mod)
    int guessedNumber;

    std::cout << "Quel est le nombre? \n";
    for (int i = 0;i < 6;i++) {
        if (i > 0 && i < 5 && secretNumber != guessedNumber && guessedNumber < secretNumber)
        {
            std::cout << "Mauvais nombre >> le nombre mystere est plus grand! Quel est le nombre? \n";
        }
        if (i > 0 && i < 5 && secretNumber != guessedNumber && guessedNumber > secretNumber)
        {
            std::cout << "Mauvais nombre >> le nombre mystere est plus petit! Quel est le nombre? \n";
        }

        if (i < 5) {
            std::cin >> guessedNumber;
        }
        if (guessedNumber == secretNumber) {
            std::cout << "bravo tu as trouve le nombre!";
            std::cin.ignore();
        }
        if (i >= 5 && secretNumber != guessedNumber) {
            std::cout << "vous avez perdu! >> vous avez depasse les 5 tentatives";
            std::cin.ignore();
        }
    }

    //Made by Shaydon Gervais
}
