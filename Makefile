#Makefile for Calculator Application

output: CalcMain.o Calculator.o
	g++ CalcMain.o Calculator.o -o output

CalcMain.o: CalcMain.cpp Calculator.h
	g++ -g -Wall -c CalcMain.cpp

Calculator.o: Calculator.cpp Calculator.h
	g++ -g -Wall -c Calculator.cpp

clean:
	rm CallMain.o Calculator.o output
 
