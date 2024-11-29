#include <iostream>
#include <string>
using namespace std;
#include <ctime>
#include <cstdlib>  //inclide rand()
int main() {
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
string rps[] = {"rock" , "paper" , "scissors"};
// * srand = random seed value based on time
std::srand(static_cast<unsigned>(std::time(NULL))); // time_t, cast to unsigned int
while (true) {
    cout << "Enter rock, paper, or scissors: ";
    getline(cin,player);
    if(player != "rock"&& player!= "scissors" &&player!= "paper") break;

opponent = rps[std::rand() % 3]; // rand() generates random number, then do modulus 3 
// remainder after dividing 3 can be form 0 to 2, so we use this as the index number
 cout << "Opponent choose is " << opponent << endl;
 if (player == opponent) {
    playerScore++;
 opponentScore++;
}
else if (player == "rock") {
    if(opponent == "scissors") playerScore++;
    else if (opponent == "paper") opponentScore++;
}
else if (player == "paper") {
    if (opponent == "rock") playerScore++;
    else if (opponent == "scissors") opponentScore++;
}
else if (player == "scissors") {
    if(opponent == "paper") playerScore++;
    else if (opponent == "rock") opponentScore++;
}

cout << "player: " << playerScore << " Opponent: " << opponentScore << endl;
    // return 0

};

}