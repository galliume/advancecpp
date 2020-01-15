#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inFile ;
    //fstream inFile ;

    string file = "stats.txt";    
    inFile.open(file);
    
    if (!inFile.is_open()) {
        return 1;
    }
    
    while (inFile) {
        string line;

        getline(inFile, line, ':');        

        int population;
        inFile >> population;

        //inFile.get();
        inFile >> ws;
        
        if (!inFile) {
            break;
        }

        cout << line << " - " << population << endl;
    }
    
    inFile.close();

    return 0;
}