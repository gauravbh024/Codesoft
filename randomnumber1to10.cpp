#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessTheNumber() {
    srand(time(0)); 
    int numberToGuess = rand() % 10 + 1; 
    int guess = 0;
    
    cout << "Welcome To The Number Guess Game! I Am Challenging You To Guess My Number Correctly Between 1 And 100." << endl;
    cout << "I Chalenge You Tu Guess It Right I Know You Can Not Do This LOL" << endl;
    
    while (guess != numberToGuess) {
        cout << "Tell Me What You Guessed: ";
        cin >> guess;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Why Entering Wrong Number ? Try Again Bro" << endl;
            continue;
        }
        
        if (guess < numberToGuess) {
            cout << "Nahh You Are Guessing Too Low" << endl;
        } else if (guess > numberToGuess) {
            cout << "Nahh You Are Guessing To High" << endl;
        } else {
            cout << "Congratulations! I Dont Belive That You Get It . You Guessed It Correct" << endl;
            cout<<"You Are The Best I Admit My Defeat , Thanks For Playing "<<endl;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
// i hope you like my code . i want to say thanks to you for the intership i would like to participate more intership like that . 
