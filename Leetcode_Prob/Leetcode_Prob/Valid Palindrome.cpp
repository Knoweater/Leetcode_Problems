//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(string s) {
//
//        string pr;
//        int p = 0;
//        for (int i = 0; i < s.length(); i++) {
//
//            if (isalpha(s[i]) || isdigit(s[i])) {
//                pr += tolower(s[i]);
//            }
//
//        }
//
//        for (int j = pr.length() - 1; j != -1; j--, p++) {
//            if (pr[j] != pr[p]){
//                return false;
//            }
//
//        }
//
//        return true;
//    }
//};
//
//int main() {
//
//    Solution Sol;
//
//    string str = "A man, a plan, a canal: Panama";
//    
//    cout << Sol.isPalindrome(str);
//
//	return 0;
//}