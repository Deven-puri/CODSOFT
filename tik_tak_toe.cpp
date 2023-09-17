#include <iostream>
using namespace std;

char space_arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'X';
bool draw = false;
string a1 = "";
string a2 = "";

    void functionone(){


     cout<<"     |          |     "<<endl;
     cout<<"     |          |     "<<endl;
  cout<<"   " <<space_arr[0][0]<<" |"<<"   " << space_arr[0][1]<<"      | "<<space_arr[0][2]<<"  \n";
     
      
      cout<<" ____|__________|_____"<<endl;
      cout<<"     |          |      "<<endl;
      cout<<"    " <<space_arr[1][0]<<"|"<<"   " << space_arr[1][1]<<"      | "<<space_arr[1][2]<<"  \n";
      cout<<"     |          |      "<<endl;
  cout<<"     |          |      "<<endl;
     cout<<" ____|__________|_____"<<endl;
     cout<<"     |          |      "<<endl;
     cout<<"    " <<space_arr[2][0]<<"|"<<"   " << space_arr[2][1]<<"      | "<<space_arr[2][2]<<"  \n";
     cout<<"     |          |      "<<endl;
      cout<<"     |          |      "<<endl;
      
}

void functiontwo() {
    int digit;
    cout << "Player " << ((token == 'X') ? a1 : a2) << ", please enter a position (1-9): ";
    cin >> digit;

    if (digit < 1 || digit > 9) {
        cout << "CAse is invalid" << endl;
        return;
    }

    row = (digit - 1) / 3;
    column = (digit - 1) % 3;

    if (space_arr[row][column] != 'X' && space_arr[row][column] != 'O') {
        space_arr[row][column] = token;
        token = (token == 'X') ? 'O' : 'X';
    } else {
        cout << "Please choose another position." << endl;
    }
}

bool functionthree() {
    for (int i = 0; i < 3; i++) {
        if (space_arr[i][0] == space_arr[i][1] && space_arr[i][0] == space_arr[i][2]) {
            return true; 
        }
        if (space_arr[0][i] == space_arr[1][i] && space_arr[0][i] == space_arr[2][i]) {
            return true; 
        }
    }

    if (space_arr[0][0] == space_arr[1][1] && space_arr[0][0] == space_arr[2][2]) {
        return true;  
    }

    if (space_arr[0][2] == space_arr[1][1] && space_arr[0][2] == space_arr[2][0]) {
        return true;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space_arr[i][j] != 'X' && space_arr[i][j] != 'O') {
                return false;  
            }
        }
    }

    draw = true; 
    return true;
}

int main() {
    cout << "Enter the name of the first player: ";
    getline(cin, a1);
    cout << "Enter the name of the second player: ";
    getline(cin, a2);
    cout << "Player " << a1 << " will play as 'X', and Player " << a2 << " will play as 'O'" << endl;

    while (!functionthree()) {
        functionone();
        functiontwo();
    }

    if (draw) {
        cout << "The game is a draw!" << endl;
    } else if (token == 'X') {
        cout << a2 << " wins the game!" << endl;
    } else {
        cout << a1 << " wins the game!" << endl;
    }

    return 0;
}

