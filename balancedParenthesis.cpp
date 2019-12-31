#include <bits/stdc++.h>
using namespace std; 
bool Match(char st,char x)
{
	if (st == '[' && x == ']') { return 1; }
	else if (st == '(' && x == ')') {return 1;}
	else if (st == '{' && x == '}') {return 1;}
  return 0; 
}
int main()
{
	int t,i; 
	cin >> t;
	for (i=0;i<t;i++)
	{
		stack< char > s;
		char temp; 
	    int isBalanced = 1; 
		string str; 
		cin >> str; 
		for (char x : str)
		{
			if (x == ']' || x == '}' || x == ')')
			{
				if (s.empty())
				{
					isBalanced = 0; 
					break; 
				}
				else
				{
					if (s.top() == '[' || s.top() == '{' || s.top() == '(')
					{
					   temp = s.top(); s.pop(); 
					   if (Match(temp,x))
					   {
						   
					   }
					   else
					   {
						   isBalanced = 0; 
					break; 
					   }
					   	
					}
					else
					{
					  s.push(x); 	
					}
				}
			}
			else if (x == '[' || x == '{' || x == '(')
			{
				s.push(x); 
			}
			
			
  
	
	
		}
		
		 if (!s.empty()) { isBalanced = 0;}
	
	if (isBalanced) { cout <<"YES\n"; }
	else { cout <<"NO\n"; }
	
		
	}
	
	
	
	
	
	
	
	
	return 0; 
}
