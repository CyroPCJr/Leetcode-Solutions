class Solution {
    fun maxProfit(prices: IntArray): Int {
        var minProfit = Int.MAX_VALUE
        var maxProfit = 0

        prices.forEach { price->
            if (price < minProfit) {
                minProfit = price
            } else if (price - minProfit > maxProfit) {
                maxProfit = price - minProfit
            }
        }
        return maxProfit
    }
}