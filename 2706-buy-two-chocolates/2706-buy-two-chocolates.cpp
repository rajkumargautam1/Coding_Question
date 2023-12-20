class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minprice= INT_MAX;
        int secminprice =INT_MAX;
        
        for(int price : prices){
            if(price <minprice){
                secminprice =minprice;
                minprice =price;
                
            }else{
                secminprice =min(secminprice, price);
            }
        }
        if(minprice + secminprice> money){
            return money;
        }
        return money -(minprice +secminprice);
        
    }
};