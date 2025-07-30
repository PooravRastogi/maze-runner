#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);  

    map<string, int> wordFreq;
    stringstream ss(paragraph);
    string word;

    while (ss >> word) {
       
        while (!word.empty() && ispunct(word.back())) {
            word.pop_back();
        }
  
        while (!word.empty() && ispunct(word.front())) {
            word.erase(0, 1);
        }

        for (char &c : word)
            c = tolower(c);  

        if (!word.empty())
            wordFreq[word]++;
    }

    cout << "\nWord Frequencies:\n";
    for (const auto &entry : wordFreq) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
