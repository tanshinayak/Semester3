#include<iostream>
#include<conio.h>
#include"stack.cpp"
using namespace std;
void matchparenthesis(string s,int n)
{   char ele;
   int failure=0;
	Stack<char> ob(n);
	int i=0;
	while(s[i]!='\0')
	{
		 if( (s[i]=='(')||(s[i]=='{')||(s[i]=='['))
		       ob.push(s[i]);
		 else if((s[i]==')')||((s[i])=='}')||(s[i]==']'))
		      {  
		        ele=ob.pop();
		         
		        if(s[i]==')')
			    	if (ele!='(')
					  {
					  	failure = 1;
						break;}
						
		         if(s[i]=='}')
		      	  if(ele!='{')
		      	  { failure=1;
		      	    break;
		      	  }
		      	  
		      	 if(s[i]==']')
		      	if( ele=='[')
		      	  { failure=1;
		      	    break;
		      	  }
		      }
		      
		 else break;
		 i++;     
	}
	
	if(failure==1)
	{ 
	  cout<<"parenthesis doesnot match"<<endl;
	}
	else if(ob.isempty())
	  cout<<"parenthesis match"<<endl;
	  else cout<<"It doesnot"<<endl;

	

	
}
int main()
{    string str;
     cout<<"Enter a stack"<<endl;
     getline(cin,str);
     int l=str.length();
     matchparenthesis(str,l);
     getch();
     return 0;
}

