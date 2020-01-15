#include <iostream>
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

int main()
{
    try {
        mightGoWrong();
    } catch (int e) {
        cout << "Err " << e << endl;
    } catch (char const* e) {
        cout << "Errr" << e << endl;
    } catch (string e) {
        cout << "Err" << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}