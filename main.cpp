#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ham.h"

using namespace std;

int main(){
    bool play_again;

    do{
        play_one_game();
        play_again = play_one_more_game();
    }while(play_again);

    return 0;
}
