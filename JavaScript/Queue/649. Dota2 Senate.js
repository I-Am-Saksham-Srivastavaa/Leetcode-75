X/* 649. Dota2 Senate 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/dota2-senate/submissions/1387464690/ */

var predictPartyVictory = function(senate) {
    senate = senate.split('');
    while(senate.length) {
        var first = senate.shift();
        var len = senate.length;

        for(var i=0; i<len; i++) {
            if(first != senate[i]) {
                senate.splice(i, 1);
                senate.push(first);
                break;
            }
        }
        if(i == len) {
            return first == 'D' ? 'Dire' : 'Radiant';
        }
    }
};