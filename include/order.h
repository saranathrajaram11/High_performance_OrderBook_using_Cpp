#include<iostream>
#include <chrono>
#include <cstdint>
#pragma once
using namespace std;

struct Order{
    string side;
    uint64_t time;
    int O_ID;
    int qty;
    int price; 
};