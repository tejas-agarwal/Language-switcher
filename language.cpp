#include <iostream>
using namespace std;

int main()
{
    char answer;
    cout << "A for English" << endl;
    cout << "B for Hindi" << endl;
    cout << "C for Japanese" << endl;
    cout << "D for Arab" << endl;
    cout << "G for Spainish" << endl;
    cout << "Enter a answer: ";
    cin >> answer;
    switch (answer)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Konichiwa" << endl;
        break;
    case 'd':
        cout << "Hola" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;

    default:
        cout << "I am still learning" << endl;
        break;
    }
    return 0;
}