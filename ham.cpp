#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int get_random_number() {
    return rand() % 100 + 1;
}

int get_number() {
    int guess;
    cout << "please enter your number: ";
    cin >> guess;
    return guess;
}

void print_result(int guess_number,int number) {
    if ( guess_number > number ) cout << "too big" << endl;
        else if ( guess_number < number ) cout << "too small" << endl;
            else cout << "correct" ;
}

bool play_one_more_game(){
    string answer;
    cout << "Play again (Y/N): ";
    cin >> answer;
    return answer == "Y" || answer == "y";
}

int play_one_game()
{
    srand(time(0));
    int guess_number;
    int number = get_random_number();
    cout << number << endl;

    do {
        guess_number = get_number();
        print_result(guess_number, number);
    } while (guess_number != number);

    return 0;
}

