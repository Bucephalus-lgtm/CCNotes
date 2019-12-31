#include <bits/stdc++.h>
using namespace std; 
int top = -1; 
bool isEmpty()
{
	if (top == -1) { return 1; }
  return 0; 
}
void Push(int data,int s[])
{
	++top; 
	s[top] = data; 
	
	
}
void Pop()
{
	--top; 
}

int Top(int s[])
{
	return s[top]; 
}
int main()
{
	int size,temp; 
	cin >> size; 
	int s[size]; 
	for (int i=0; i < size; i++)
	{ 
		cin >> temp; 
		Push(temp,s); 
	}
	
	while (!isEmpty())
	{
		cout << Top(s) <<" "; 
		Pop(); 
	}
	
	return 0; 
}
