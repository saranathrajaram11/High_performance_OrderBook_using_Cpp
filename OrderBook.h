#pragma once

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<chrono>
#include<cstdint>
#include "order.h"

using namespace std;

class OrderBook{
    public:
  std::map<int,vector<Order>> buyorder;
  std::map<int, vector<Order>> sellorder;

    void addorder(Order order)
    {
       if(order.side=="buy")
       {
        buyorder[order.price].push_back(order);
       }
        else if(order.side=="sell")
        {
        sellorder[order.price].push_back(order);
        }
    };

    void deleteorder(int orderid)
    {
         
        for(auto &pricelevel : buyorder)
        {
            for(auto it = pricelevel.second.begin(); it!=pricelevel.second.end();++it)
            {
                    if(orderid==it->O_ID)
                    {
                        pricelevel.second.erase(it);
                        return ;
                    }
            }
        }
        for(auto &pricelevel :sellorder)
        {
        for(auto it = pricelevel.second.begin(); it!=pricelevel.second.end();++it)
        {   
            if(orderid== it->O_ID)
            {
                    pricelevel.second.erase(it);
                    return ;
            }
        }
    }
    };


    void PrintOrder(int orderid)
    {
           for(auto &pricelevel : buyorder)
        {
            for(auto it = pricelevel.second.begin(); it!=pricelevel.second.end();++it)
            {
                    if(orderid==it->O_ID)
                    {
                    cout<< it->O_ID<<" ";
                    cout<< it->side<<" ";
                    cout<< it->price<<" ";
                    cout<< it->qty<<" ";
                    cout<<it->time <<" ";
                    return ;
                    }
                    
            }
            
        }
        
        for(auto &pricelevel :sellorder)
        {
        for(auto it = pricelevel.second.begin(); it!=pricelevel.second.end();++it)
        {   
            if(orderid== it->O_ID)
            {
                    cout<< it->O_ID <<" ";
                    cout<< it->side<<" ";
                    cout<< it->price<<" ";
                    cout<< it->qty<<" ";
                    cout<<it-> time<<" ";
                    return ;
            }
             
        }
        }
         
    };

    void PrintBook(){
        
            for(auto pricelevel : buyorder)
            {
        
                cout <<"price level : "<<pricelevel.first<<"--> ";
                for(auto j : pricelevel.second)
                {
                    cout<<"order id :"<<j.O_ID<<" ";
                    cout<<"side : "<<j.side<<" ";
                    cout<<"price : "<<j.price<<" ";
                    cout<<"qty : "<<j.qty<<" ";
                    cout<<"time : " <<j.time <<" "<<endl;
                }
            }
        
            for(auto pricelevel: sellorder)
            {

                 cout <<"price level : "<<pricelevel.first<<"--> "<<endl;
                for(auto j : pricelevel.second)
                {
                    cout<<"order id :"<<j.O_ID<<" ";
                    cout<<"side : "<<j.side<<" ";
                    cout<<"price : "<<j.price<<" ";
                    cout<<"qty : "<<j.qty<<" ";
                    cout<<"time : " <<j.time <<" "<<endl;
                }
            }
    };

};