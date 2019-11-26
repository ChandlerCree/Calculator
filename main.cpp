// cpp file for CalcMain calculator application
#include <iostream>
#include "Calculator.h"
#include "Calculator.cpp"  //included because using template format
using namespace std;

class Arithmetic
{
private:
	int intData;
	float floatData;
	double doubleData;
  template<typename T2>
	void printOperations(T2 obj);
public:
	Arithmetic();
	Arithmetic(int i, float f, double d);
	void intOperations(Arithmetic obj);
	void floatOperations(Arithmetic obj);
	void doubleOperations(Arithmetic obj);
};

//usaage of typename function template T2
template<typename T2>
void Arithmetic:: printOperations(T2 obj)
{
  //use of string to relate boolean value of isGreater function to a string
  string yesOrNo = "";
  if (obj.isGreater())
  {
    yesOrNo = "true";
  }
  else 
  {
    yesOrNo = "false";
  }
  cout<< obj.getValue1() << " + " << obj.getValue2() << " = " << obj.getSum() << endl;  // outputs result of getSum
  cout<< obj.getValue1() << " && " << obj.getValue2() << " = " << obj.getLogicalAND() << endl;  // outputs result of getLogicalAND
  cout<< obj.getValue1() << " > " << obj.getValue2() << " = " << yesOrNo << endl;  // outputs result of isGreater
}

//initializes values for arithmatic class private values
Arithmetic::Arithmetic()
{
	intData = 0;
	floatData = 0;
	doubleData = 0;
}

//sets the values in the private to passed in values
Arithmetic::Arithmetic(int i, float f, double d)
{
	intData = i;
	floatData = f;
	doubleData = d;
}

//creates an int version of the calculator object and then prints the results for it
void Arithmetic::intOperations(Arithmetic obj)
{
	Calculator<int> objNew(intData, obj.intData);
  printOperations(objNew);
}

//creates an float version of the calculator object and then prints the results for it
void Arithmetic::floatOperations(Arithmetic obj)
{
	Calculator<float> objNew(floatData, obj.floatData);
  printOperations(objNew);
}

//creates an double version of the calculator object and then prints the results for it
void Arithmetic::doubleOperations(Arithmetic obj)
{
	Calculator<double> objNew(doubleData, obj.doubleData);
  printOperations(objNew);
}

//main function to be ran upon execution
int main()
{
	// Create 1st object
	int int1 = 4;
	float f1 = 10.4;
	double d1 = 20.1;
	Arithmetic object1(int1, f1, d1);
	
	// Create 2nd object
	int int2 = 7;
	float f2 = 0.0;
	double d2 = 3.5;
	Arithmetic object2(int2, f2, d2);
	
	// Check operation on integer data type
	cout << "\nPrinting INTEGER operations..." << endl;
	object1.intOperations(object2);
	
	// Check operation on float data type
	cout << "\nPrinting FLOAT operations..." << endl;
	object1.floatOperations(object2);
	
	// Check operation on double data type
	cout << "\nPrinting DOUBLE operations..." << endl;
	object1.doubleOperations(object2);
} // end main 
