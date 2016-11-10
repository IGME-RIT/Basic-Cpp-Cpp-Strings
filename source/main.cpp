/*
C++ Strings
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/


// Now that you know how c strings work, let's upgrade to something better.
// C++ adds the power of objects, and with objects, we have an object to manage our character array for us.
#include <string>
#include <iostream>

int main()
{
    {
        // We can declare a string object just like any other object.
        std::string message;   // C++ strings default to an empty string.

        // They can be easily created from c style strings:
        char cString[] = "Hello";
        message = cString;

        // You can also get the internal c string that the class holds, but the data is read only.
        const char* secondCString = message.c_str();
        std::cout << secondCString << std::endl;


        // They can be more easily set like so:
        message = "Is this the Krusty Krab?";
        std::cout << message << std::endl;


        message = "No, this is Patrick.";   // You can even overwrite directly
        std::cout << message << std::endl;  // The string automatically resizes to fit the characters you put in it.
        std::cin.get();





        // Get the length of a string:
        std::cout << "message.length(): " << message.length() << std::endl;
        std::cin.get();





        // Strings allow you to access individual characters with [] as if it were an array:
        std::cout << "message[5]: " << message[5] << std::endl;

        //      Be careful though, it will still error if you index longer than the string:
        // char x = message[30];
    }
    std::cin.get();



    // Other convenient things we can do with the string class:
    {
        std::string test1 = "test";
        std::string test2 = "test";

        // The comparison operator can be used to compare two strings to see if they are the same:
        std::cout << "string compare: " << std::endl;
        if (test1 == test2)
        {
            std::cout << "test1 == test2" << std::endl;
        }


        std::cout << "concatenate:" << std::endl;
        // The addition operator concatenates strings:
        std::string test3 = test1 + test2;
        std::cout << test3 << std::endl;

        std::cin.get(); // wait for input.




        // Insert and Erase Characters:

        // Erase removes a subset of characters from the string.
        std::cout << "test1.erase(1, 1);" << std::endl;
        test1.erase(1, 1);                  // Takes an offset into the string, and a number of characters to remove.
        std::cout << test1 << std::endl;

        // Inset adds characters into a string with out removing anything.
        std::cout << "test1.insert(1, \"oa\");" << std::endl;
        test1.insert(1, "oa");              // Takes an offset into the string, and a string to insert.
        std::cout << test1 << std::endl;


        // Replace combines insertion and erasing into one function.
        std::cout << "test1.replace(0, 2, \"f\");" << std::endl;
        test1.replace(0, 2, "f");           // Takes an offset, a number of characters to replace, and a string to insert.
        std::cout << test1 << std::endl;
    }
    std::cin.get();




}