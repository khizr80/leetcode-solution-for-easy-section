//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    void romanToInt(string s) {
//        char a[100];
//        for (int i = 0; i < s.length(); i++) {
//            a[i] = s[i];
//        }
//        int i = 0, sum = 0;
//        while (a[i] != '\0')
//        {
//            if (a[i] == 'I')
//                if (a[i + 1] == 'V')
//                {
//                    sum = sum + 4;
//                    i++;
//                }
//                else if (a[i + 1] == 'X')
//                {
//                    sum = sum + 9;
//                    i++;
//                }
//                else
//                    sum = sum + 1;
//            else if (a[i] == 'V')
//                sum = sum + 5;
//            else if (a[i] == 'X')
//                if (a[i + 1] == 'L')
//                {
//                    sum = sum + 40;
//                    i++;
//                }
//                else if (a[i + 1] == 'C')
//                {
//                    sum = sum + 90;
//                    i++;
//                }
//                else
//                    sum = sum + 10;
//            else if (a[i] == 'L')
//                sum = sum + 50;
//            else if (a[i] == 'C')
//                if (a[i + 1] == 'M')
//                {
//                    sum = sum + 900;
//                    i++;
//                }
//                else if (a[i + 1] == 'D')
//                {
//                    sum = sum + 400;
//                    i++;
//                }
//                else
//                    sum = sum + 100;
//            else if (a[i] == 'D')
//                sum = sum + 500;
//            else if (a[i] == 'M')
//            {
//                sum = sum + 1000;
//            }
//            i++;
//
//        }
//        cout << sum;
//    }
//};
//int main()
//{
//    Solution h;
//    string x = "IV";
//    h.romanToInt(x);
//}