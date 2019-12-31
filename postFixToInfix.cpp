#include <bits/stdc++.h>
using namespace std; 
int P(char x)
{
	if (x == '/' || x=='*') { return 4;  }
	else if (x == '+' || x == '-') { return 0;}
}
int main()
{
	int t,i; 
	cin >> t; 
	for (i=0; i < t; i++)
	{
		stack< char >s;
		string str; 
		cin >> str; 
		for (char x : str)
		{
			if (x >= '0' && x <= '9'){ cout << x; }
			else if (x == '+' ||x == '-' || x == '*' ||x == '/' ) {
				if (s.empty()) { s.push(x); }
				else { if ((P(x) - P(s.top())) > 0) { s.push(x); } 
					else { while(!s.empty() && (P(x) - P(s.top())) <= 0){
						  cout << s.top(); s.pop();
						}
						s.push(x);  
						} 
					}
			}
		}
		
		while(!s.empty())
		{
			cout << s.top(); s.pop(); 
		}
	}
	return 0; 
}
