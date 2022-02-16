# COMP 2011

## 2022-02-11
- Lab 1 Released ( Feb 14 - 18 )

`rand()`
sudorandom = simulating randomness

`srand( *int* )`/ `srand( time(0) )`
actually "random"

## 2022-02-16 

```c++
if (0<= x <=10 ) // Not allowed 
if ((0<=x) && (x <=10 )) //correct
```

```c++
char c1 = 'a'; // Single charaters can only be in single quotes 
char c2 = "a"; // ERR: this is wrong 

string s1 = "a string"; // This is correct 
string s2 = 'a string'; //then this is not  

\0 //escaped value meaning: null 

```

For loop 

`for (<for-init>;<bool-exp>;<post-processing>) {
  {<stmts>}
}`
