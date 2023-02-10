//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    char x1[100], y1[100];
//    bool canConstruct(string ransomeNote, string magazine)
//    {
//        for (int i = 0; i < ransomeNote.length(); i++)
//        {
//            x1[i] = ransomeNote[i];
//        }
//        for (int i = 0; i < magazine.length(); i++)
//        {
//            y1[i] = magazine[i];
//        }
//        int counter = 0;
//        for (int i = 0;i < ransomeNote.length();i++)
//        {
//            for (int j = 0;j < magazine.length(); j++)
//            {
//                if (x1[i] == y1[j])
//                {
//                    y1[j] = '0';
//                    counter++;
//                    break;
//                }
//                else
//                {
//                    
//                }
//            }
//           
//        }
//        if (counter == ransomeNote.length())
//            return true;
//        else
//            return false;
//    }
//};
//    int main()
//    {
//        Solution h;
//        string ransomeNote = "aa";
//        string magazine = "ba";
//        cout<<h.canConstruct(ransomeNote, magazine);
//        ransomeNote = "IV";
//    }