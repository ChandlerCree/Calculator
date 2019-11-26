//cpp file for the calculator application

#include "Calculator.h"

// sets default values for value1 and value2
template <class T>
Calculator<T>::Calculator()
{
  value1 = T();
  value2 = T();
}

// contructor function to set values
template <class T>
Calculator<T>::Calculator(T v1, T v2)
{
	value1 = v1;
	value2 = v2;
}

//function to return the value of value1
template <class T>
T Calculator<T>::getValue1()
{
	return value1;
}

//function to return the value of value2
template <class T>
T Calculator<T>::getValue2()
{
	return value2;
}

//gets the sum of the two values value1 and value2
template <class T>
T Calculator<T>::getSum()
{
	T sum = value1 + value2;
	return sum;
}

//uses the logical operator && to apply AND logical to the two values
template <class T>
int Calculator<T>::getLogicalAND()
{
	// uses logical operator '&&'
  return value1 && value2;  // boolean return value
}

//checks to see if the value1 is greater than value2
template <class T>
bool Calculator<T>::isGreater()
{
	return (value1 > value2);  //returns a bool value
}
