#include <iostream>
#include <string>
#include <vector>
using namespace std;

// We should use linked list

// Adds a player to the leaderboard with an initial 0-0 record
void addPlayer(string name){

}

// Removes a player from the league
void removePlayer(playerList*& head, int val) {
    if (head == nullptr) {  // If given list is empty, print error and leave function
        cout << "List of players is empty." << endl;
        return;
    }
    if (head->num == val) {  // If trying to cancel first player, remove it and return
        playerList* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    // Find the previous node of the node to be deleted
    seatList* current = head;
    while (current->next != nullptr && current->next->num != val) {
        current = current->next;
    }
    if (current->next == nullptr) {
        cout << "That spot is not occupied." << endl;
        return;
    }
    // Remove item after current and change pointers
    seatList* temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Player " << val << " has been canceled.";
}

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