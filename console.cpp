
#include"console.h"
#include<iostream>
//#include<cstring>
#include<string.h>

using namespace std;

void Console::sendData(char dat){
	char * d = &dat;
	data = strncat(data, d, 1); 
}

void Console::printData(){
	char * d = data;
	for( int i = 0; i<(strlen(d)); ++i){
		printf("%c", data[i]); 	
		Console::sendData("hello");
	}
}

