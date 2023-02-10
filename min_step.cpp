//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//	int counter = 0, c, c1, a[5000], x1, a1[5000], c2;
//	cin >> c;
//	c1 = c;
//	c2 = c;
//	do
//	{
//
//		cin >> x;
//		a[counter] = x;
//		x1 = x;
//		c--;
//		counter++;
//	} while (c > 0);
//	counter = 0;
//	do
//	{
//
//		cin >> x;
//		a1[counter] = x;
//		c1--;
//		counter++;
//	} while (c1 > 0);
//	int counter1 = 0;
//	int check = 0;
//	int i = 1;
//	if (a[0]<1||c2>5000)
//	{
//		cout << "invalid";
//	}
//	else {
//		while (i < c2)
//		{
//			if (a[0] == a[i])
//			{
//				i++;
//			}
//			else if (a[0] <= a[i] - a1[i])
//			{
//				a[i] = a[i] - a1[i];
//				check++;
//			}
//			else if (a[0] > a[i] - a1[i])
//			{
//				counter1 = 1;
//				break;
//			}
//		}
//		if (counter1 == 1)
//		{
//			cout << "-1" << endl;
//		}
//		else
//		{
//			cout << check;
//		}
//	}
//}