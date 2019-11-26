//header for calculator application

#ifndef CALCULATOR_H
#define CALCULATOR_H

template <class T>
class Calculator
{
private:
	T value1;
	T value2;
public:
	Calculator();  //initializes values to default values
	Calculator(T value1, T value2);  // sets values
	T getValue1();  //returns value1
	T getValue2();  //returns value2
	T getSum();     //adds the two values 
	int getLogicalAND();  // And of the two values
	bool isGreater();  //applies principle of ">" to two values
};

#endif
