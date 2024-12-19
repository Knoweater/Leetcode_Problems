//#include <iostream>
//#include <assert.h>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) {
//		int count = 0;
//		for (int number : nums)
//			if (number == val)
//				count++;
//
//		for (int i = 0; i < count; i++) {
//			nums.erase(find(nums.begin(), nums.end(), val));
//		}
//
//		return nums.size();
//    }
//};
//
//
//int main() {
//	
//	
//
//	vector<int> Mynums = { 3,2,2,3 };
//
//	Mynums.erase(find(Mynums.begin(), Mynums.end(), 3));
//	for (int i : Mynums) {
//		cout << i << " ";
//	}
//	cout << Mynums.size();
//	return 0;
//}