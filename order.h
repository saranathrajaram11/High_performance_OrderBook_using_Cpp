#include<iostream>
#include <chrono>
#pragma once
using namespace std;

struct Order{
    int O_ID;
    string side;
    int qty;
    int price; 
    chrono::system_clock::time_point timestamp;
};


