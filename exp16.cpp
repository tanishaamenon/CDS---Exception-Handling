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
