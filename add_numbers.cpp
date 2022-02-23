#include<iostream>
using namespace std;
int main(){
    int first_digit, second_digit, third_digit;

    cout<<"enter first digit : ";
    cin>>first_digit;
    cout<<"enter second digit : ";
    cin>>second_digit;

    third_digit = first_digit + second_digit;

    cout<<"the sum of your first and second digit is " <<third_digit;

    return 0;
}