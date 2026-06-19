#include<iostream>
#include "order.h"
#include "OrderBook.h"
using namespace std;


OrderBook ob;
Order order;
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
            ob.addorder(order);
            cout<<"your order created successfully.."<<endl;
            break;

            case 2:
            cout <<"enter the order id :" <<" ";
            cin>> orderid;
            ob.deleteorder(orderid);
            cout<<"your order deleted successfully.."<<endl;
            break;

            case 3:
            ob.PrintBook();
            break;
            
            case 4:
            cout <<"enter the order id :" <<" ";
            cin>> orderid;
            ob.PrintOrder(orderid);
            break;

            default:
            cout <<"Invalid Operations!!!"<<endl;



        }
    }
     

    return 0;
}   
