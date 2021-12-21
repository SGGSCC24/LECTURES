#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int d123 = 123;
    float f123 = 1.23;
    char chA = 'A';

    //SET WIDTH MANIPULATOR
    cout << "DEMONSTRATE SET WIDTH MANIPULATOR:\n\n";
    cout << "0...0....1....1\n";
    cout << "0...5....0....5\n";
    cout << d123 << f123 << chA << "\t| No width\n";

    cout << setw(1) << d123                 //to use setw, it is necessary to include iomanip
         << setw(1) << f123
         << setw(1) << chA
         << "\t| width too small\n";

    cout << setw(5)<<d123
         << setw(5)<<f123
         << setw(5)<<chA
         << "\t| widht 5 space each\n";

    cout << setw(10) << "Hello"
         <<"\t| string width 10\n";

    cout << setw(3) << "Hello"
         << "\t\t| string width 3\n";


    //SET FILL MANIPULATOR
    cout << "\n\nDEMONSTRATE SET FILL MANIPULATOR:\n\n";
    float amount = 123.45;

    cout << setw(10) << amount
         <<"\tAmount with space fill\n";
    
    cout << setw(10) << setfill('*') << amount
         << "\tAmount with check protection fill\n";

    cout << setw(10) << amount
        // Since we are again getting asterisks, scope of setfill() is permanent.
         << "\tAmount with check protection fill again since it's not changed back to space\n"; 
    
    cout << setw(10) << setfill(' ') << amount
         << "\tAmount with space fill back again\n";


    //INTEGER MANIPULATORS
    cout << "\n\nDEMONSTRATE INTEGER MANIPULATORS:\n\n";
    int number = 123;
    float fnumber = 123.45;

    cout << "Value in decimal:\t" << number << endl;

    cout << "Value in octal:\t\t" << oct<< number << endl;
    cout << "Value again in octal:\t" << number << endl;                  // Shows that scope of integer manipulators is "permanant".

    cout << "Value in hexadecimal:\t" << hex << number << endl;
    cout << "Value in hexadecimal:\t" << hex << fnumber << endl;             // No change since works only with integers.

    cout << "Value back in decimal:\t" << dec << number << endl;


    //FLOAT MANIPULATORS
    cout << "\n\nDEMONSTRATE FLOAT MANIPULATORS:\n\n";

    float f1 = 1.0;
    float f123456789 = 1234567.876;

    /*
    fixed   - Shows floating point number in fixed-point format.
            - Scope is permanant
    */
    cout << "Value in floating-point:\t" << f123456789;                   //Gets displayed in floating-point format.
    cout << endl << "Value in floating-point:\t" << fixed << f123456789;      //Gets displayed in fixed-point format.
    cout << endl << "Value in back in fixed-point:\t" << scientific << f123456789; //Displays fixed point number in scientific notation again.
    
    /*
    setprecision    - Used to control the number of decimal places to be displayed.
                    - By default, C++ uses upto 6 decimal places.
                    - No effect if fixed manipulator is not used prior to it.
                    - Scope is permanant
    */
    cout << fixed;
    cout << endl << "Precision set to 3:\t" << setprecision(3) << 1234567.876; 
    cout << endl << "Precision set to 2:\t" << setprecision(2) << 1234567.876;
    cout << endl << "Precision set to 3:\t" << scientific << setprecision(3) << 1234567.876 << "\tBut doesn't works since in scientific notation";

    /*
    showpoint   - When we print a float number with no value after the decimal, it is printed by default as an integer.
                - To display it with a decimal point, use showpoint.
    */
    cout << fixed
         << setprecision(0)
         << "\nWithout showpoint:\t"
         << f1;
        
    cout << fixed
         << setprecision(0)
         << "\nWith showpoint:\t\t"
         << showpoint
         << f1;


    //UNDERSTANDING ESCAPE SEQUENCES
    cout << "\n\n\nDEMONSTRATE ESCAPE SEQUENCES:\n";
    cout << endl << "Vanishes\rRemains";
    /*
    Output: Remainss
    since '\r' carriage return overrides the previous written statement.
    Hence when 'Vanishes' is overridden a 's' is left with 'Remains' therefore
    the output is 'Remainss'
    */
    cout << endl << "This is the bell character \a";                    // A small bell sound is played.
    cout << endl << "A Null character \0 (kills rest of the line.)";    // Part following \0 is not displayed
    cout << endl << "This is the \\ escape character";                  // Escape the actual meaning of following character.

    return 0;
}
