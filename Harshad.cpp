#include <iostream>
    using namespace std;
    //main program
    int main()  
    {  
        int num,sum = 0;  
        cout<<“Enter number: “;
        //user input
        cin>>num;
        int n = num;   
        //loop to calculate the sum of digits
        
        //checking for harshad number
        if(n % sum == 0)  
            cout<<n<<” is a harshad number”;  
        else  
            cout<<n<<” is not a harshad number”;
        return 0;  
        }
