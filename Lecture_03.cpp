#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";                                //This line displays a message "Hello World" onto the screen 
    cout<<"This is a C++ class.";                       //This line displays another message onto the screen

    /* This is is a block
       This is another block comment inside comment */              //Can span multible lines using '/*'

    
    int a = 5;                                           //int is used to show that 'a' is an integer value
    int b = 6;

    cout<<a + b;                                        

    int x_yz$ = 5;                                       //we can use alphabets, _ and underscores as the name of the variables

    char c = 'A';

    short x = 5;
    long y= 6;
    short temp = -32768;

    cout<<endl<<temp;
    cout<<endl<<sizeof(long);       //This commands helps to show the size of the integer on your system because size is system dependent

    //cout<< a- b;

    int $xyz = 5;

    char var = 91;                    // code using ASCII 91 - [

    cout<<endl<<var;

    bool new_var = true;               //bool var type, will see the purpose of true and false in later lectures

    cout<<endl<<new_var;

    extern int s;                       //delay reservation of memory(out of syllabus). declaration and definition not happening together. declaration is name a whereas definition is reservation of memory.
    
    
        //end of lecture 3
    
    
        
cout<<'\n'<<sizeof(76542L);

        cout<<'\n'<<"Hello World\n";           //in new line, single qoute
    cout<<"This is a C++ class.";

        cout<<'\n'<<"'Good' Morning";          //'Good' Morning
        cout<<endl<<"\"Good\" Morning";        //escape sequence - escape the original meaning
        return 0;
}
