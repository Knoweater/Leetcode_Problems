//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//        int i = 0;
//        int j = 0;
//        int ii = 0;
//        int ret = 0;
//
//        while (haystack[i]) {
//            if (needle[j] == haystack[i]) {
//                ii = i;
//                while (j < needle.length()) {
//                    if (needle[j] != haystack[ii]) {
//                        j = 0;
//                        ret = -1;
//                        break;
//                    }
//                    if (needle[j] == haystack[ii]) {
//                        ret = 0;
//                       
//                        ii++;
//                    }
//                    if (j + 1 >= needle.length())
//                        return i;
//                    j++;
//                }
//            }
//            i++;
//        }
//        return -1;
//    }
//};
//
//
//int main() {
//
//    Solution Sol;
//    
//    string firstSTR = "a";
//
//    string secondSTR = "a";
//    
//    cout << Sol.strStr(firstSTR, secondSTR);
//
//	return 0;
//}