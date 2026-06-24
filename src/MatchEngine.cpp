
//custom headers 
#include "../include/MatchingEngine.h"
#include "../include/OrderBook.h"
//must included headers
#include<iostream>

using namespace std;


void  MatchEngine::processorder(Order order)
{

}; //end of processorder

 void MatchEngine::matchbuy(Order sellorder)
{
    if(book.buyorder.empty())
        book.sellorder[sellorder.price].push(sellorder);
        return; 
}; //end of matchbuy


void MatchEngine::matchsell(Order sell)
{

};//end of matchsell