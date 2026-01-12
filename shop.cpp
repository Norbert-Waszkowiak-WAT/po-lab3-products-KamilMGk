#ifndef SHOP
#define SHOP
#include <vector>
#include "product.cpp"
using namespace std;
class Shop{
    private:
    vector<Product*> products;
    public:
    void sellProduct(string name){
        for (auto it = products.begin(); it != products.end(); it++){
            if((*it) -> getName()==name){
                break;
            }
        }
    };
    void addProduct(Product* product){
    products.push_back(product);
    };
    string printProductList(){
    for (auto it = products.begin(); it != products.end(); it++){
    =output += (*it) -> getName() + "\n";
    }
    return output;
    }
    string printProductListByType(string type){
        string output;
        for (auto it = products.begin(); it != products.end(); it++){
        if((*it) -> getProductType()==type){
        output += (*it) -> getName() + "\n";
        }
    }
     return output;
    }
    string checkAvailability(string name){
        for(auto it = products.begin(); it != products.end(); it++) {
            if((*it) -> getName() == name) {
                return true;
    }
}
        }
return false;
    }
};
#endif