//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	int lengthOfLastWord(string s) {
//		int count = 0;
//
//		for (int i = s.length() - 1; i >= 0; i--) {
//			if (s[i] != ' ' && s[i] != '\0') {
//				while (i > -1 && s[i] != ' ' && s[i] != '\0') {
//					count++;
//					i--;
//				}
//			}
//			if (count > 0) break;
//		}
//
//		return count;
//	}
//};
//
//
//int main() {
//	Solution Sol;
//
//	string str = "   fly me   to   the moon  ";
//	
//	
//	cout << Sol.lengthOfLastWord(str);
//
//
//	return 0;
//}
