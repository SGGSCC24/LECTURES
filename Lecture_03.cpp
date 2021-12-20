#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";                                //This line displays a message "Hello World" onto the screen 
    cout<<"This is a C++ class.";                       //This line displays another message onto the screen

    /* This is a comment that 
       covers two lines. */              //Can span multible lines using '/*'

    /*
    ** It is a very common style to put the opening token
    ** on a line by itself, followed by the documentation 
    ** and then the closing token on a separate line. Some 
    ** programmers also like to put asterisks at the beginning
    ** of each line to clearly mark the comment.
    */
    
    //end of example of comments
    
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

         // String Constants
    cout<<"";                   //Empty String
    cout<<"h";                  //Single length string
    cout<<"Hello World\n";      //String followed by new line
    cout<<"'Good' Morning";     //'Good' Morning
    cout<<"\"Good\" Morning";   //"Good" Morning
        return 0;
}
