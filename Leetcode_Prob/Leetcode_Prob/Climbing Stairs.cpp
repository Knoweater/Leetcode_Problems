//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int climbStairs(int n) {
//        int two = 2;
//        int three = 3;
//        int count = 0;
//
//
//        if (n % 2 == 0) {
//            while (two != n) {
//                two += 2;
//                count++;
//                
//            }
//            return count + 2;
//        }
//
//        while (three != n) {
//            three += 2;
//            count++;
//        }
//        return count + 2;
//    }
//};
//
//int main() {
//
//    Solution Sol;
//
//    int pop = 11;
//
//    cout << Sol.climbStairs(pop);
//
//	return 0;
//}
