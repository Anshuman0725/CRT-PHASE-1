#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout<<str1<<" "<<str2<<endl;

    // method of string 
    // 1 length of string 

    int n = str1.length();
    cout<<"Length of the string is : "<<n<<endl;

    // 2 Append string
    cout<<"After appending string is : "<< str1.append("Student")<<endl;

    // 3 empty string 
    cout<<"Is string empty "<<str2.empty()<<endl;

    // 4 Concatenation of string 
    cout<<"After concatenation of string is :"<<str1 + "Bacchon"<<endl;
    cout<<"After concatenation of string is 2: "<<str1<<endl;

    // 5 push back
    str2.push_back('u');
    cout<<"After push_back() method"<<str2<<endl; // jecrc

    // 6 pop back
    str2.pop_back();
    cout<<"After pop_back() method:"<<str2<<endl; // jecrc

     // find() method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1:" << index << endl;

    // at method. str1[1];
    char ch = str1.at(1);
    cout << "Character at index 1 in str1:" << ch << endl;
    // swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl; // Jecrc
    cout << "str2: " << str2 << endl; // Hellostudents

    // substr() method
    string subStr = str2.substr(5, 6); // 5 is index and 6 is total length of substring
    cout << "Substring of str2 from index 5 with length 6:" << subStr << endl;

    // getline() method
    string str3;
    // cin >> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}
