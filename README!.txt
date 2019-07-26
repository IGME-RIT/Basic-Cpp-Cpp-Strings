Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the CPP Strings Tutorial!
Prerequesites: C Strings

This tutorial will introduce a C++ data type
called std::string, which is the default method
of handling text in C++. std::string has many features
that C strings do not, like the ability to quickly reverse
the string, or cast the string to data. C strings and 
CPP strings can easily be casted to each other:

// make a CPP string
std::string abc = "Sup";

// convert CPP string to C string
const char* text = abc.c_str();

// convert C string to CPP string
std::string abc2 = text;
