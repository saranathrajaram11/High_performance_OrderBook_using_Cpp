
//custom headers 
#include "../include/MatchingEngine.h"
#include "../include/OrderBook.h"
//must included headers
#include<iostream>
using namespace std;


OrderBook ob;

void  MatchEngine::processorder(Order order)
{

}; //end of processorder

 void MatchEngine::matchbuy(Order buyorder)
{
    if(book.sellorder.empty())
    {
        book.addorder(buyorder);
        return;
    } 
    else
    {
        
    }

}; //end of matchbuy


void MatchEngine::matchsell(Order sellorder)
{

};//end of matchsell