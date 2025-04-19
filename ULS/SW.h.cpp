#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <fstream>
#include <iostream>

struct SW{
	
	Serial::Serial(int id = 2);
	TurnOff(){
		int resp= Serial::Write(":INSTR:OFF");
		std::cout << "Turn off the switch";
		
	}
	
	TurnOn(){
		int resp= Serial::Write(":INSTR:ON");	
		std::cout << "Turn on the switch";
	}
	
};
