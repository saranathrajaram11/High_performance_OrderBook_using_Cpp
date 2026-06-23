#include<iostream>
#include<chrono>
#include "../include/OrderBook.h"
#include "../include/order.h"
using namespace std;


int main()
{
    OrderBook ob;

auto start=std::chrono::high_resolution_clock::now();
for(int i=0;i<100000;i++)
{
    Order o;
    o.O_ID=i;
    o.side="Buy";
    o.price=100+(i % 50); 
    o.qty=100;
    ob.addorder(o);
}

auto end=std::chrono::high_resolution_clock::now();

auto total=std::chrono::duration_cast<chrono::nanoseconds>(end-start);

cout<<"total time :"<<total.count()<<endl;


    return 0;

}


