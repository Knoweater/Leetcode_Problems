//#include <iostream>
//
//using namespace std;
//
////FOURTH WORKING LEETCODE SOLUTION ROMAN TO INTEGER
//class Solution {
//public:
//    int romanToInt(string s) {
//        int i = 0;
//        int number = 0;
//        int count = 0;
//        int sum = 0;
//        while (s[i]) {
//            count++;
//            i++;
//        }
//        i = 0;
//        int* mas = new int[count];
//
//        while (count--) {
//            switch (s[i]) {
//            case 'I':
//                mas[i] = 1;
//                break;
//            case 'V':
//                mas[i] = 5;
//                break;
//            case 'X':
//                mas[i] = 10;
//                break;
//            case 'L':
//                mas[i] = 50;
//                break;
//            case 'C':
//                mas[i] = 100;
//                break;
//            case 'D':
//                mas[i] = 500;
//                break;
//            case 'M':
//                mas[i] = 1000;
//                break;
//            default:
//                break;
//            }
//            i++;
//        }
//        count = 0;
//        while (count < i) {
//            if (count + 1 >= i) {
//                sum += mas[count];
//                return sum;
//            }
//            if (mas[count] < mas[count + 1]) {
//                sum += mas[count + 1] - mas[count];
//                count += 2;
//            }
//            
//            else {
//                sum += mas[count];
//                count++;
//            }
//        }
//
//        delete[] mas;
//
//        return sum;
//    }
//};
//
//
//int main() {
//
//    Solution Sol;
//
//    string MySTR = "MCMXCIV";
//
//    cout << Sol.romanToInt(MySTR);
//
//	return 0;
//}