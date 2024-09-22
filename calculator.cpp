#include <iostream>
using namespace std;

void Calculator() {

    float ex = 0;
    float ex2 = 0;

    cout << "Enter two numbers \n";

    cin >> ex >> ex2;

    char choice = '0';

    cout << "Which operation do you want to perform?\n";

    cin >> choice;

    if (choice == '+') {

        cout << ex + ex2;

    }

    else if (choice == '-') {

        cout << ex - ex2;


    }

    else if (choice == '*') {

        cout << ex * ex2;

    }

    else if (choice == '/') {

        if (ex2 > 0) {

            cout << ex / ex2;


        }

        else {

            cout << "Error, Please enter a number greater than 0.\n";

        }



    }

    else {

        cout << "Error.\n";
        cout << "For multiplication *\n";
        cout << "For divide /\n";
        cout << "For add + \n";
        cout << "For subtract - \n";
    }

}

int main()
{
    

    char choice='y';

    
    
    

    while (choice == 'y') {

        Calculator();
        cout << "\n";
        cout << "Whould You Like To Use The Calculator Again? \n";
        cout << "(y/n) \n";
        cin>> choice;

    }
}
