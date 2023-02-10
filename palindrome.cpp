//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//            x = x + (-2 * x);
//        int y = x, i = 0;
//        int a[20];
//        while (y > 0)
//        {
//            int z = y % 10;
//            a[i] = z;
//            i++;
//            y = y / 10;
//        }
//        int k = i - 1;a
//            for (int j = 0;j < i / 2;j++)
//            {
//                if (a[k] != a[j])
//                {
//                    return false;
//                    break;
//                }
//                else
//                {
//                    k--;
//
//                }
//            }
//            return true;
//        
//
//    }
//};
//    int main()
//    {
//        Solution h;
//        cout<<h.isPalindrome(123);
//    }