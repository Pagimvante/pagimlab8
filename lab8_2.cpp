#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    int a;
    cout << name << ": ";                                                             
    cin >> a;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (a/10000000)-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    string namemovie;
    cout << name << ": ";
    getline(cin,namemovie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    string namemovie1;
    cout << name << ": ";
    getline(cin,namemovie1);
    cout << "Fahsai: " << namemovie1 <<  "....that is OK!!! I'm looking forward to watching " << namemovie << " with you." << endl;
    string text;
    cout << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << namemovie1 << ". Bye Bye \\(^ ^)/";
    return 0;
}