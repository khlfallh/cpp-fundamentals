#include <iostream>
using namespace std;

int main() {
    string door, box, room; // Variables to store user choices

    // Introduction to the game
    cout << "🏴‍☠️ Welcome to Treasure Island Adventure!\n";
    cout << "To reach the treasure, you must pass through several obstacles. Choose wisely, any wrong decision ends your journey 😈\n\n";

    // Step 1: First choice - Door selection
    cout << "🚪 You have three doors: Red 🔴, Yellow 🟡, Green 🟢. Choose one: ";
    cin >> door;

    // Check which door the player chose
    if (door == "Red" || door == "red") {
        // Step 2: Second choice - Box selection inside Red door
        cout << "\n🎉 Good choice! You have three boxes: Black ⚫, White ⚪, Gray ⚙️. Choose one: ";
        cin >> box;

        // Check which box the player chose
        if (box == "Gray" || box == "gray") {
            // Step 3: Third choice - Room selection inside Gray box
            cout << "\n🏠 Well done! You have three rooms: Blue 🔵, Orange 🟠, Purple 🟣. Choose one: ";
            cin >> room;

            // Determine the outcome based on room choice
            if (room == "Blue" || room == "blue") {
                cout << "\n💰 Congratulations! You found the treasure 🪙\n"; // Winning scenario
            }
            else if (room == "Orange" || room == "orange") {
                cout << "\n☠️ Sorry, you entered a room full of poison gas. Game over!\n"; // Losing scenario
            }
            else if (room == "Purple" || room == "purple") {
                cout << "\n🚿 You entered a pump room and got trapped. Game over!\n"; // Losing scenario
            }
            else {
                cout << "\n❌ Wrong input, please choose one of the available colors.\n"; // Invalid input
            }

        }
        else if (box == "Black" || box == "black") {
            cout << "\n🕳️ You went into the dark robe. Game over!\n"; // Losing scenario
        }
        else if (box == "White" || box == "white") {
            cout << "\n🌫️ You entered the Infinity Fog and got lost. Game over!\n"; // Losing scenario
        }
        else {
            cout << "\n❌ Wrong input, please choose one of the available colors.\n"; // Invalid input
        }

    }
    else if (door == "Yellow" || door == "yellow") {
        cout << "\n💣 You opened the bomb door. Game over!\n"; // Losing scenario
    }
    else if (door == "Green" || door == "green") {
        cout << "\n🐍 You opened the snake door. Game over!\n"; // Losing scenario
    }
    else {
        cout << "\n❌ Wrong input, please choose one of the available colors.\n"; // Invalid input
    }

    // Ending message
    cout << "\n🎮 Thank you for playing Treasure Island! Try again to find the treasure! 🏝️\n";

    return 0;
}
