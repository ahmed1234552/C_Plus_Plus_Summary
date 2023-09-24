#include <iostream>
#include <string>
using namespace std;

//Procedural programming is about writing procedures or functions
// that perform operations on the data, while object-oriented programming 
//is about creating objects that contain both data and functions.

//class is a template for objects, and an object is an instance of a class.
//attributes"vars" and methods"funs" all class members

class MyClass //start with capital letter
{  
  int Salary; //private by default

  public:             // Access specifier //members accessible from outside class

    int myNum;        // Attribute (int variable)
    
    MyClass(int num)//constructor 'optional' called when object created
    {        //always public and no return type or value
        myNum=num;
        myNum2=0;
    } 
    
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
    
    void set_salary(int num) //setter
    {
        Salary=num;
    }
    int get_salary() //getter
    {
        return Salary;
    }


    void myMethod2(int x);// Method/function declaration inside but definition outside

  private:

    int myNum2; //accessed only from within same class

}; //semicolon


// Method/function definition outside the class
void MyClass::myMethod2(int x)  //use calss_name::fun_name
{
    cout << "Hello World!";
}

/*
?incapsulation: make sure that "sensitive" data is hidden
? from users. To achieve this, you must declare class
? variables/attributes as private (cannot be accessed
? from outside the class). If you want others to read
? or modify the value of a private member,
? you can provide public get and set methods.
*better control of your data,security
*/

//!Access Specifiers
//public - members are accessible from outside the class
//private - members cannot be accessed (or viewed) from outside the class
//protected - members cannot be accessed from outside the class
//however, they can be accessed in inherited classes. You will learn more about Inheritance later.

//*default, all members of a class are private



//!-------Inheritence-------------//
/*
code reusability
derived class (child),base class (parent)
?Multilevel Inheritance:
  GrandChild is derived from Child class, which is derived from Parent class
  GrandChild can access both Parent and Child members, but Parent and Child cannot access GrandChild members aked
?Multiple Inheritance
  class can inherit from more than one base class use ','
  class MyChildClass: public MyClass, public MyOtherClass {};
  if two base classes have same member name, use scope resolution operator (::) to distinguish between them
  like this in class child: Parent1::myMethod(); or Parent2::myMethod();
  or in main child_obj.Parent1::myMethod();
  or u get compilation error: request for member ‘myFunction’ is ambiguous
  *"diamond problem" in multiple inheritance
*/


//!-------Polymorphism-------------//
/*
code reusability
Polymorphism uses the the inherited methods to perform different tasks.
This allows us to perform a single action in different ways.
base class animal with method animal_sound(),
derived classes:dog, cat each implement "override" animal_sound() differently
so if animal object calls animal_sound() it will execute the animal method
but if dog object calls animal_sound() it will execute the dog method
"it ignores the parent method"
*/







class Vehicle {  // Base class
  public:
    string brand = "benz";        // Public attribute
    void honk() {                 // Public method
      cout << "Tuut, tuut! \n" ;
    }
};

class Car: public Vehicle  // Derived class inherits public and protected members from base class
{
  public:
    string model = "Z-30";    // Public attribute
};










int main()
{

 MyClass myObj(5);  // Create an object of MyClass
 //*MyClass myObj;  // delete () if no constructor or cons. with no args

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myMethod();  // Call the method
  myObj.set_salary(1000);

  return 0;
}
