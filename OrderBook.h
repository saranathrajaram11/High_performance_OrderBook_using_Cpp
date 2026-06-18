#pragma once

#include<iostream>
#include<vector>
#include<algorithm>
#include "order.h"

using namespace std;


class OrderBook{
    public:
    vector<Order> buyorder;
    vector<Order> sellorder;

    void addOrder(Order order)
    {
       if(order.side=="buy")
       {
        buyorder.push_back(order);
       }
        else if(order.side=="sell")
        {
        sellorder.push_back(order);
        }
    };

    void deletorder(Order order)
    {
        
    };

    void PrintBook(){
        
            for(auto i : buyorder)
            {
                cout<<"Order ID : "<< i.O_ID <<" ";
                cout<<"side : " <<i.side <<" ";
                cout<<"qty : " <<i.qty <<" ";
                cout<<"price : " <<i.price <<" "<<endl;
            }
        
            for(auto i: sellorder)
            {
                cout<<"Order ID : "<< i.O_ID <<" ";
                cout<<"side : " <<i.side <<" ";
                cout<<"qty : " <<i.qty <<" ";
                cout<<"price : " <<i.price <<" "<<endl;
            }
    };

};