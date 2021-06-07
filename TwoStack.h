#include <iostream>

using namespace std;

template <typename T>
class StackArr
{
public:
    StackArr(char *buf,unsigned int size);
    void pushStack1(const T& data);
    void pushStack2(const T& data);
    T popStack1();
    T popStack2();
    unsigned int stack1Size();
    unsigned int stack2Size();
    bool isStackFull();
    bool isStack1Empty();
    bool isStack2Empty();

private:
    unsigned int topStack1;
    unsigned int topStack2;
    unsigned int baseStack1;
    unsigned int baseStack2;
    char * buffer;
    unsigned int capacity;
};

