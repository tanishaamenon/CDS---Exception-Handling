# Experiment 16

**Aim:** <br>
To study and implement Exception Handling. <br>
<br>
**Theory:** <br>
In C++, exception handling is a mechanism that allows programs to control the program flow in the situations that were not foreseen beforehand and which occurred at the runtime. Exception handling comprises of three main keywords in C++. They are as follows:  <br>
<br>
Keywords of Exception Handling: <br>
&#8594; _throw:_ When an error occurs it throws an exception to signal the error. It can pass any value, but commonly integers, strings, or objects are thrown to indicate the type of error. <br>
&#8594; _catch_: After an exception is thrown, the program looks for a _catch_ block that can handle the type of exception thrown. It is used to define how to handle a specific type of exception. This block must match the type of the exception that was thrown. If an exception is thrown that does not match any catch block, the program will terminate.
 <br>
&#8594; _try:_ It contains code that might throw an exception. The code within the try block is executed, and if an exception occurs, the corresponding catch block is executed to handle it. <br>
<br>
Flow of Exception Handling: <br>
When an exception occurs inside the try block, the program immediately transfers control to the catch block. If a catch block matching the thrown exception is found, it is executed. If no matching catch block is found, the program terminates.


<br>

**Code:** <br>
<br>
```
#include <iostream>
using namespace std;

int main() 
{
    int den,num;
    float ans;

    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> den;

    try 
    {
        if (den == 0) 
        {
            throw 0;  
        }

        cout << "Answer: "<< num/den << endl;
    }

    catch (int x) 
    {
        cout << "ERROR: DIVISION BY ZERO" << endl;
    }

}

```
<br>

**Outputs:**  <br>
<br>
![exp16a output](https://github.com/tanishaamenon/CDS---Exception-Handling/blob/main/exp16a.JPG) <br>
![exp16b output](https://github.com/tanishaamenon/CDS---Exception-Handling/blob/main/exp16a.JPG) <br>
<br>

**Conclusion:** <br>
&#8594; We learnt about exception handling in C++. <br>
&#8594; We learnt the flow of exception handling in C++. <br>
*******
<br>
