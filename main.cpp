#include <iostream>
#include "caesar.cpp"
using namespace std;


int main() {
    // Call the function
    while (true) {
        TextCheckPoint:
        cout << "Hi! Please, enter the text you want to encrypt: ";
        char text[100];
        cin.getline(text, 100);
        if (strlen(text) == 0) {
            cout << "Something wrong. please, try again.\n";
            goto TextCheckPoint;
        }

        KeyCheckPoint:
        cout << "Please, enter the key: ";
        int key;
        cin >> key;
        cin.ignore();
        if (key < 0) {
            cout << "something wrong. please, try again.\n";
            goto KeyCheckPoint;
        }
        char encr[strlen(text)];
        encrypt(text, key, encr);
        cout << "Encrypted text: " << encr << endl;

        cout << "Do you want to decrypt the text? (y/n): ";
        char answer;
        cin >> answer;
        cin.ignore();

        if (answer == 'y'){
            char decr[strlen(text)];
            decrypt(encr, key, decr);
            cout << "Decrypted text: " << decr << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        char cont;
        cin >> cont;
        cin.ignore();

        if (cont == 'n'){
            return 0;
        }
    }
}
