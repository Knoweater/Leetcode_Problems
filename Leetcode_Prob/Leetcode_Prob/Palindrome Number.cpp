//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////SECOND WORKING LEETCODE SOLUTION IF ISPALINDROM
//class Solution2 {
//public:
//	bool isPalindrome(int x) {
//		string str = to_string(x);
//		int i = 0;
//		int rev_i = 1;
//		int count = 0;
//		bool ifPali = true;
//		while (str[i]) {
//			count++;
//			i++;
//		}
//		i = 0;
//		while (ifPali) {
//			while (i < count) {
//				if (str[i] == str[count - rev_i]) {
//					i++;
//					rev_i++;
//				}
//				else {
//					return false;
//				}
//			}
//			ifPali = false;
//		}
//		return true;
//	}
//};
//
//
//
//int main() {
//
//	Solution2 Sol;
//
//	int x = 12;
//	string str = to_string(x);
//	int i = 0;
//	int count = 0;
//	//cout << str;
//	/*while (str[i]) {
//		count++;
//		i++;
//	}
//	cout << count << endl;*/
//
//
//	cout << Sol.isPalindrome(x);
//
//	return 0;
//}