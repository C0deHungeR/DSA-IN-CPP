#include<iostream>
using namespace std ;

// Bitwise operators 
int main(){
    // AND operator (&)
    /* Bitwise AND operation is performed between two integers, It will compare each bit on the same position and the result bit will be set(1) only and only if both corresponding bits are set(1).*/

    int a = 5 ; // binary 0101
    int b = 10 ;// binary 1010

    int bitwiseAND = a & b ;
    cout<<"bitwiseAND : "<<bitwiseAND<<endl;

    //OR operator (|)
    /* Bitwise OR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits are set(1).*/

    int bitwiseOR = a | b ;
    cout<<"bitwiseOR : "<<bitwiseOR<<endl;

    //XOR operator (^)
    /*If Bitwise XOR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits differ i.e. one of them should be 1 and other should be zero. */

    int BitwiseXOR = a^b ;
    cout<<"bitwiseXOR : "<<BitwiseXOR<<endl;

    //Bitwise NOT (~)
    /*The Bitwise NOT operation is performed on a single number. It change the current bit to it’s complement , i.e. if current bit is 0 then in result it will be 1 and if current bit is 1 then it will become 0*/ 
    
    int bitwiseNot = ~ a ;
    cout<<"biwiseNot : "<<bitwiseNot<<endl;

    // right shift (>>)
    /*This operator shifts the bits of Integer to right side by specific number (As mentioned) . This right shift operation is equivalent to dividing the integer by 2 power number of positions shifted.*/
    int c = 5 ;
    int d = 2 ;
    int RIghtshift = c >> d;
    cout<<"RIghtshift : "<<RIghtshift<<endl;

    //LeftSHift (<<)
    /*This operator shifts the bits of Integer to left side by specific number (As mentioned) . This left shift operation is equivalent to multiplying the integer by 2 power number of positions shifted. */
    int LeftSHift = c << d ;
    cout<<"leftshift : "<<LeftSHift<<endl;


    return 0 ;

}