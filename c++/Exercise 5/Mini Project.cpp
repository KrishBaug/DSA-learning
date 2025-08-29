#include <iostream>


void deposit(int amount, int &balance);
void withdraw(int amount, int &balance);
void get_amount(int &amount);

int main(){
    int balance{};
    char op{};
    int amount{};
    
    while (true){
        std::cout << "Enter the operation";
        std::cin >>  op;

        get_amount(amount);
        
        switch (op) {
            case 'w': withdraw(amount, balance); break;
            case 'd': deposit(amount, balance); break;

        }

        std::cout << "Bank Balance : " << balance << std::endl;
    }
    

    return 0;

}


void deposit(int amount, int &balance){
    balance += amount;
    std::cout << "Deposit successful"<< std::endl;
}

void withdraw(int amount, int &balance){
    if (balance >= amount){
        balance -= amount;
        std::cout << "Deposit Succesfull";
    }
    else {
        std::cout << "Withdraw amount greater than bank balance";
    }
}

void get_amount(int &amount){
    std::cout << "Enter the amount for operation : ";
    std::cin >> amount;
}

