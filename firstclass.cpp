#include <iostream>

using namespace std;
//struct std 
class Calc
{
    int a, b, c;

    public: 
    //getter 
    int getA(){
        return a;
    }
    //setter 
    void setA(int x){
        a=x;
    }
    void getData()
    {

        cout << "Enter two numbers";
        cin >> a;
        cin >> b;
    }
    void add()
    {
        c = a + b;
        cout << endl
             << a << " + " << b << " = " << c;
    }
    void sub()
    {
        c = a - b;
        cout << endl
             << a << " - " << b << " = " << c;
    }
    void mul()
    {
        c = a * b;
        cout << endl
             << a << " * " << b << " = " << c;
    }



};

int main()
{
    //create object 
    Calc obj;

    obj.getData();
    
    //cout<<obj.a; //a private and private property can not access outside class 
    //if you want to access private property you can mark as public 
    //or access that property using public function 
    cout<<obj.getA();//a
    
   // obj.a = 12; //private 
    obj.setA(9);



    
    int choice; 
    
    cout<<"\n1 For Add\n2 For Sub\n3 For Mul\nEnter choice";
    cin>>choice; 

    switch (choice)
    {
    case 1:
        obj.add();
        break;
    case 2:
        obj.sub();
        break;
    case 3:
        obj.mul();
        break;
    
    default:
        cout<<"\nInvalid Choice";
        break;
    }

    return 0;
}