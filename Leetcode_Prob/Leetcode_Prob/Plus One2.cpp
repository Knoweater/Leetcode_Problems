//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        string str;
//        int number = 0;
//        int  i = 0;
//        for (int Integer : digits) {
//            str += to_string(Integer);
//        }
//        number = stoi(str);
//        number++;
//        str = to_string(number);
//        
//        
//        for (int i = str.length() - 1; i > 0; i--) {
//            digits[i] = number % 10;
//            number /= 10;
//        }
//        
//        for (int i = 0; i < digits.size(); i++) {
//            cout << digits[i];
//        }
//        
//
//        return digits;
//    }
//};
//
//
//int main() {
//    Solution Sol;
//    vector<int> IN_vec = { 9 };
//    string str;
//    int num = 0;
//   
//    for (int Integer : IN_vec) {
//        str += to_string(Integer);
//    }
//    
//    
//    num = stoi(str);
//    
//    Sol.plusOne(IN_vec);
//
//	return 0;
//}