#include <iostream>
#include "easystring"

using namespace std;

/* Test for easystring header */
int main() {
    /* EasyString supports all C++ builtin input/output methods
     * but it has its own functions too which is easy as Python
     * and returns ready to use EasyString object from user input/ouput
     * all class/functions are available in default namespace std
     * for the rest of this file we will use thsese functions
     * for intput it has an input() function that supports prompt
     * text and multiline feature
     * for output it has print() and print_f() that supports all basic
     * data types which are convertable to EasyString with
     * variable argument number like int, double,
     * char, char*, std::string and EasyString
     */

    // Lets take our first input for testing using the input() function
    print("Lets take our first input");
    EasyString text = input("Enter a text: ");

    // Lets use cout to print 
    print();
    print("Lets check the ways of printing what we took from input()");
    cout << "Using cout: " << text << endl;

    // Lets use the print function
    print("Using print(): " + text);

    // Lets use the print_f function
    print_f("Using print_f(): {}\n", text);

    // Lets check all string manipulation methods
    //print();
    print();
    print("Lets check all string manipulation methods");

    EasyString text2 = "this is Our TeXt with mixed casE";
    print("Original text:", text2);
    print("lower():", text2.lower()); // Converts to lower case
    print("upper():", text2.upper()); // Converts to upper case
    print("title():", text2.title()); // Converts to title case
    print("swapcase():", text2.swapcase()); // Converts to swap case
    print("capitalize():", text2.capitalize()); // Capitalizes string

    // Lets check logical methods
    print();
    print("Lets check logical methods");
    print("We will take input 10 times with various string to check 10 available methods");
    print("Input different string each times like space only or other for best results");
    for(int i=0; i<10; i++) {
        auto text3 = input("Text: ");

        if(text3.isspace()) print("Contains only empty space"); // Checks if only contains space
        else if(text3.isalpha()) print("Contains alphabet only"); // Checks if all char is alphabets or A-Za-z
        else if(text3.isdigit()) print("Contains digits only"); // Checks if all char is numeric or 0-9
        else if(text3.isalnum()) print("Text is alpha numeric"); // Checks if all char is alphanumeric or A-Za-z0-9

        if(text3.hasalpha()) print("Contains one or more alphabets"); // Checks if text contains any alphabets or A-Za-z
        if(text3.isupper()) print("Upper case"); // Checks if text is in upper case
        else if(text3.islower()) print("Lower case"); // Checks if text is in lower case
        else if(text3.istitle()) print("Proper title case"); // Checks if text is proper title case

        if(text3.startswith(input("Check if text starts with: "))) print("Yes"); // Checks if text starts with specific substring
        else print("No");

        if(text3.endswith(input("Check if text ends with: "))) print("Yes"); // Checks if string ends with specific substring
        else print("No");
    }

    print();
    print("Lets see strip and trim");
    EasyString text4 = "              Hello         World              ";
    print_f("Original string: '{}'\n", text4);

    print_f("rstrip(): '{}'\n", text4.rstrip()); // Remove space from right
    print_f("lstrip(): '{}'\n", text4.lstrip()); // Remove space from left
    print_f("strip(): '{}'\n", text4.strip()); // Removes space from both side
    print_f("trim(): '{}'\n", text4.trim()); // Removes all extra space

    print();
    print("Now some spliting tests");
    EasyString text5 = "Mango is sweet and color is yellow";
    print_f("Original text: {}\n", text5);
    auto arr = text5.split();
    cout << "split(): " << arr << endl;
    cout << "from a specific index (arr[3]): " << arr[3] << endl;
    print_f("Number of 'is' (arr.count(\"is\")): {}\n", arr.count("is"));
    arr.sort();
    cout << "Sort (arr.sort()): " << arr << endl;
    arr.sort(1);
    cout << "Sort reverse (arr.sort()): " << arr << endl;
    cout << "Remove duplicates (arr.set()): " << arr.set() << endl;

    cout << "Remove an item arr.pop(2): " << arr.pop(2) << endl;
    cout << "arr after removeing: " << arr << endl;
    cout << "Append an iten arr.append(\"New text\"): " << endl;
    arr.append("New text");
    cout << "arr after appending: " << arr << endl;

    /* EasyString has a format method similar to print_f() */
    EasyString text6 = "{} is {} years old";
    print("Original string:", text6);
    print("Formatted string:", text6.format("Rana", 32));

    /* You can also declare independent Slice objcts */
    EasyString::Slice arr2("Apple", 'A', 124, 2.6, 7 + 6.7);
    print("Independent Slice object: ");
    cout << arr2 << endl;
    
    return 0;
}