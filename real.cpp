 #include<iostream>
 using namespace std;
 class complex:
  {
    private:
    float real,imag;
    public:
    complex(float r=0,float i=0)
    {
        real=r;
        imag=i;
    }
complex add(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag +c.imag;
    return temp;
}
void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
 };
 int main()
 {
complex c1(3,2),c2(1,7),c3;
    c3
    
    =c2.add(c1);
    cout<<"1st C.N:";
    c2.display();
    cout<<"sum:";
    c3.display();

 }


 