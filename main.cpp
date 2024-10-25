#include <iostream>
#include <string>
#include <vector>
using namespace std;

// We should use linked list for the players
struct playerList{
    string name;
    int score;
    struct playerList* next;
}

// Adds a player to the leaderboard with an initial (ELO system)
void addPlayer(playerList*& list, string playerName) {
    struct playerList* player = new playerList();
    player->name = playerName;
    player->next = nullptr;
    player->score = 0;
    if (!list) { // If list is empty
        list = player; // Input player
    } else {
        struct playerList* temp = list;
        while (temp->next != nullptr) {   // Find tail of list by iterating
            temp = temp->next;
        }
        temp->next = player;  // Insert player at end of list
    }
    cout << "Player " << playerName << " has been added." << endl;
}

// No remove function needed 

// Simulates a game between two players and updates their record
void simulateMatches(){

}

// Updates the table by sorting through the players
void updateTable(){

}

// Displays the leaderboard
void display(){
    
}

int main(){
    int option;
    int players = 0;
    cout << "     Welcome to the new season!" << endl;
    cout << "Please select an option below: " << endl;
    
    while(option != 10){
        cout << "1. Add a player to the league." << endl;
        cout << "2. Remove a player from the league." << endl;
        cout << "3. Simulate a game between players." << endl;
        cout << "4. End the season." << endl;
        cout << "Option: " << endl;
        cin >> option;
        
        if(option = 1){
            if(players == 10){
                cout << "Maximum players in the league met." << endl;
            } else{
                players++;
                string name;
                cout << "Please enter the player's name: " << endl;
                getline(cin, name);
                addPlayer(name);
            }
        } else if (option = 2){
            if(players <= 1){
                cout << "There must be at least one player in the league." << endl;
            } else{
                players--;
                string name;
                cout << "Please enter the player's name: " << endl;
                getline(cin, name);
                removePlayer(name);
            }
        } else if (option = 3){
            if(players << 2){
                cout << "There must be at least two players in the league." << endl;
            } else{
                string name;
                cout << "Please enter the player's name: " << endl;
                getline(cin, name);
                removePlayer(name);
            }
        } else if (option = 4){
            cout << "Season ended, final standings below. " << endl;
            display();
            option =10;
        } else {
            cout << "Please enter a valid input." << endl;
        }
    }
}