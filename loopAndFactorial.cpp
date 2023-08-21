#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 24; i++) {
        cout << "\n Hello, i is " << i << endl;
    }

    // The factorial of a number
    // 6! = 1*2*3*4*5*6 = 720

    int number;
    cout << "Number: ";
    cin >> number; //3
    // factorail
    int factorial = 1;

    for (int i = 1; i <= number;i++){
        factorial = factorial * i;
    }

        system ("pause>0");

        //6!=6*5*4*3*2*! =720
        for (int i = number; i >= 1; i--){
            factorial = factorial * i;
        }
          return 0;
    }

