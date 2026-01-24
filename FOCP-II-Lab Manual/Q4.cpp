//Program to calculate the total bill amount after applying a 20% discount on the purchase
#include<iostream>
#include<iomanip>
int main(){
    int n, i, item_no;
    float quantity, unit_price, total_amount=0, discount, final_bill;

    std::cout<<"Enter number of items: ";
    std::cin>>n;

    for (i=1;i<=n;i++) {
        std::cout<<"Item "<<i<<" no.: ";
        std::cin>>item_no;        
        std::cout<<"Item "<<i<<" quantity: ";
        std::cin>>quantity;       
        std::cout<<"Item "<<i<<" unit price: ";
        std::cin>>unit_price;
        std::cout<<"\n";

        total_amount+=quantity*unit_price;
    }

    discount=0.20f*total_amount;
    final_bill=total_amount-discount;

    std::cout<<"\nTotal Amount: "<<total_amount;
    std::cout<<"\nDiscount (20%): "<<discount;
    std::cout<<"\nFinal Bill Amount: "<<final_bill;

    return 0;
}
