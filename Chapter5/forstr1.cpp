// forstr1.cpp -- using for with a string
#include <iostream>
#include <string>
int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reverse order
    for(int i = word.size(); i >= 0; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
    return 0;
}