//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    void fizzBuzz(int n)
//    {
//        string  h[100];
//        cout << "[";
//        for (int i = 1;i <= n;i++)
//        {
//            if (i % 3 == 0&& i % 5 == 0)
//            {
//                cout << "\"";
//                h[i] = "FizzBuzz";
//                h[i] = "FizzBuzz";
//                cout << h[i];
//                cout << "\"";
//                cout << ",";
//            }
//            else if (i % 5 == 0)
//            {
//                cout << "\"";
//                h[i] = "Buzz";
//                cout<<"Buzz";
//                cout << h[i];
//                cout << "\"";
//                cout << ",";
//            }
//            else if (i % 3 == 0)
//            {
//                cout << "\"";
//                h[i] = "Fizz";
//                cout << h[i];
//                cout << "\"";
//                cout << ",";
//            }
//            else
//            {
//                cout << "\"";
//                
//                string x = to_string(i);
//                h[i] = x;
//                cout << i;
//                cout << "\"";
//                if(i!=n)
//                cout << ",";
//            }
//        }
//        cout << "]";
//    }
//};
//    int main()
//    {
//        Solution h;
//        h.fizzBuzz(15);
//       
//    }