//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//
//	return 0;
//}

//4A-WaterMalone

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//	int w{};
//	cin >> w;
//
//	if (w % 2 == 0 && w != 2)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//	return 0;
//}

//71A-Way Too Long Words

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//	int t{}, len{};
//	char str[100] = { 0 };
//	cin >> t;
//
//	while (t--)
//	{
//		cin >> str;
//		len = strlen(str);
//		if (len > 10)
//		{
//			cout << str[0] << len - 2 << str[len - 1] << endl;
//		}
//		else
//		{
//			cout << str << endl;
//		}
//	}
//}

//T231A-Team

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//	int t{}, arr[3] = { 0 }, count{ 0 }, ans{ 0 };
//	cin >> t;
//	while (t--)
//	{
//		count = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> arr[i];
//			count += arr[i];
//		}
//		if (count >= 2)
//		{
//			ans++;
//		}
//	}
//	cout << ans << endl;
//}

//158A-Next Round

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//
//	int t{}, k{}, a[50] = { 0 }, cnt{};
//	cin >> t >> k;
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < t; i++)
//	{
//		if (a[i] >= a[k - 1] && a[i] >= 1)
//		{
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}

//50A-Domino piling

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//	int m{}, n{};
//	cin >> m >> n;
//
//	cout << (m * n) / 2 << endl;
//
//	return 0;
//}

//282A-Bit++

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl    "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll      long long
//
//int main() {
//	PAIN;
//	int t{}, ans{ 0 };
//	string str = { 0 };
//	cin >> t;
//
//	while (t--)
//	{
//		cin >> str;
//		if (str[0] == '+' || str[2] == '+')
//		{
//			ans++;
//		}
//		else if (str[0] == '-' || str[2] == '-')
//		{
//			ans--;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

//112A-Petya and Strings

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//	char s1[100] = { 0 }, s2[100] = { 0 };
//	int str1{}, str2{}, str{};
//	cin >> s1;
//	cin >> s2;
//
//	for (int i = 0; i < strlen(s1); i++)
//	{
//		s2[i] = tolower(s2[i]);
//		s1[i] = tolower(s1[i]);
//
//		if (s1[i] > s2[i])
//		{
//			str1++;
//		}
//		if (s1[i] < s2[i])
//		{
//			str2++;
//		}
//		if (s1[i] == s2[i])
//		{
//			str++;
//		}
//	}
//	if (str1 < str2)
//	{
//		cout << "-1" << endl;
//	}
//	if (str2 < str1)
//	{
//		cout << "1" << endl;
//	}
//	if (str > str1 || str > str2)
//	{
//		cout << "0" << endl;
//	}
//
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//	string s1{}, s2{};
//	int str1{}, str2{}, str{};
//	cin >> s1;
//	cin >> s2;
//
//	for (int i = 0; i < s1.length(); i++)
//	{
//		s2[i] = tolower(s2[i]);
//		s1[i] = tolower(s1[i]);
//	}
//
//	cout << s1.compare(s2) << endl;
//
//	return 0;
//}

//339A-Helpful Maths

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//
//	string s{}, s1{};
//	cin >> s;
//
//	int len = s.length();
//
//	for (int i = 0; i < len; i += 2)
//	{
//		s1 += s[i];
//	}
//
//	sort(s1.begin(), s1.end());
//
//	int len2 = s1.length();
//
//	for (int i = 0; i < len2; i++)
//	{
//		if (i != (len2 - 1))
//		{
//			cout << s1[i] << "+";
//		}
//		else
//		{
//			cout << s1[i] << endl;
//		}
//	}
//
//	return 0;
//}

//281A - Word Capitalization

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//
//	string s{};
//	cin >> s;
//
//	s[0] = toupper(s[0]);
//	cout << s << endl;
//
//	return 0;
//}

//116A - Tram

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//	int a{}, b{}, n{}, max{}, pass{}, rem{};
//	cin >> n;
//	while (n--)
//	{
//		cin >> a >> b;
//		pass = a + max;
//		rem = pass - b;
//		if (rem < 0)
//		{
//			max = 0;
//		}
//		else
//		{
//			max = rem;
//		}
//	}
//	cout << max;
//	return 0;
//}

//263A - Beautiful Matrix

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//	int arr[5][5]{};
//	int x{}, y{}, ans{};
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] == 1)
//			{
//				x = i + 1;
//				y = j + 1;
//			}
//		}
//	}
//
//	x = abs(3 - x);
//	y = abs(3 - y);
//
//	ans = x + y;
//	cout << ans;
//
//	return 0;
//}

//266A - Stones on the Table

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//	int n{}, count{};
//	cin >> n;
//	char arr[n]{};
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int j = 0; j < n; j++)
//	{
//		if (arr[j] == arr[j + 1])
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

//236A - Boy or Girl (not done)

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//
//int main() {
//	PAIN;
//
//	string name{};
//	int count{};
//	cin >> name;
//
//	sort(name.begin(), name.end());
//
//	for (int i = 0; i < name.length(); i++)
//	{
//		if (name[i] != name[i + 1])
//		{
//			count++;
//		}
//	}
//	if (count % 2 == 0)
//	{
//		cout << "CHAT WITH HER!" << endl;
//	}
//	else
//	{
//		cout << "IGNORE HIM!" << endl;
//	}
//
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;

#define endl   "\n"
#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	PAIN;

	string name{};
	int count{};
	cin >> name;

	for (int i = 0; i < name.length(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (name[i] != name[j])
			{
				count++;
			}
		}
	}
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;
string a;
int pas = 1, num;
int main() {
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				num++;
			}
		}
		if (num == 0) {
			pas++;
		}
		num = 0;
	}
	if (pas % 2 == 0) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
}

//791A - Bear and Big Brother

//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl   "\n"
//#define PAIN   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define ll     long long
//
//int main() {
//	PAIN;
//
//	int a{}, b{}, count{};
//	cin >> a >> b;
//
//	while (true)
//	{
//		a *= 3;
//		b *= 2;
//		count++;
//		if (a > b)
//		{
//			cout << count << endl;
//			return 0;
//		}
//	}
//}