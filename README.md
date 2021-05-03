# EasyString
A header that implements custom Python like string object in C++

### Description
A custom string class that doesn't depends on NULL terminator and
implements an easy to use Python like string object with all proper
and expected string manipulation methods which are available in
Python like str.upper(), str.lower(), str.title() etc.

The soul purpose of making this header is to provide an easy to
use string object with more ready to use string methods like those
available in Python

This header is made only for practice purpose and not an improvement
over standard C string or C++ string (std::string) and is certainly
not for production use case

### APIs
#### Constructors
```
EasyString()    // Empty string constructor
EasyString(char c)    // Single character string constructor
EasyString(const char* str)    // Character array string constructor
EasyString(const std::string &str)    // C++ standard string constructor
EasyString(const EasyString &str)    // Copy constructor
EasyString(const int &num)    // Integer constructor
EasyString(const unsigned int &num)    // Unsigned integer constructor
EasyString(const double &num)    // Double constructor
```

#### Sub class constructors
```
EasyString::Slice()    // Empty slice constructor
EasyString::Slice(T... strlist)    // Multitype slice constructor
```

#### Informal methods
```
size_t len() const    // String length
int index(char c)    // Character index from left side
int rindex(char c)    // Character index from right side
unsigned int count(const EasyString &str)    // Returns number of occurrence of given substring
```

#### Sub class informal methods
```
size_t len() const    // Length of slice
int index(const EasyString &str)    // Index of given string from left
int rindex(const EasyString &str)    // Index of given string from right
unsigned int count(const EasyString &str)    // Returns number of occurrence of given string
```

#### Case methods
```
EasyString upper()    // Converts to upper case
EasyString lower()    // Converts to lower case
EasyString title()    // Converts to proper title case
EasyString swapcase()    // Swaps case
EasyString capitalize()    // Converts first char to upper and rest to lower
```

#### Formatting methods
```
EasyString lstrip()    // Removes space from left
EasyString rstrip()    // Removes space from right
EasyString strip()    // Removes space from both side
EasyString trim()    // Removes all extra space within string
EasyString format(T... strlist)    // Formats a string with values of passed arguments
EasyString replace(const EasyString &target, const EasyString &value)    // Replace substring with value
EasyString center(const size_t &count, EasyString str=' ')    // Returns centered string with space or specified substring
EasyString zfill(const size_t &count)    // Adds specified number of zeros at start of string
```

#### Logical methods
```
bool isspace()    // True if string contains only white space
bool isalpha()    // True if string contains only alphabets
bool isdigit()    // True if string contains only digits
bool isalnum()    // True if string contains only alphabets and digits
bool hasalpha()    // True if string contains one or more alphabets
bool isupper()    // True if string is upper cased
bool islower()    // True if string is lower case
bool istitle()    // True if string is proper title case
bool startswith(const EasyString &str)    // True if string starts with substr
bool endswith(const EasyString &str)    // True if string ends with substr
```

#### Other methods
```
EasyString substr(const size_t &s, const size_t &e)    // Substring method
int find(const EasyString &str)    // Index of substring from left
int rfind(const EasyString &str)    // Index of substring from right
char pop(size_t idx)    // Remove specified index and return character
char pop()    // Removes and returns character from end of string
char *c_str() const    // Returns base NULL terminated string
char *begin() const    // Returns pointer to start of string
char *end() const    // Returns pointer to end of string
size_t get_buffer() const    // Return buffer size
void set_buffer(size_t buff)    // Sets buffer size to buff
void erase(const size_t s, const size_t e)    // Erases specified part of string
```

#### Split methods
```
EasyString::Slice split(EasyString delimiter=" ")    // Returns slice object of split string with delimiter substring
EasyString::Slice splitlines()    // Returns slice object of split string with '\n' as delimiter
EasyString::Slice partition(const EasyString &str)    // Returns slice object of partitioned string from left
EasyString::Slice rpartition(const EasyString &str)    // Returns slice object of partitioned string from right
```

#### Sub class other methods
```
EasyString pop(const size_t &idx)    // Removes and returns element of specified index idx
EasyString pop()    // Removes and returns element from end of slice
EasyString join(const EasyString &delimiter)    // Returns all elements joined into one string separated with delimiter
const EasyString *begin() const    // Returns pointer to start of slice
const EasyString *end() const    // Returns pointer to end of slice
std::vector <EasyString> vr()    // Returns internal data vector
EasyString::Slice set()    // Returns a slice with all duplicate elements being removed
void append(EasyString str)    // Adds new elemnt at end of slice
void set(bool rev=false)    // Sorts slice, sorts in reverse order if rev set to true
```

#### Operators
Supports all basic string operations as Python string, which includes<br>
Logical operator: (==, !=, >, <, >=, <=)<br>
Concatenation and multiplication: (+, *)<br>
Assignment operator: (=, +=)

Stream operators
```
friend std::ostream &operator <<(std::ostream &os, const EasyString &str)    // cout << EasySting
friend std::istream &operator >>(std::istream &is, EasyString &str)    // cin >> EasyString
```

#### Sub class stream operators
```
friend std::ostream &operator <<(std::ostream &os, const EasyString::Slice &arr)    // cout << EasyString::Slice
```

#### Other public functions
```
EasyString input(size_t line=1)    // Gets input from user and returns as EasyString
EasyString input(const EasyString &prompt, size_t line=1)    // Gets input from user after showing passed string prompt
void getline(std::istream &is, EasyString &str)    // Overloaded getline() for multiline input
void print()    // Prints empty line
void print(T... strlist)    // Prints all argument separated with space
void print_f()    // Prints empty line
void print_f(T... strlist)    // Prints formatted string with values of passed arguments starting from second index
```

#### Note
This header is made only as a fun project for self practice<br>
purpose and may contain bugs, if you use it for your own works<br>
then be careful with unknown bugs and also inform if you've found<br>
so that I can try to fix, also any improvement suggestions are accepted.<br>
Examine the compileme.cpp file to see some usage example
