#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //ofstream outFile;
    fstream outFile ;

    string file = "text.txt";
    //outFile.open(file);
    outFile.open(file, ios::out);
    
    if (outFile.is_open()) {
         outFile << "Written !" << endl;
         outFile << 123 << endl;
         outFile.close();
    } else {
        cout << "could not create file : " << file << endl;
    }

    return 0;
}