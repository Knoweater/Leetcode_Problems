//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
////THIRD WORKING LEETCODE SOLUTION LONGEST COMMON PREFIX
//class Solution3 {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		string sos;
//		int count = 0;
//		bool OMG = true;
//		
//		int i = 0;
//		while (strs[0][i]) {
//			count++;
//			i++;
//		}
//		for (int j = 0; j < count; j++) {
//			for (int i = 1; i < strs.size(); i++) {
//				if (strs[i][j] == '\0') return sos;
//
//				if (strs[0][j] == strs[i][j]) {
//					OMG = true;
//				}
//				
//				else {
//					OMG = false;
//					break;
//				}
//			}
//			if (!OMG) break;
//			sos += strs[0][j];
//		}
//		
//		
//		return sos;
//	}
//
//};
//
//
//int main() {
//	string home = "home";
//	Solution3 Sol;
//
//	vector <string> smth = { "cir","car" };
//	
//	cout << Sol.longestCommonPrefix(smth);
//
//	return 0;
//}