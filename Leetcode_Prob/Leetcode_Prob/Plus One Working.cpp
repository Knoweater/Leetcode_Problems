//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        int index = 1;
//        if (digits[digits.size() - index] == 9 && digits.size() == 1) {
//            digits[digits.size() - index] = 1;
//            digits.resize(digits.size() + 1);
//            digits[digits.size() - index] = 0;
//        }
//        else {
//            for (int i = 0; i < digits.size(); i++) {
//                if (i == digits.size() - 1 && digits[digits.size() - index] == 9) {
//                    digits[digits.size() - index] = 1;
//                    digits.resize(digits.size() + 1);
//                    digits[digits.size() - 1] = 0;
//                    break;
//                }
//                if (digits[digits.size() - index] == 9) {
//                    digits[digits.size() - index] = 0;
//                    index++;
//                }
//                if (digits[digits.size() - index] != 9) {
//                    digits[digits.size() - index] += 1;
//                    break;
//                }
//            }
//        }                       
//         return digits;
//    }
//};
//
//
//int main() {
//    Solution Sol;
//    vector<int> IN_vec = { 9,9 };
//   
//    
//    Sol.plusOne(IN_vec);
//
//	return 0;
//}