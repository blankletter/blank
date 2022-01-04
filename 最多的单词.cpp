#include<iostream>
#include<string>
#include<vector>
#define word_max 100
using namespace std;
void getResult(string s)
{undefined
 int len=s.size();
 vector<string> svec;
 for(int i=0;i<len;i++)
 {undefined
  char word[100]={0};
  int j=0;
  while(isalpha(s[i]))
  {undefined
   word[j++]=s[i];
   i++;
  }
  word[j]='\0';
  svec.push_back(word);
 }
 for(int i=0;i<svec.size();i++)
  cout<<svec[i]<<" ";
 cout<<endl;

 int num=0;
 int min=word_max;
 int max=0;
 string w1;
 string w2;
 for(int i=0;i<svec.size();i++)
 {undefined
  for(int j=0;j<svec.size();j++)
  {undefined
   if(svec[i]==svec[j])
    num++;
  }
  if(num>max)
  {undefined
   max=num;
   w1.assign(svec[i]);
  }
  if(num<min)
  {undefined
   min=num;
   w2.assign(svec[i]);
  }
  num=0;
 }
 cout<<w1<<","<<w2<<endl;

}
void main()
{undefined
 string s;
 getline(cin,s);
 getResult(s);
}
