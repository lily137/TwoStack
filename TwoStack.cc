#include "TwoStack.h"

template <typename T> 
StackArr<T>::StackArr(char *buf,unsigned int size):buffer(buf),capacity(size),topStack1(0),baseStack1(0),topStack2(size),baseStack2(size)
{
    
}

template <typename T>
void StackArr<T>::pushStack1(const T& data)
{
    //handle full
    if(isStackFull())
        return;
    
    *(T *)(buffer+topStack1) = data;
    topStack1+=sizeof(T);
}

template <typename T>
T StackArr<T>::popStack1()
{
    //handle empty
    if(isStack1Empty())
        return NULL;
        
    topStack1-=sizeof(T);
    return *(T *)(buffer+topStack1);
}

template <typename T>
void StackArr<T>::pushStack2(const T& data)
{
    //handle full
    if(isStackFull())
        return;
    topStack2-=sizeof(T);
	*(T *)(buffer+topStack2)= data;
    
}

template <typename T>
T StackArr<T>::popStack2()
{
    //handle empty
    if(isStack2Empty())
        return NULL;
    
	T tmp;
	tmp = *(T *)(buffer+topStack2);
    topStack2+=sizeof(T);
    return tmp;
}

template <typename T>
bool StackArr<T>::isStackFull()
{
    if(topStack1>= topStack2)
        return true;
    
    return false;
}

template <typename T>
bool StackArr<T>::isStack1Empty()
{
    if(topStack1 <= baseStack1)
        return true;
    
    return false;
}

template <typename T>
bool StackArr<T>::isStack2Empty()
{
    if(topStack2 >=  baseStack2)
        return true;
    
    return false;
}

template class StackArr<char>;
