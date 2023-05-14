
/* Create a function that appends some data to file and then reads this data from file.
 * Написать функцию, котoрая записывает информацию в файл и затем считывает эту информацию из файла.
*/

#include <iostream>
#include <fstream>
#include "Phone.h"

using namespace std;

void Print (PhoneAbonent user);
void InsertRecord(string name, string number, string group, bool company, ofstream& file, int& count);

int main() {
    PhoneAbonent user1;
    user1.name = "Ivanov Ivan";
    user1.number = "12345678910";
    user1.group = "friend";
    user1.company = false;

    PhoneAbonent user2;
    user2.name = "Invest Capital";
    user2.number = "12345678910";
    user2.group = "work";
    user2.company = true;

    Print (user1);
    Print (user2);

    ofstream file;
    file.open ("D:\\Programming_C_+_+\\Files\\Phone_book.txt",ios_base::trunc);
    int count = 0;
    InsertRecord( user1.name, user1.number, user1.group, user1.company, file, count);
    InsertRecord( user2.name, user2.number, user2.group, user2.company, file,count);
    file.close();

    ifstream file_read;
    file_read.open ("D:\\Programming_C_+_+\\Files\\Phone_book.txt");
    string str;
    while (getline(file_read,str)){
        cout<<str<<endl;
    }

    return 0;
}
void Print (PhoneAbonent user){
    cout <<user.name<<" "<<user.number<<" "<<user.group<<" "<<user.company<<endl;
};
void InsertRecord(string name, string number, string group, bool company, ofstream& file, int& count){
    file<<"Abonent "<< ++count<<":"<<endl;
    file<<"Name: "<<name<<endl;
    file<<"Phone number: "<<number<<endl;
    file<<"Group: "<<group<<endl;
    file<<"Company:"<< boolalpha << company<<endl;
}
