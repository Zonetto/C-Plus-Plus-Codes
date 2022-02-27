#include <iostream>
using namespace std;
char Matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char Player = 'X';

void Check (char pos){
    char pos;
    cin >> pos;
    if  (pos != '1' || pos != '1' || pos != '2' || pos != '3' || pos != '4' || pos != '5' || pos != '6' || pos != '7' || pos != '8' || pos != '9')
        cout << "pleca enter numper true\n";
    return 0;

    else{
        cout << "Choose Your position - player ( " << Player << " ) : \n";
        play(pos);
        }
}
void printMatrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << Matrix[i][j] << " ";
        cout << endl;
    }
}
void play(int pos) {
    // char pos;
    // cout << "Choose Your position - player ( " << Player << " ) : ";
    cin >> pos;
    // if (pos != '1' || pos != '1' || pos != '2' || pos != '3' || pos != '4' || pos != '5' || pos != '6' || pos != '7' || pos != '8' || pos != '9')
    //     cout << "pleca enter numper true\n";
    // else {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                if (Matrix[i][j] == pos)
                    Matrix[i][j] = Player;
            }
        if (Player == 'X')
            Player = 'O';
        else
            Player = 'X';
    }
char Who() {
    int Xc = 0, Oc = 0, check = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Matrix[i][j] != 'X' && Matrix[i][j] != 'O') check++;
            if (Matrix[i][j] == 'X')
                Xc++;
            else if (Matrix[i][j] == 'O')
                Oc++;
            if (Xc == 3 || Oc == 3) {
                return Xc > Oc ? 'X' : 'O';
            }
        }
        Xc = 0;
        Oc = 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Matrix[j][i] == 'X')
                Xc++;
            else if (Matrix[j][i] == 'O')
                Oc++;
            if (Xc == 3 || Oc == 3) {
                return Xc > Oc ? 'X' : 'O';
            }
        }
        Xc = 0;
        Oc = 0;
    }
    
    if (Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X')
        return 'X';
    else if (Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O')
        return 'O';
    else if (Matrix[0][2] == 'X' && Matrix[1][1] == 'X' && Matrix[2][0] == 'X')
        return 'X';
    else if (Matrix[0][2] == 'O' && Matrix[1][1] == 'O' && Matrix[2][0] == 'O')
        return 'O';
    if (check == 0)
        return 'Z';
    return '-';
}

int main() {
    while (Who() == '-') {
        Check();
        printMatrix();
        play();
    }
    printMatrix();
    if (Who() != 'Z')
        cout << "Winer Player !!\n";
    else
        cout << "N\\\\Winer Player !!\n";
}