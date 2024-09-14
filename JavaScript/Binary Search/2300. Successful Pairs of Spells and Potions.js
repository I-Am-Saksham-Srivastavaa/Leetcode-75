/* 2300. Successful Pairs of Spells and Potions
Difficulty: Medium
Submisson Link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/submissions/1376870084/
*/

var successfulPairs = function(spells, potions, success) {
	let res = [];
	potions.sort((a, b) => a - b);
	for (let i = 0; i < spells.length; i++) {
		let h = potions.length-1, l = 0, mid;
		while (l <= h) {
			mid = ~~(l + (h-l)/2);
			if (spells[i] * potions[mid] >= success) h = mid-1;
			else l = mid+1;
		}
		res[i] = potions.length-1 - h;
	}
	return res;
};