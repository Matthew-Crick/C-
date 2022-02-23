#include<iostream>
using namespace std;
int main(){
    string first_name, last_name;
    int age;

    cout<<"What is your first name: ";
    cin>>first_name;
    cout<<"What is your last name: ";
    cin>>last_name;
    cout<<"What is your age: ";
    cin>>age;

    cout<<"Your first name is " <<first_name + " and your last name is " <<last_name + " together thats "
    <<first_name + " " + last_name + " oh and you're " <<age + " years of age";
    return 0;
}