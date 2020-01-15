#include <iostream>
#include <exception>

using namespace std;

void mightGoWrong() {
    bool error = false;
    bool error2 = true;

    if (error) {
        throw "Something went wrong";
    }

    if (error2) {
        throw string("New error");
    }
}

class CanGoWrong {
    public:
        CanGoWrong() {
            char *pMemory= new char[99999999999999999];
            delete[] pMemory;
        }
};

class MyException: public exception {
    public:
        virtual const char* what() const throw() {
            return "MyException !";
        }
};

class Test {
    public:
        void goesWrong() {
            throw MyException();
        }
        
};

int main()
{

    Test test;
    try {
        test.goesWrong();
    } catch (MyException &e) {
        cout << e.what() << endl;
    }

    try {
        CanGoWrong wrong;
    } catch (bad_alloc &e) {
        cout << "Caught " << e .what() << endl;
    }

    try {
        mightGoWrong();
    } catch (int e) {
        cout << "Err " << e << endl;
    } catch (char const* e) {
        cout << "Errr" << e << endl;
    } catch (string& e) {
        cout << "Err" << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}