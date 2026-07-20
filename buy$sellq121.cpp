#include <iostream>
#include <vector>
using namespace std;
int main(){
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int bestprice=prices[0];
        for(int i=0;i<n;i++){
            if(bestprice<prices[i]){
                maxprofit=max(maxprofit,prices[i]-bestprice);
            }
            bestprice=min(bestprice,prices[i]);
        }
        return maxprofit;
    }
};
return 0;
}