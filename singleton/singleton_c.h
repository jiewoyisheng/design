#ifndef _SINGLETON_H
#define _SINGLETON_H
#include<iostream>
#include<string>
#include<stdio.h>

namespace desgin
{

template<typename T>
class	Singleton
{
public:
	static T* instance();
	
private:
	static T* p;

};

template<typename T>
T* Singleton<T>::p = new T();

template<typename T>
T* Singleton<T>::instance()
{
	return p;
}

}

#endif //_SINGLETON_H
