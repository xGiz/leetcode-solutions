/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */


int maxProfit(int* prices, int pricesSize){
    if (pricesSize < 2) {
        return 0;
    }

    for (int i = pricesSize - 1; i > 0; i--) {
        prices[i] = prices[i] - prices[i - 1];
    }

    int maxProfit = INT_MIN;
    int tempProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        tempProfit += prices[i];

        if (tempProfit < 0) {
            tempProfit = 0;
        }
        if (tempProfit > maxProfit) {
            maxProfit = tempProfit;
        }
    }
    return maxProfit;
}



