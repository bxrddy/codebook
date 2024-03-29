STRING FUNCTIONS
Header File:<string>

s.length()              returns length of s
s.size()                returns length of s
s.empty()               return true if string is empty
s.clear()               changes s to empty string
s.insert(n,"x")         insert "x" after position n i.e. at index n of string s
s.front()               access first char of s
s.back()                access last char of s
s.pop_back()            delete last char of s
s.erase(i,n)            erase n characters starting from index i of s
s.replace(i,n,s2)       replace n characters starting from index i of s with string s2
s.substr(i,n)           returns substring of n characters starting from index i of s

string s = "a_b_c";
size_t n = count(s.begin(), s.end(), '_');
//OUTPUT : 3

s.find("x")                returns index of x in s   
                           *******implementation*******
                            size_t found =s.find("x");
                            if(found==string::npos)
                                cout<<"Not found\n";
                            else
                                cout<<found<<endl;
                           ****************************
s.find_first_of("x")       returns first occurence of x in s
s.find_last_of("x")        returns last occurence of x in s
s.find_first_not_of("x")   returns first absence of x in s
s.find_last_not_of("x")    returns last absencee of x in s
s.compare(i,n,s2)          compare n characters starting from index i of s with string s2; returns 0 if matched

***************Sorting in String*********************
 
 sort(s.begin(), s.end(), std::greater<char>())

CHARACTER FUNCTIONS
Header File: <cctype>

isalpha(c)	It returns True if C is an uppercase letter and False if c is lowercase.
isdigit(c)	It returns True if c is a digit (0 through 9) otherwise False.
isalnum(c)	It returns True if c is a digit from 0 through 9 or an alphabetic character (uppercase or lowercase) 
islower(c)	It returns True if C is a lowercase letter otherwise False.
isupper(c)	It returns True if C is an uppercase letter otherwise False.
toupper(c)	It converts c to uppercase letter.
tolower(c)	It converts c to lowercase letter

MATHEMATICAL FUNCTIONS
Header file: <cmath>

sin(x)	  Sine of an angle x (measured in radians)
cos(x)	  Cosine of an angle x (measured in radians)
tan(x)	  Tangent of an angle x (measured in radians)
asin(x) 	Sin-1 (x) where x (measured in radians)
acos(x)	  Cos-1 (x) where x (measured in radians)
exp(x)	  Exponential function of x (ex)
log(x)	  logarithm of x
log 10(x)	Logarithm of number x to the base 10
sqrt(x)	  Square root of x
pow(x, y)	x raised to the power y
abs(x)	  Absolute value of integer number x

PERMUTATIONS
Header File: <algorithm>

next_permutation(s.begin(),s.end())                   The next lexicographic permutation
prev_permutation(s.begin(),s.end())                   The previous lexicographic permutation
is_permutation(s1.begin(),s1.end(),s2.begin())        Returns true if s2 is a permutation of s1