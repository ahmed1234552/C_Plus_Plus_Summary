#include <iostream>
#include <string> //header file for string
#include <cmath>

using namespace std;

int main()
{
    cout << "Hello \t World! " << endl;
    cout <<"hi \n next line \n \n new line"<<endl;

    //bool char 1 byte int 4(maybe 2) byte float 4 byte double 8 byte
    int x = 5, y = 6, z = 50;
    x = y = z = 50;
    const int myNum = 15;  // myNum will always be 15
    // cin >> x;
    // cin>>name; ahmed fathy will be read as ahmed only"space is the end of input"
    //? getline(cin, name); ahmed fathy will be read as ahmed fathy

    char myGrade = 'A';//"a" error
    string myString = "Hello \"ahmed]\" hi \n";//'dffd' error
    //txt.length();=txt.size(); same//num of chars
    //string fullName = firstName.append(lastName);=firstName+lastName;
    //"d"+10 error

    //!= && || !
    max(5, 10);

    int time = 22;
    if (time < 10) 
    {
        cout << "Good morning."<<endl;
    } 
    else if (time < 20)   
    {
        cout << "Good day."<<endl;
    } 
    else 
    {
        cout << "Good evening."<<endl;
    }
    string result = (time < 18) ? "Good day." : "Good evening.";
    //ternary operator
    int day = 4;
    switch (day) 
    {
    case 1:
        cout << "Monday"<<endl;
        break;
    case 2:
        cout << "Tuesday"<<endl;//....
        break;
    default:
        cout << "Looking forward to the Weekend"<<endl;
    }


    int i = 0;
    while (i < 5) 
    {
        cout << i << "\t";
        i++;
    }
    i = 0;
    do //do while will run at least one time
    {
        cout << i << "\t";
        i++;
    } while (i < 5);

    //first expression is executed once"inside the {} so it's local variable to the loop. Then
    //The condition is checked before executing the inner code block.
    //last expression is executed at the end of each loop iteration.
    for (int i = (5>6) ? 1 : 0; i < 5; i++) 
    {
        if (i == 2) 
            continue;
        cout << i << "\t";
        if (i == 4) 
            break;
    }
    cout<<i<<endl;//5

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int k : myNumbers) {
    cout << k << "\t";
    }

    //int x = 5;
    //int x = 7; // error: x already defined

    string cars[4]={"Volvo", "BMW", "Ford", "Mazda"};
    string cars2[] = {"Volvo", "BMW", "Ford"};
   int myNumbers2[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers2)<<endl;//5*4(int)=20
    int getArrayLength = sizeof(myNumbers2) / sizeof(int);//5

    string letters[2][4] = //2*4 row * col
    {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    struct //struct is a user-defined data type that groups related variables of different types together.
    {
    string brand;
    int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";

    //or define struct and make variable from it
    struct myDataType { // This a Named Structure
    int myNum;
    string myString;
    };
    myDataType myObj;  // Create an object of "myDataType" named "myObj"

    int &ref = x; // reference variable use & y is same as x just another name but same memory"variable"
    cout << &x; // Outputs 0x6dfed4 memory address of x"hexadecimal"

    //References and Pointers make C++ better than python,java
    //c++ has oop but c doesn't

    //pointer:variable that stores the memory address as its value
    //points to a data of the same type of it use asterisk or dereference operator '*' to declare

    int* ptr = &x;    // ptr stores the address of x
    cout << ptr << "\n";  // 0x6dfed4
    //int* ptr = x; error

    cout << *ptr << "\n"; // value of x using dereference operator
    //'*' used to declare a pointer , and to dereference a pointer
    //chande in the "derefrence" pointer will change variable
    *ptr = 10;//change x to 10

    //!----------------------------//
    //*----------------------------//
    //?----------------------------//

    //Declaration: the return type, the name of the function, and parameters (if any)
    //Definition: the body of the function (code to be executed)    
    //declaration is in header file and definition is in cpp file
    //declaration before main and definition after main best practice
    //When a parameter is passed to the function, it is called an argument. So,for example fname is a parameter, while ahmed argument.

    // void myfun(int x,int &changeme,int arr[4],int y=4)
    // {
    //     cout<<x<<y<<endl;
    // }
    //Pass By Reference: change in function change the original variable
    //alias for the original variable
    //change in array change the original array

    //?Function Overloading
    //same name but different parameters"number or type"

    cout<<"finish"<<endl;
    return 0;//hi
    /*hi*/
}
