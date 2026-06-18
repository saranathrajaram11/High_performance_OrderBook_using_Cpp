#pragma once

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
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

    // void deleteorder(int orderid)
    // {
         
    //     for(auto it = buyorder.begin(); it!=buyorder.end();++it)
    //     {
    //         if(orderid == it->O_ID)
    //             {
    //                 buyorder.erase(it);
    //             }
    //     }

    //     for(auto it = sellorder.begin(); it!=sellorder.end();++it)
    //     {
    //         if(orderid== it->O_ID)
    //         {
    //                 sellorder.erase(it);
    //         }
    //     }
    // }
    //     void PrintOrder(int orderid)
    //     {
    //         for(auto it = buyorder.begin(); it!=buyorder.end();++it)
    //         {
    //             if(orderid == it->O_ID)
    //             {
    //                 cout<< it->O_ID;
    //                 cout<< it->side;
    //                 cout<< it->price;
    //                 cout<< it->qty;
    //                 return ;
    //             }
    //             else
    //             {
    //             cout<<"order not found!"<<endl;
    //             return;
    //              }
    //         }

    //     for(auto it = sellorder.begin(); it!=sellorder.end();++it)
    //     {
    //         if(orderid== it->O_ID)
    //         {
    //                 cout<< it->O_ID;
    //                 cout<< it->side;
    //                 cout<< it->price;
    //                 cout<< it->qty;
    //                 return;
    //         }
    //         else
    //         {
    //             cout<<"order not found!"<<endl;
    //             return;
    //         }
    //     }


    // };

    void PrintBook(){
        
            for(auto pricelevel : buyorder)
            {
        
                cout <<"price level : "<<pricelevel.first<<"--> ";
                for(auto j : pricelevel.second)
                {
                    cout<<"order id :"<<j.O_ID<<" ";
                    cout<<"side : "<<j.side<<" ";
                    cout<<"price : "<<j.price<<" ";
                    cout<<"qty : "<<j.qty<<" "<<endl;
                }
            }
        
            for(auto pricelevel: sellorder)
            {

                 cout <<"price level : "<<pricelevel.first<<"--> "<<endl;
                for(auto j : i.second)
                {
                    cout<<"order id :"<<j.O_ID<<" ";
                    cout<<"side : "<<j.side<<" ";
                    cout<<"price : "<<j.price<<" ";
                    cout<<"qty : "<<j.qty<<" "<<endl;
                }
            }
    };

};