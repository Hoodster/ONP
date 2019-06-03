# ONP
Reverse Polish Notation impementation for C++. <br/>
Do you want to know what RPN is? Click [here](https://en.wikipedia.org/wiki/Reverse_Polish_notation) and read more about it.

## Problem
Reverse Polish notation is a easier way to write a mathematical equation by not parenthesized expressions. It's also common calculator type in computing because no bracets are needed.

## Solution
Program gets all equation input in reverse Polish polish and prints computed result.

## How to use it
### 1. Adding expresson
1. Write number (*double* type is supported) or math opeartion symbol (+,-,*,/)
2. Click ENTER
### 2. Computing RPN equation
1. Write equation symbol [=]
2. Click ENTER
## Sample

### For ((2+7)/3+(14-3)*4)/2

`((2+7)/3+(14-3)*4)/2` => `2 7 + 3 / 14 3 - 4 * + 2 /`

#### Result:
<p align="center">
    <img src="https://i.ibb.co/j6bQtdr/Capture.png"><br/>
    Result is 23.5.
</p>

#### Implementation:
<p align="center">
    <img src="https://i.ibb.co/qjCTjT4/Capture.png"><br/>
    Each number or char in separate row. Result is 23.5.
</p>
