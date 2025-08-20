// Mini Project guessing game


#include <iostream>
#include <cstdlib>
#include <ctime>



int generate_random_num(){
    srand(time(0)); // seed with current time

    int randomNum = rand() % 100; // random number between 0–99
    return randomNum;
}

int take_guess(){
    int guess;
    std::cout << "Take a guess (from 0 - 99): " ;
    std::cin>>guess;
    return guess;
}

void check_if_guess(int guess, int num){
    if (guess == num){
        std::cout << "You guessed the correct no." << std::endl;
    } else {
        int check = guess - num;
        int guess_int = num < 0 ? -num : num;
        if (guess_int <=5){
            std::cout << "Very close "<<std::endl;
        } else if (guess_int <= 15){
            std::cout << "You are getting close";
        }
        else {
            if (check < 0){
                std::cout << "Too low";

            } else {
                std::cout << "Too high";
            }
        }
        std::cout<<std::endl;
    }
}

int main(){
    int guess;
    int num = generate_random_num();
    int guess_count{};
    bool gameState = true;

    while (gameState){
        guess = take_guess();
        check_if_guess(guess, num);
    }

    

    return 0;
}

