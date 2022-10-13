#include <iostream>
#include "Files/Files.h"
#include "String/StringAPI.h"

#include "CompileItself/CompileItself.h"

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++)
    {
    	std::string commandLine = argv[i];
        if (commandLine == "--compile-itself")
        {
        	CompileItself::Compile();
        }
    }

    if(argc < 2)
    {
    	std::string input = "";

    	std::cout << "Welcome to Pickaxe v0.1!" << std::endl;
    	std::cout << ">> ";
    	std::cin >> input;
   	}

	return 0;
}