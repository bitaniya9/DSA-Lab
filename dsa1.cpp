// Online C++ compiler to run C++ program online
//DSA assignment
#include <iostream>
#include <string>
#define taxrate 0.15

using namespace std;
int main() {
    cout<<"This program is designed to analyze product sales and inventory for a store"<<endl;
    cout<<"C++ is a compiled language"<<endl;
    string productName;         //productName
    int productCategory{};      //list initialization,productCategory
    int initialAmount(initialAmount);    //direct initiallization,initial inventory quantity
    float unitPrice;        //productPrice
    int itemsSold;         //number of items sold
    
    int inventoryNow;       //assignment after declaration,new inventory
    float totalSalesAmount; //total Sales amount
    string inventoryStatus;
    float finalCost;
    
    //Type Deduction to Create Extra Helper Variables
    auto copyTotalSalesAmount=totalSalesAmount;
    cout<<copyTotalSalesAmount<<endl;
    decltype(initialAmount) originalAmount=unitPrice*itemsSold;
    
    const float taxRate=0.15f;
    float totalCost=0.0f;
    
    //Perform Calculations
    inventoryNow=initialAmount-itemsSold;
    totalSalesAmount=itemsSold*unitPrice;
    float overallCost=0.0f;
    cout<<"Enter the amount of number of items sold: ";
    cin>>itemsSold;
    cout<<"/nReciept"<<endl; 
    cout<<"------------------------"<<endl; 
    
    for(int i=1;i<=itemsSold;i++){
        cout<<"Enter the product name"<<i<<": ";//product name input
        cin>>productName;
        cout<<"Enter price of the "<<productName<<": ";
        cin>>unitPrice;
        cin.ignore();
        overallCost+=unitPrice;
        cout<<"Enter productCategory:\t";
        cin>>productCategory;
        
    //Implement Flow Control
        if(productCategory<=5){  
                cout<<"productCategory is within the specified domain"<<endl;
                switch(productCategory){
                    case 1:
                        cout<<"Category 1: Electronics"<<endl;
                        break;
                    case 2:
                        cout<<"Category 2:Groceries"<<endl;
                        break;
                    case 3:
                        cout<<"Category 3: Clothing"<<endl;
                        break;
                    case 4: 
                        cout<<"Category 4: Stationery"<<endl;
                        break;
                    case 5: 
                       cout<<"Category 5: Miscellaneous"<<endl;
                        break;
                }       
        }else {
            cout<<"Product category should be within the numbers 1-5, please try again:\t";
           cin>>productCategory;
        }
    cout<<productName<<":....... $"<<fixed<<unitPrice<<endl;
    cout<<"Tax rate"<<"......."<<taxrate;
    overallCost+=unitPrice;
    totalCost+=taxrate*unitPrice;
    finalCost=totalCost+overallCost;
    cout<<".............."<<finalCost<<endl;
    }
    
    
    //Summary
    cout<<"Enter initial inventory quantity:\t";
    cin>>initialAmount;
    cin.ignore();
    cout<<"Initial inventory quantity"<<initialAmount<<"."<<endl;
    cout<<inventoryNow<<endl;
    
    // Conditional (Ternary) Operator
    inventoryNow>10? inventoryStatus="Sufficient":inventoryStatus="Low inventory";
        cout<<inventoryStatus;
        cout<<"-----------"<<endl;
        
    cout<<taxRate<<endl; //const variable
    cout<<taxrate<<endl; //processor constant
    cout<<totalSalesAmount<<endl;
    cout<<copyTotalSalesAmount<<endl;
    cout<<originalAmount<<endl;
    
    return 0;
    }