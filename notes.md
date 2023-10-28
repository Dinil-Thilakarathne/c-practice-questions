# Lecture 1 - C

Class: CS50 (https://www.notion.so/CS50-cc48a77909c2491fa8c027ac5d809bf7?pvs=21)
Topic: C
Type: My note
Last Review: October 9, 2023 1:42 PM
Days Ago: 18 days

# Overview

- [C Introduction](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Why Learn C?](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Difference between C and C++](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [C Output (Print Text)](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [C Comments](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [C Variables](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Format Specifiers](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [C Variable Names](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Data Types](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Type Conversion](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Constants](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Operators](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Booleans](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [If…Else](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Switch](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Loops](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)
- [Arrays](https://www.notion.so/Lecture-1-C-85b7f09bba474d4d90385e28868f72e3?pvs=21)

---

# C Introduction

- C is a general-purpose programming language **created by Dennis Ritchie at the Bell Laboratories in 1972.**
- It is a very popular language, despite being old.
- **C is strongly associated with UNIX, as it was developed to write the UNIX operating system.**

---

# Why Learn C?

- It is one of the most popular programming language in the world
- If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar
- C is very fast, compared to other programming languages, like [Java](https://www.w3schools.com/java/default.asp) and [Python](https://www.w3schools.com/python/default.asp)
- C is very versatile; it can be used in both applications and technologies

---

# Difference between C and C++

- [C++](https://www.w3schools.com/cpp/default.asp) was developed as an extension of C, and both languages have almost the same syntax
- The main difference between C and C++ is that C++ **support classes and objects,** while C does not

# **C Syntax**

- You have already seen the following code a couple of times in the first chapters. Let's break it down to understand it better:

Example

```c
#include <stdio.h>
int main() 
{  
		printf("Hello World!");  
		return 0;
}
```

[Try it Yourself »](https://www.w3schools.com/c/tryc.php?filename=demo_helloworld)

Example explained

<aside>
💡 **Line 1:** `#include <stdio.h>` is a **header file library** that lets us work with input and output functions, such as `printf()` (used in line 4). Header files add functionality to C programs.

</aside>

<aside>
💡 **Note that:** Every C statement ends with a semicolon `;`

</aside>

# **C Output (Print Text)**

- To output values or print text in C, you can use the `printf()` function:

Example

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```

[Try it Yourself »](https://www.w3schools.com/c/tryc.php?filename=demo_output)

- You can use as many `printf()` functions as you want. **However**, note that it does not insert a **new line at the end of the output:**

# **C New Lines**

- To insert a new line, you can use the `\n` character:

```c
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.");
  return 0;
}
```

### What is `\n` exactly?

- The newline character (`\n`) is called an **escape sequence**, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:

| Escape Sequence | Description | Try it |
| --- | --- | --- |
| \t | Creates a horizontal tab | https://www.w3schools.com/c/tryc.php?filename=demo_esc_char |
| \\ | Inserts a backslash character (\) | https://www.w3schools.com/c/tryc.php?filename=demo_esc_char_backslash |
| \" | Inserts a double quote character | https://www.w3schools.com/c/tryc.php?filename=demo_esc_char_dblquote |

# **C Comments**

- Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.
- Comments can be **singled-lined** or **multi-lined**.

## Single-line Comments

- Single-line comments **start with two forward slashes (`//`)**.
- Any text between `//` and the end of the line is ignored by the compiler (will not be executed).
- This example uses a single-line comment before a line of code:
    
    ```c
    // This is a comment
    printf("Hello World!");
    ```
    

## C Multi-line Comments

- Multi-line comments start with `/*` and ends with `*/`.
- **Any text between `/*` and `*/` will be ignored by the compiler**
    
    ```c
    /* The code below will print the words Hello World!
    to the screen, and it is amazing */
    printf("Hello World!");
    ```
    

# **C Variables**

Variables are containers for storing data values, like numbers and characters.

In C, there are different **types** of variables (defined with different keywords), for example:

- `int` - stores integers (whole numbers), without decimals, such as `123` or `123`
- `float` - stores floating point numbers, with decimals, such as `19.99` or `19.99`
- `char` - stores single characters, such as `'a'` or `'B'`. Char values are surrounded by **single quotes**

## **Declaring (Creating) Variables**

- To create a variable, specify the **type** and assign it a **value**:

```c
type variableName = value;
```

<aside>
💡 Where *type* is one of C types (such as `int`), and *variableName* is the name of the variable (such as **x** or **myName**). The **equal sign** is used to assign a value to the variable.

</aside>

Example 

```c
int myNum = 15;

// Declare a variable
int myNum;

// Assign a value to the variable
myNum = 15;
```

## **Output Variables**

```c
printf("Hello World!");
```

# Format Specifiers

- Format specifiers are used together with the `printf()` function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
- A format specifier starts with a **percentage sign `%`, followed by a character.**
- For example, to output the value of an `int` variable, you must use the format specifier `%d` or `%i` surrounded by double quotes, inside the `printf()` function:

Example

```c
int myNum = 15;
printf("%d", myNum);  // Outputs 15
```

[Try it Yourself »](https://www.w3schools.com/c/tryc.php?filename=demo_variables_printf_int)

<aside>
💡 To print other types, use `%c` for `char` and `%f` for `float`:

</aside>

![Untitled](Lecture%201%20-%20C%2085b7f09bba474d4d90385e28868f72e3/Untitled.png)

Example 

```c
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

# Change Variable Values

<aside>
💡 **Note:** If you assign a new value to an existing variable, it will overwrite the previous value:

</aside>

Example 

```c
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
```

- You can also assign the value of one variable to another:

```c
int myNum = 15;

int myOtherNum = 23;

// Assign the value of myOtherNum (23) to myNum
myNum = myOtherNum;

// myNum is now 23, instead of 15
printf("%d", myNum);
```

- Or copy values to empty variables:
    
    ```c
    // Create a variable and assign the value 15 to it
    int myNum = 15;
    
    // Declare a variable without assigning it a value
    int myOtherNum;
    
    // Assign the value of myNum to myOtherNum
    myOtherNum = myNum;
    
    // myOtherNum now has 15 as a value
    printf("%d", myOtherNum);
    ```
    

### **Add Variables Together**

- To add a variable to another variable, you can use the `+` operator:
    
    ```c
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);
    ```
    

### Declare Multiple Variables

- To declare more than one variable of the same type, use a **comma-separated** list:
    
    ```c
    int x = 5, y = 6, z = 50;
    printf("%d", x + y + z);
    ```
    
- You can also assign the **same value** to multiple variables of the same type:
    
    ```c
    int x, y, z;
    x = y = z = 50;
    printf("%d", x + y + z);
    ```
    

# **C Variable Names**

- All C **variables** **must be identified with unique names.**
- These unique names are called **identifiers**.
- Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

<aside>
💡 **Note:** It is recommended to use descriptive names in order to create understandable and maintainable code:

</aside>

```c
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

### The **general rules** for naming variables are:

- Names can contain **letters, digits and underscores**
- Names **must begin with a letter or an underscore (_)**
- **Names are case sensitive (`myVar` and `myvar` are different variables)**
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as `int`) cannot be used as names

# C Data Types

- A variable in C must be a specified **data type**, and you must use a **format specifier** inside the `printf()` function to display it:

```c
// Create variables
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

## Basic Data Types

- The data type specifies the size and type of information the variable will store.
- In this tutorial, we will focus on the most basic ones:

| Data Type | Size | Description |
| --- | --- | --- |
| int | 2 or 4 bytes | Stores whole numbers, without decimals |
| float | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |
| double | 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |
| char | 1 byte | Stores a single character/letter/number, or ASCII values |

## Basic Format Specifiers

There are different format specifiers for each data type. Here are some of them:

| Format Specifier | Data Type | Try it |
| --- | --- | --- |
| %d or %i | int | https://www.w3schools.com/c/tryc.php?filename=demo_format_spec_di |
| %f | float | https://www.w3schools.com/c/tryc.php?filename=demo_format_spec_f |
| %lf | double | https://www.w3schools.com/c/tryc.php?filename=demo_format_spec_lf |
| %c | char | https://www.w3schools.com/c/tryc.php?filename=demo_format_spec_c |
| %s | Used for https://www.w3schools.com/c/c_strings.php (text), which you will learn more about in a later chapter | https://www.w3schools.com/c/tryc.php?filename=demo_format_spec_s |

# **C Type Conversion**

- Sometimes, you have to convert the value of one data type to another type. This is known as **type conversion**.
- For example, if you try to divide two integers, `5` by `2`, you would expect the result to be `2.5`. But since we are working with integers (and not floating-point values), the following example will just output `2`:

### Example

```c
int x = 5;
int y = 2;
int sum = 5 / 2;

printf("%d", sum); // Outputs 2
```

- To get the right result, you need to know how **type conversion** works.
- There are two types of conversion in C:
    - **Implicit Conversion** (automatically)
    - **Explicit Conversion** (manually)
    

## Implicit Conversion

- Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
- For example, if you assign an `int` value to a `float` type:

```c
// Automatic conversion: int to float
float myFloat = 9;

printf("%f", myFloat); // 9.000000
```

<aside>
💡 As you can see, the compiler automatically converts the int value `9` to a float value of `9.000000`.

</aside>

```c
// Automatic conversion: float to int
int myInt = 9.99;

printf("%d", myInt); // 9
```

<aside>
💡 Note:

- What happened to `.99`? We might want that data in our program! So be careful. It is important that you know how the compiler work in these situations, to avoid unexpected results.
- As another example, if you divide two integers: `5` by `2`, you know that the sum is `2.5`. And as you know from the beginning of this page, if you store the sum as an integer, the result will only display the number `2`. Therefore, it would be better to store the sum as a `float` or a `double`, right?
</aside>

```c
float sum = 5 / 2;

printf("%f", sum); // 2.000000
```

<aside>
💡 Why is the result `2.00000` and not `2.5`? Well, it is because 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values. (see below).

</aside>

## Explicit Conversion

- Explicit conversion is done manually by placing the type in parentheses `()` in front of the value.

```c
// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%f", sum); // 2.500000
```

# **C Constants**

<aside>
💡 If you don't want others (or yourself) to change existing variable values, you can use the `const` keyword. If the variable will declare as `constant` , which means ***unchangeable and read-only***.

</aside>

```c
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
```

<aside>
💡 Note :

- You should always declare the variable as constant when you have values that are unlikely to change:
- When you declare a constant variable, ***it must be assigned with a value:***
- Another thing about constant variables, is that it is considered good practice to ***declare them with uppercase***. It is not required, but useful for code readability and common for C programmers:
</aside>

# C Operators

- **Operators are used to perform operations on variables and values.**

### C divides the operators into the following groups:

- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

## Arithmetic Operators

- Arithmetic operators are used to perform common mathematical operations.

| Operator | Name | Description | Example | Try it |
| --- | --- | --- | --- | --- |
| + | Addition | Adds together two values | x + y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_add |
| - | Subtraction | Subtracts one value from another | x - y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_sub |
| * | Multiplication | Multiplies two values | x * y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_mult |
| / | Division | Divides one value by another | x / y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_div |
| % | Modulus | Returns the division remainder | x % y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_mod |
| ++ | Increment | Increases the value of a variable by 1 | ++x | https://www.w3schools.com/c/tryc.php?filename=demo_oper_inc |
| -- | Decrement | Decreases the value of a variable by 1 | --x | https://www.w3schools.com/c/tryc.php?filename=demo_oper_dec |

---

## Assignment Operators

- Assignment operators are used to assign values to variables.
- A list of all assignment operators:

| Operator | Example | Same As | Try it |
| --- | --- | --- | --- |
| = | x = 5 | x = 5 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass1 |
| += | x += 3 | x = x + 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass2 |
| -= | x -= 3 | x = x - 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass3 |
| *= | x *= 3 | x = x * 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass4 |
| /= | x /= 3 | x = x / 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass5 |
| %= | x %= 3 | x = x % 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass6 |
| &= | x &= 3 | x = x & 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass7 |
| |= | x |= 3 | x = x | 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass8 |
| ^= | x ^= 3 | x = x ^ 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass9 |
| >>= | x >>= 3 | x = x >> 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass10 |
| <<= | x <<= 3 | x = x << 3 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_ass11 |

---

## Comparison Operators

- Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
- The return value of a comparison is either `1` or `0`, which means **true** (`1`) or **false** (`0`). These values are known as **Boolean values**, and you will learn more about them in the [Booleans](https://www.w3schools.com/c/c_booleans.php) and [If..Else](https://www.w3schools.com/c/c_conditions.php) chapter.
- In the following example, we use the **greater than** operator (`>`) to find out if 5 is greater than 3:
- A list of all comparison operators:

| Operator | Name | Example | Try it |
| --- | --- | --- | --- |
| == | Equal to | x == y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare1 |
| != | Not equal | x != y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare2 |
| > | Greater than | x > y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare3 |
| < | Less than | x < y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare4 |
| >= | Greater than or equal to | x >= y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare5 |
| <= | Less than or equal to | x <= y | https://www.w3schools.com/c/tryc.php?filename=demo_oper_compare6 |

---

## Logical Operators

- You can also test for true or false values with logical operators.
- Logical operators are used to determine the logic between variables or values:

| Operator | Name | Description | Example | Try it |
| --- | --- | --- | --- | --- |
| && | Logical and | Returns true if both statements are true | x < 5 &&  x < 10 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_logical1 |
| || | Logical or | Returns true if one of the statements is true | x < 5 || x < 4 | https://www.w3schools.com/c/tryc.php?filename=demo_oper_logical2 |
| ! | Logical not | Reverse the result, returns false if the result is true | !(x < 5 && x < 10) | https://www.w3schools.com/c/tryc.php?filename=demo_oper_logical3 |

## C operators precedence

Certainly! Here's a table showing the precedence of common C operators, ordered from highest precedence to lowest precedence:

| Precedence | Operator | Description |
| --- | --- | --- |
| 1 | () | Parentheses (grouping) |
| 2 | ++ -- | Postfix increment and decrement |
|  | + - | Unary plus and minus |
|  | ! ~ | Logical NOT and bitwise NOT |
|  | (type) | Type casting |
| 3 | * / % | Multiplication, division, modulus |
| 4 | + - | Addition, subtraction |
| 5 | << >> | Bitwise left shift, right shift |
| 6 | < <= > >= | Relational operators |
| 7 | == != | Equal to, not equal to |
| 8 | & | Bitwise AND |
| 9 | ^ | Bitwise XOR |
| 10 | | | Bitwise OR |
| 11 | && | Logical AND |
| 12 | || | Logical OR |
| 13 | ?: | Conditional (ternary) operator |
| 14 | = += -= *= /= %= <<= >>= | Assignment and compound assignment |
|  | &= ^= |= | operators |
| 15 | , | Comma (separates expressions) |

---

# C Booleans

- Very often, in programming, you will need a data type that can only have one of two values, like:
    - YES / NO
    - ON / OFF
    - TRUE / FALSE
- For this, C has a `bool` data type, which is known as **booleans**.
- Booleans represent values that are either `true` or `false`.

## Boolean Variables

- In C, the `bool` type is not a built-in data type, like `int` or `char`.
- It was introduced in C99, and you must **import** the following header file to use it:

```c
#include <stdbool.h>
```

---

# C If…Else

## Conditions and If Statements

You have already learned that C supports the usual logical **conditions** from mathematics:

- Less than: a < b
- Less than or equal to: a <= b
- Greater than: a > b
- Greater than or equal to: a >= b
- Equal to a == b
- Not Equal to: a != b

You can use these conditions to perform different actions for different decisions.

C has the following conditional statements:

- Use `if` to specify a block of code to be executed, if a specified condition is `true`
- Use `else` to specify a block of code to be executed, if the same condition is `false`
- Use `else if` to specify a new condition to test, if the first condition is `false`
- Use `switch` to specify many alternative blocks of code to be executed

## The If Statement

- Use the `if` statement to specify a block of code to be executed if a condition is `true`
- Syntax :

```c
if (condition) {
  // block of code to be executed if the condition is true
}
```

<aside>
💡 Note that `if` is in lowercase letters. Uppercase letters (If or IF) will generate an error.

</aside>

## The Else Statement

- Use the `else` statement to specify a block of code to be executed if the condition is `false`
- Syntax :

```c
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```

## The Else If Statement

- Use the `else if` statement to specify a new condition if the first condition is `false`
- Syntax :

```c
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```

## **Short Hand If...Else (Ternary Operator)**

- There is also a short-hand if else, which is known as the **ternary operator** because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:
- Syntax :

```c
variable = (condition) ? expressionTrue : expressionFalse;

// Example
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
```

<aside>
💡 In C, the ternary conditional operator (**`? :`**) is designed to produce a value or result, not for performing assignments directly.

</aside>

# C Switch

- Instead of writing **many** `if..else` statements, you can use the `switch` statement.
- The `switch` statement selects one of many code blocks to be executed:
- Syntax :

```c
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

<aside>
💡 This is how it works:

- The `switch` expression is evaluated once
- The value of the expression is compared with the values of each `case`
- If there is a match, the associated block of code is executed
- The `break` statement breaks out of the switch block and stops the execution
- The `default` statement is optional, and specifies some code to run if there is no case match
</aside>

```c
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}

// Outputs "Thursday" (day 4)
```

<aside>
💡 A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

</aside>

## The default Keyword

- The `default` keyword specifies some code to run if there is no case match:

```c
int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

// Outputs "Looking forward to the Weekend"
```

<aside>
💡 **Note:**

- The default keyword must be used as the last statement in the switch, and it does not need a break.
</aside>

# C Loops

## Loops

- Loops can execute a block of code **as long as a specified condition is reached.**
- Loops are handy because they save time, reduce errors, and they make code more readable.

## While Loop

- The `while` loop loops through a block of code as long as a specified condition us `true`
- Syntax :

```c
while (condition) {
  // code block to be executed
}
```

- Example

```c
int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}
```

<aside>
💡 **Note:**

Do not forget to increase the variable used in the condition (`i++`), otherwise the loop will never end!

</aside>

## The Do/While Loop

- The `do/while` loop is a variant of the `while` loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
- Syntax:

```c
do {
  // code block to be executed
}
while (condition);
```

## For Loop

- When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop:
- Syntax :

```c
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

### Nested Loop

- It is also possible to place a loop inside another loop. This is called a **nested loop**.
- The "inner loop" will be executed one time for each iteration of the "outer loop":

```c
int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}
```

## **Break and Continue**

### **Break**

- The `break` statement can also be used to jump out of a **loop**.

### **Continue**

- The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

# C Arrays

- Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
- To create an array, define the data type (like `int`) and specify the name of the array followed by **square brackets []**.
- To insert values to it, use a comma-separated list, inside curly braces:

```c
int myNumbers[] = {25, 50, 75, 100};
```

## **Access the Elements of an Array**

- To access an array element, refer to its **index number**.
- Array indexes start with **0**: [0] is the first element. [1] is the second element, etc.
- This statement accesses the value of the **first element [0]** in `myNumbers`:

```c
int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]);

// Outputs 25
```

## Change an Array Element

- To change the value of a specific element, refer to the index number:

```c
myNumbers[0] = 33;
```

## Multidimensional Arrays

- A multidimensional array is basically an array of arrays.
- Arrays can have any number of dimensions. In this chapter, we will introduce the most common; two-dimensional arrays (2D).

### **Two-Dimensional Arrays**

- A 2D array is also known as a matrix (a table of rows and columns).
- To create a 2D array of integers, take a look at the following example:

```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
```

- The first dimension represents the number of rows **[2]**, while the second dimension represents the number of columns **[3]**. The values are placed in row-order, and can be visualized like this:

![Untitled](Lecture%201%20-%20C%2085b7f09bba474d4d90385e28868f72e3/Untitled%201.png)

### **Access the Elements of a 2D Array**

- To access an element of a two-dimensional array, you must specify the index number of both the row and column.
- This statement accesses the value of the element in the **first row (0)** and **third column (2)** of the **matrix** array.

```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

printf("%d", matrix[0][2]);  // Outputs 2
```

---

## **Pointers in C**

A pointer is a variable that stores the memory address of another variable. Pointers are used to access and modify the values of other variables without having to know their names. Pointers are also used to pass arguments to functions and to return values from functions.

To declare a pointer variable, you use the asterisk (*) symbol before the variable name. For example, the following declaration creates a pointer variable named `p` that can store the memory address of an integer variable:

```c
int *p;

```

To initialize a pointer variable, you assign the memory address of another variable to it. For example, the following statement assigns the memory address of the variable `x` to the pointer variable `p`:

```c
int x = 10;
p = &x;

```

The `&` operator is the address-of operator, and it returns the memory address of its operand.

Once a pointer variable has been initialized, you can use it to access and modify the value of the variable it points to. For example, the following statement prints the value of the variable `x`:

```c
printf("%d\n", *p);

```

The asterisk (*) operator is the dereference operator, and it returns the value of the variable pointed to by its operand.

You can also use pointers to modify the value of the variable they point to. For example, the following statement increments the value of the variable `x` by 1:

```c
(*p)++;

```

**Examples of Pointers in C**

Here are some examples of how to use pointers in C:

```c
// Declare a pointer variable to an integer.
int *p;

// Allocate memory for an integer variable and assign its address to the pointer variable.
p = malloc(sizeof(int));

// Initialize the integer variable through the pointer variable.
*p = 10;

// Print the value of the integer variable through the pointer variable.
printf("%d\n", *p);

// Free the memory allocated for the integer variable.
free(p);

```

```c
// Declare a pointer variable to an array of integers.
int *p;

// Allocate memory for an array of 10 integers and assign its address to the pointer variable.
p = malloc(sizeof(int) * 10);

// Initialize the elements of the array through the pointer variable.
for (int i = 0; i < 10; i++) {
  *(p + i) = i + 1;
}

// Print the elements of the array through the pointer variable.
for (int i = 0; i < 10; i++) {
  printf("%d\n", *(p + i));
}

// Free the memory allocated for the array of integers.
free(p);

```

```c
// Declare a pointer variable to a function that returns an integer.
int (*f)() = &add;

// Call the function through the pointer variable.
int sum = (*f)(1, 2);

// Print the sum.
printf("%d\n", sum);

int add(int a, int b) {
  return a + b;
}

```

**Conclusion**

Pointers are a powerful tool in C that can be used to access and modify the values of other variables without having to know their names. Pointers are also used to pass arguments to functions and to return values from functions.

Pointers can be complex to understand at first, but they are an essential part of the C programming language. Once you have a good understanding of pointers, you will be able to write more efficient and powerful C code.