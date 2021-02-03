#include<bits/stdc++.h>
using namespace std;

int main()
{
	char rev[10000];
	int leng;
	bool pal, mir;
	rev['A']='A';rev['E']='3';rev['3']='E';rev['H']='H';rev['I']='I';
	rev['J']='L';rev['L']='J';rev['M']='M';rev['O']='O';rev['S']='2';
	rev['2']='S';rev['T']='T';rev['U']='U';rev['V']='V';rev['W']='W';
	rev['X']='X';rev['Y']='Y';rev['Z']='5';rev['5']='Z';rev['1']='1';
	rev['8']='8';
	string s;
	string notpal=" -- is not a palindrome.";
	string regpal=" -- is a regular palindrome.";
	string mirstring=" -- is a mirrored string.";
	string mirpal=" -- is a mirrored palindrome.";
	while(cin>>s)
	{
		pal=true;
		mir=true;
		leng=s.length()-1;
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i]!=s[leng])
			{
				pal=false;
				break;
			}
			else leng--;
		}
		leng=s.length()-1;
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i]!=rev[s[leng]])
			{
				mir=false;
				break;
			}
			else leng--;
		}
		leng=s.length()/2;
		if(s.length()%2!=0)
		{
			if(s[leng]!=rev[s[leng]])
			{
				mir=false;
			}
		}
		if(pal && mir) cout<<s<<mirpal<<"\n\n";
		else if(pal && !mir) cout<<s<<regpal<<"\n\n";
		else if(!pal && mir) cout<<s<<mirstring<<"\n\n";
		else cout<<s<<notpal<<"\n\n";
	}

}
