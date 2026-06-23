#pragma once
#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#include<chrono>
#include<cstdint>
#include "order.h"

using namespace std;

class OrderBook{
    public:
  std::map<int,queue<Order>> buyorder;
  std::map<int, queue<Order>> sellorder;

    void addorder(Order order)
    {
       if(order.side=="buy")
       {
        buyorder[order.price].push(order);
       }
        else if(order.side=="sell")
        {
        sellorder[order.price].push(order);
        }
    }; //end of add order

    void deleteorder(int orderid)
    {
         for(auto &pricelevel : buyorder)
            {
                cout <<"price level : "<<pricelevel.first<<"--> ";
                auto tempqueue = pricelevel.second;
        
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    if(orderid ==currentorder.O_ID){
                    pricelevel.second.pop();
                    }
                    return;
                }
            }
        
            for(auto &pricelevel: sellorder)
            {

                 cout <<"price level : "<<pricelevel.first<<"--> "<<endl;
                 auto tempqueue =pricelevel.second;
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    if(orderid ==currentorder.O_ID)
                    {
                    pricelevel.second.pop();
                    }
                    return;
                }
            }
    }; // end of delete order


    void PrintOrder(int orderid)
    {

    for(auto &pricelevel : buyorder)
            {
                cout <<"price level : "<<pricelevel.first<<"--> ";
                auto tempqueue = pricelevel.second;
        
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    if(orderid ==currentorder.O_ID)
                    {
                    cout<<"order id :"<<currentorder.O_ID<<" ";
                    cout<<"side : "<<currentorder.side<<" ";
                    cout<<"price : "<<currentorder.price<<" ";
                    cout<<"qty : "<<currentorder.qty<<" ";
                    cout<<"time : " <<currentorder.time <<" "<<endl;
                    return;
                    }
                tempqueue.pop();
                }
            }
        
            for(auto &pricelevel: sellorder)
            {

                 cout <<"price level : "<<pricelevel.first<<"--> "<<endl;
                 auto tempqueue =pricelevel.second;
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    if(orderid ==currentorder.O_ID)
                    {
                    cout<<"order id :"<<currentorder.O_ID<<" ";
                    cout<<"side : "<<currentorder.side<<" ";
                    cout<<"price : "<<currentorder.price<<" ";
                    cout<<"qty : "<<currentorder.qty<<" ";
                    cout<<"time : " <<currentorder.time <<" "<<endl;
                    return ;
                    }
                tempqueue.pop();
                    
                }
            }
    }; //end of printorder

    void PrintBook(){
        
            for(auto pricelevel : buyorder)
            {
                cout <<"price level : "<<pricelevel.first<<"--> ";
                auto tempqueue = pricelevel.second;
        
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    cout<<"order id :"<<currentorder.O_ID<<" ";
                    cout<<"side : "<<currentorder.side<<" ";
                    cout<<"price : "<<currentorder.price<<" ";
                    cout<<"qty : "<<currentorder.qty<<" ";
                    cout<<"time : " <<currentorder.time <<" "<<endl;
                    tempqueue.pop();
                    
                }
            }
        
            for(auto pricelevel: sellorder)
            {

                 cout <<"price level : "<<pricelevel.first<<"--> "<<endl;
                 auto tempqueue =pricelevel.second;
                while(!tempqueue.empty())
                {
                    auto currentorder=tempqueue.front();
                    cout<<"order id :"<<currentorder.O_ID<<" ";
                    cout<<"side : "<<currentorder.side<<" ";
                    cout<<"price : "<<currentorder.price<<" ";
                    cout<<"qty : "<<currentorder.qty<<" ";
                    cout<<"time : " <<currentorder.time <<" "<<endl;
                    tempqueue.pop();
                }
            }
    }; // end of printbook

};