#ifndef CONSOLE_H
#define CONSOLE_H

//#include<stdio.h>
#include<iostream>
#include<stdint.h>
#include<string>

using namespace std; 

class Console{

	private:
		char * data; 
	public:
		void sendData(char d); 
		void printData(); 
};

#endif
