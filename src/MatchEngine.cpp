
//custom headers 
#include "../include/MatchingEngine.h"
#include "../include/OrderBook.h"
//must included headers
#include<iostream>
using namespace std;

void  MatchEngine::processorder(Order order)
{

}; //end of processorder

 void MatchEngine::matchbuy(Order incomingbuy)
{
        while(incomingbuy.qty>0)
        {
            auto sell_it = book.sellorder.begin();
         
            if(incomingbuy.price!=sell_it->first)
              return;

            if(book.sellorder.empty())
            {
                book.addorder(incomingbuy);
                return;
            } //if sellbook is empty means the incomingbuy should store
            
        
            if(incomingbuy.price>=sell_it->first) // comparing of price of incomingbuy with sells.first(pricelevel)
            {
            cout<<"trade happended"<<endl;
            Order &current=sell_it->second.front(); //access of orderof sell for qty match
        
              
                if(current.qty>incomingbuy.qty)
                { // if sellqty is bigger then match with incoming.qty
                    current.qty-=incomingbuy.qty;  //reduce the qty of current oder and update on original book
                    return;
                }
              
                else if(current.qty==incomingbuy.qty)
                {
                    current.qty-=incomingbuy.qty;
                    sell_it->second.pop();
                    return;
                }
              
                else if (current.qty<incomingbuy.qty)
                {
                    auto remain = incomingbuy.qty- current.qty;
                    incomingbuy.qty=remain;
                    book.addorder(incomingbuy);
                }
            }
            
            else
            {
                book.addorder(incomingbuy);
                return;
            }
        }
    
}; //end of matchbuy


void MatchEngine::matchsell(Order incomingsell)
{

};//end of matchsell