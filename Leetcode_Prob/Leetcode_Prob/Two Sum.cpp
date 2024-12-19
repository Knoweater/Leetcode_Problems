//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////MY FIRST LEETCODE SOLUTION SEARCH INSERT POSITION
//class Solution1 {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int j = nums.front();
//		int count = 0;
//		if (target > nums.back()) {
//			return nums.size();
//		}
//		if (target < nums.front()) {
//			return 0;
//		}
//		else {
//			for (int i = 0; i < nums.size(); i++) {
//				if (nums[i] == target) {
//					return i;
//				}
//				if (i == nums.size() - 1 && nums[i] != target) {
//					for (int k = 0; k < nums.size();) {
//						if (nums[k] != j && j < target) {
//							count++;
//							j++;
//						}
//
//						else {
//							k++;
//							j++;
//						}
//					}
//					break;
//
//				}
//			}
//		}
//
//		return target - nums.front() - count;
//	}
//};
//
//
//
//
//int main() {
//
//	Solution1 Sol;
//	vector<int> Nums = { 3, 6 ,7 ,8, 10 };
//
//	cout << Sol.searchInsert(Nums, 5);
//
//	return 0;
//}