#pragma once
#include<iostream>
#include "order.h"
#include "OrderBook.h"
using namespace std;

class MatchEngine{
    private:
    OrderBook &book;
    
    public:
    MatchEngine(OrderBook &book) :book(book){};
    void processorder(Order order);
    void matchbuy(Order buyorder);
    void matchsell(Order sellorder);
    

};