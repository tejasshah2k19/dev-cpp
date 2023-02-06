#include <iostream>

// name
// maths sci eng
// percentage

class Student
{
    // by default private
    std::string name_;
    int maths_;
    int sci_;
    int eng_;

public:
    // constructor
    // its a special function - which name must same as class name
    // it is used to initialize your instance / class variable
    // it will automatically call when u create instance/object
    // there are three types of constructor we have
    // default constructor -- no argument constructor
    Student()
    {
        maths_ = 0;
        sci_ = 0;
        eng_ = 0;
    }
    // parameterized constructor - argument constructor
    Student(std::string n, int m, int s, int e)
    {
        name_ = n;
        maths_ = m;
        sci_ = s;
        eng_ = e;
    }

    // input
    void getData()
    {
        std::cout << "\nEnter name : ";
        std::cin >> name_;

        std::cout << "\nEnter Marks of Maths : ";
        std::cin >> maths_;

        std::cout << "\nEnter Marks of Science : ";
        std::cin >> sci_;

        std::cout << "\nEnter Marks of English : ";
        std::cin >> eng_;
    }
    // output
    void printData()
    {
        std::cout << "\nName : " << name_;
        std::cout << "\nMaths : " << maths_;
        std::cout << "\nSci : " << sci_;
        std::cout << "\nEng : " << eng_;
    }

    // getter function  -- return value
    std::string getName()
    {
        return name_;
    }
    int getMaths()
    {
        return maths_;
    }
    // setter function -- set value
    void setMaths(int m)
    {
        maths_ = m;
    }
    // private -> getter and setter
};

int main()
{

    Student s1,s3("Dev",99,69,89); // object : 4 + 2
    Student s2 = Student("Raj", 69, 79, 89);

    //   s1.getData();
    // s2.getData();

    std::cout << "\nContent\n";
    s1.printData();
    s2.printData();
    s3.printData();

    // std::cout<<"\nName => "<<s1.getName();
    // std::cout<<"\nMaths => "<<s1.getMaths();
    // s1.setMaths(99);
    // std::cout<<"\nMaths => "<<s1.getMaths();

    return 0;
}