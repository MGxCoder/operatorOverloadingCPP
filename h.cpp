#include<iostream>
using namespace std;

class complex{
   int real,img;
   public:
        void getdata(){
            cout<<"\nreal & img\n";
            cin>>real>>img;

        }
        void display(){
            cout<<"\n" <<real<<"+"<<img<<"i";
        }
        complex  operator +(complex c){
            complex c3;
            c3.real=real+c.real;
            c3.img=img+c.img;
            return c3;
        };
        complex operator -(complex c){
            complex c4;
            c4.real=real-c.real;
            c4.img=img-c.img;
            return c4;
        }
};
int main(){
    complex c,c2,c3,c4;
    c.getdata();
   
    c2.getdata();
     c.display();
    c2.display();
    c3= c +c2;
    c3.display();
      c4= c -c2;
    c4.display();
    return 0;
    
}