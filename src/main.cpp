#include<iostream>
#include<chrono>
#include "../include/order.h"
#include "../include/OrderBook.h"
#include "../include/MatchingEngine.h"
using namespace std;

OrderBook ob;
Order order;
MatchEngine engine(ob);
int orderid,op;

int main()
{
    while(true)
    {
        cout<<"enter the op number : ";
        cin >>op;
        switch(op)
        {

            case 1:
            cout<<"O_ID : ";
            cin >>order.O_ID;
            cout<<"side : ";
            cin >>order.side;
            cout<<"price : ";
            cin >>order.price;
            cout<<"qty : ";
            cin >>order.qty;
            cout<<"time : system captured "<<endl;
            order.time=chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now().time_since_epoch()).count();
            if (order.side == "buy")
            {
                engine.matchbuy(order);
            }
            else
            {
                ob.addorder(order);
            }
            cout<<"your order created successfully.."<<endl;
            break;

            case 2:
            cout <<"enter the order id :" <<" ";
            cin>> orderid;
            ob.deleteorder(orderid);
            cout<<"your order deleted successfully.."<<endl;
            break;
            
            case 3:
            cout <<"enter the order id :" <<" ";
            cin>> orderid;
            ob.PrintOrder(orderid);
            break;

            case 4:
            ob.PrintBook();
            break;

            default:
            cout <<"Invalid Operations!!!"<<endl;

        } //end of swich
    } //end of while 

    return 0;
}   // end of main