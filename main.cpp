#include "TwoStack.h"

int main()
{
    char buffer[256];
    StackArr<char> stack(buffer,sizeof(buffer));
    
   stack.pushStack1('a');
  //  stack.pushStack1('b');
  //  stack.pushStack2('x');
   // stack.pushStack2('y');
    
    
    cout<<stack.popStack1()<<endl;
    cout << stack.popStack1()<<endl;
    cout<<stack.popStack2()<<endl;
    cout<<stack.popStack2()<<endl;
}
