#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inFile ;
    //fstream inFile ;

    string file = "text.txt";    
    inFile.open(file);
    
    if (inFile.is_open()) {
         string line;
         
         //inFile >> line;
         //while (inFile) {
         while (!inFile.eof()) {
            getline(inFile, line);        
            cout << line << endl;
        }
         
        inFile.close();
    } else {
        cout << "could not read file : " << file << endl;
    }

    return 0;
}