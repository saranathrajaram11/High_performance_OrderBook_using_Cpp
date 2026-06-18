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

    void addorder(Order order)
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

    void deleteorder(int orderid)
    {
         
        for(auto it = buyorder.begin(); it!=buyorder.end();++it)
        {
            if(orderid == it->O_ID)
                {
                    buyorder.erase(it);
                }
        }

        for(auto it = sellorder.begin(); it!=sellorder.end();++it)
        {
            if(orderid== it->O_ID)
            {
                    sellorder.erase(it);
            }
        }
    }
        void PrintOrder(int orderid)
        {
            for(auto it = buyorder.begin(); it!=buyorder.end();++it)
            {
                if(orderid == it->O_ID)
                {
                    cout<< it->O_ID;
                    cout<< it->side;
                    cout<< it->price;
                    cout<< it->qty;
                    return ;
                }
                else
                {
                cout<<"order not found!"<<endl;
                return;
                 }
            }

        for(auto it = sellorder.begin(); it!=sellorder.end();++it)
        {
            if(orderid== it->O_ID)
            {
                    cout<< it->O_ID;
                    cout<< it->side;
                    cout<< it->price;
                    cout<< it->qty;
                    return;
            }
            else
            {
                cout<<"order not found!"<<endl;
                return;
            }
        }


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