#include <iostream>
using namespace std;
class ComplexNumber
{
    int real,imaginary;
    public:
        ComplexNumber()
        {
            real=imaginary=0;
        }
        ComplexNumber(int r,int i)
        {
            real=r;
            imaginary=i;
        }
        void display();
        void operator --(int)
        {
            real--;
            imaginary--;
        }
        ComplexNumber operator + (ComplexNumber c1)
        {
            ComplexNumber temp(0,0);
            temp.real=real+c1.real;
            temp.imaginary=imaginary+c1.imaginary;
            return temp;
        }
        ComplexNumber operator - (ComplexNumber c2)
        {
            ComplexNumber temp(0,0);
            temp.real=real-c2.real;
            temp.imaginary=imaginary-c2.imaginary;
            return temp;
        }
        ComplexNumber operator * (ComplexNumber c3)
        {
            ComplexNumber temp(0,0);
            temp.real=real*c3.real;
            temp.imaginary=real*c3.imaginary;
            return temp;
        }
       

};
void ComplexNumber::display()
{
    cout<<"Number :"<<real;
    cout<<" + "<<imaginary<<"i"<<endl;
}
int main()
{
    int r1,r2,i1,i2;
    cout<<"Enter first real and imaginary number :";
    cin>>r1>>i1;
    cout<<"Enter second real and imaginary number :";
    cin>>r2>>i2;
    ComplexNumber c1(r1,i1),c2(r2,i2),c3;
    c3=c1+c2;
    cout<<"Addition of two Complex Numbers :";
    c3.display();
    c3=c1-c2;
    cout<<"Subtraction of two Complex Numbers :";
    c3.display();
    cout<<"Postfix :";
    c1--;
    c1.display();
}