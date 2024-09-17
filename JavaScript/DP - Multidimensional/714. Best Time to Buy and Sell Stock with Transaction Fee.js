/* 714. Best Time to Buy and Sell Stock with Transaction Fee
Difficulty: Medium
Submission Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1390155846/
*/

var pp = (a,i,buy,f,m) => {
    if(i>=a.length) return 0;
    let h = m.has(i) ? m.get(i) : new Map();
    if(h.has(buy)) {
        return h.get(buy);
    }

    let k =0;
    if(buy) {
        k = Math.max(pp(a,i+1,0,f,m)-a[i]-f,  pp(a,i+1,1,f,m));
    } else {
        k= Math.max(a[i]+pp(a,i+1,1,f,m), pp(a,i+1,0,f,m));
    }

    h.set(buy,k);
    m.set(i,h);
    return k;
}
var maxProfit = function (a, f) {
    let m = new Map();
    return pp(a,0,1,f,m);
};