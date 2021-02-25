#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


int generateRandomNumber();
int getPlayerGuess();
void printAnswer(int guess, int secretNumber);

int main()
{
    int secretNumber = generateRandomNumber();
    int guess;
    int score = 100;
    int times = 0;
    do
    {
        guess = getPlayerGuess();
        printAnswer(guess, secretNumber);
        score -= 1;
        times ++;
    } while(guess != secretNumber);
    cout << endl << "YOUR SCORE:" << endl << score;
}
int generateRandomNumber()
{
    srand(time(0));
    int secretNumber = rand() % 99 + 1;
    return secretNumber;
}
int getPlayerGuess()
{
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin >> guess;
    return guess;
}
void printAnswer(int guess, int secretNumber)
{
    if(guess > secretNumber)
    {
        cout << "YOUR NUMBER IS TOO BIG!";
    }
    else if (guess < secretNumber)
    {
        cout << "YOUR NUMBER IS TOO SMALL";
    }
    else
    {
        cout << "CONGRATULATION! YOU WIN.";
    }

}

