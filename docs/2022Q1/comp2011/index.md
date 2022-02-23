---
tags: comp2011
aliases: COMP2011
date created: Sunday, February 20th 2022, 2:22:07 pm
date modified: Monday, February 21st 2022, 5:44:09 pm
title: COMP 2011
---

# COMP 2011

## 2022-02-11

- Lab 1 Released ( Feb 14 - 18 )
- `rand()`: sudorandom = simulating randomness
- `srand( *int* )`/ `srand( time(0) )` : actually "random"

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

`for (<for-init>;<bool-exp>;<post-processing>) { {<stmts>} }`

```ad-info 
title: Floating point inprecision 
Do not use == for comparision between floating numbers 

*make use of use epsilon to compare*  

1. if the difference between two numbers are smaller than eps value, than they should be double equal 
2. It is not the best solution, because eps is also a floating point number

```

## 2022-02-23

- [ ] Watch Previous Lecture #todo 
- [ ] [[20220223151316 Functions|Functions]] (Lab 3) #todo 
- [[20220223151316 Functions|Functions]]
