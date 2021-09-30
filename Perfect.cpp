#include<iostream>
    using namespace std;
    //main Program
    int main ()
    {  
        int  div, num, sum=0;
        cout << “Enter the number to check : “;
        //user input
        cin >> num;
        //loop to find the sum of divisors
       
        //checking for perfect number
        if (sum == num)
            cout<< num <<” is a perfect number.”;
        else
            cout<< num <<” is not a perfect number.”;
        return 0;
    }
