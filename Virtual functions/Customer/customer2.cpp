#include<iostream>
#include "customer.h"
#include <vector>
#include<iterator>
 int main()
 {
     std::vector<CustomerBase> customer;
     customer.push_back(CustomerBase("ww","dd","hh",89.00));
     customer.push_back(CustomerBase("ww","dd","hh",67.00));
     customer.push_back(CustomerBase("ww","dd","hh",45.00));
     customer[0].credit(345);
     customer[0].makeCall(6778);
     std::vector<CustomerBase>::iterator it;
     for (it = customer.begin() ; it != customer.end(); ++it)
        std::cout<<it.dispay();
 }