#include <iostream>
using namespace std;

// Operator in C++ ---->> + , - , * , / , % 
// % called remainder operator or modulo

int main(){
// arithmatic operator in c++

cout<<"Arithmatic operator"<<endl;
            int a=45, b=55;
            int d=55, e=50;
            int f=55, g=5;
            int h=45, j=9;
            int i=33, o=22;
            
            cout<<" a+b ="<<(a+b)<<endl; //------> Sum
            cout<<" a-b ="<<(d-e)<<endl; //------> Difference
            cout<<" f*g ="<<(f*g)<<endl; //------> product
            cout<<" h/j ="<<(h/j)<<endl; //------> division/quotient
            cout<<" i%o ="<<(i%o)<<endl; //------> Modulo 

// Relational operator in c++ -->  <,>,<=,>=,==,!=
            cout<<"Relational operator"<<endl;
            cout<< (3 < 4) << endl;  //----> less than     
            cout<< (3 > 4) << endl;  //----> greater than
            cout<< (3 <= 4) << endl; //----> less than and equal to   
            cout<< (3 >= 4) << endl; //----> greater than and equal to  
            cout<< (3 == 4) << endl; //----> equal to  
            cout<< (3 != 4) << endl; //----> not equal to  

// Logical operator in c++  ----->  OR(||) , AND(&&) , NOT(!)
            cout<<"Lgical operator"<<endl;
            cout<<(!(3<1)) << endl;         //---> NOT         
            cout<< ((3<2) && (3<1)) <<endl; //---> AND
            cout<< ((3<1) || (3>6)) <<endl; //---> OR

return 0;
}