#include <iostream>
using namespace std;


int main() {
  // int a = 4;
  // int b =4;

  // cout << a << endl;
  // cout << &a << endl;
  // cout << b << endl;

  
  // // std::cout << "Hello World!\n";
  int a =5;
  int * ptr = &a;
  // // ptr is pointer to a
  // cout << *ptr << endl;
  // derefernce operator
  // cout << "address of a is " << &a << endl;
  // cout << "value stored at ptr : " << ptr << endl;
  // cout << *ptr << endl;
  cout << sizeof(ptr) << endl;
  char c ='ab';
  char *ch =&c;
  cout << sizeof(ch) << endl;
  // whenever you print size of pointer it will be 8, it does not depend on data type.
  // it depends of compiler architecture;
  
  
}