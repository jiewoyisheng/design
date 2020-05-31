#ifndef _SINGLETON_L_H
#define _SINGLETON_L_H

#include<iostream>
#include<mutex>
#include<string>

namespace desgin
{
template<typename T>
class Singleton
{
public:
	static T* instance();
private:
    static T* p;
	static std::mutex _mutex;
};

template<typename T>
T* Singleton<T>::p = NULL;
template<typename T>
std::mutex Singleton<T>::_mutex;

template<typename T>
T* Singleton<T>::instance()
{
	if(p == NULL)
	{
		_mutex.lock();
		if(p == NULL)
		{
			p = new T();
		}
		_mutex.unlock();
	}
	return p;
}

}

#endif //_SINGLETON_L_H
