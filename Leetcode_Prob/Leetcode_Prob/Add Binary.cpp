//#include <iostream>
//#include <string>
//#include <typeindex>
//using namespace std;
//
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        
//        int first_str = a.length();
//        int second_str = b.length();
//        int iter = 0;
//        string sum;
//
//        int min = first_str < second_str ? min = first_str : min = second_str;
//        int max = first_str > second_str ? max = first_str : max = second_str;
//
//        for (int i = min - 1; i >= 0; i--) {
//            ++iter;
//            if (a[a.length() - iter] == '0' && b[b.length() - iter] == '0') {
//                sum = b[b.length() - iter] + sum;;
//            }
//            if (a[a.length() - iter] == '1' && b[b.length() - iter] == '0') {
//                sum = a[a.length() - iter] + sum;
//            }
//            if (a[a.length() - iter] == '0' && b[b.length() - iter] == '1') {
//                sum = b[b.length() - iter] + sum;
//            }
//            if (a[a.length() - iter] == '1' && b[b.length() - iter] == '1') {
//                sum = '0' + sum;
//                ++iter;
//                if (iter > min && (a[a.length() - iter - 1] == '1' && b[b.length() - iter - 1] == '1')) {
//                    sum = '1' + sum;
//                    break;
//                }
//                while (a[a.length() - iter] == '1' && b[b.length() - iter] == '1') {
//                    sum = '1' + sum;
//                    iter++;
//                }
//
//            }
//                
//            
//        }
//
//        for (; iter < max; ++iter) {
//            if (a.length() > b.length()) {
//                sum = a[a.length() - iter] + sum;
//            }
//            else {
//                sum = b[b.length() - iter] + sum;
//            }
//        }
//
//
//
//        return sum;
//    }
//};
//
//int main() {
//
//    Solution Sol;
//
//    string first = "11";
//    string second = "11";
//    
//    
//    
//    cout << Sol.addBinary(first, second);
//
//	return 0;
//}