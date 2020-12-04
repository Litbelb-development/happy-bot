#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <unistd.h>

using namespace std;

int main()
{
    string name;
    cout << "Hello!\n";
    sleep(1);
    cout << "What is your name? ";
    cin >> name;
    sleep(1);
    cout << "Good to know.\nIt's currently ";
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-'
              << (now->tm_mon + 1) << '-'
              << now->tm_mday
              << ". Good to meet you, " 
              << name 
              << ". ";
    return 0;
};