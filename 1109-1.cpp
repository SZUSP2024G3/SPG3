/* 
 可以引?的库和版本相关请参考 “环境说明”
 请通过输出方法打印代码运行结果，“运行”后在控制台查看输出信息
 int main() 入口函数请勿修改，以防执行失败
*/
/*
 Please refer to the "Environmental Notes" for the libraries and versions that can be introduced.
 Please print the results of your code using the output method and check the output on the console after "run".
 Don't modify the int main() entry function as it may fail to execute.
*/ 

#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
  /* 请在此处书写代码
     please write your code here
  */ 
  int n;
  cin>>n;
  string str;
  string wd[n];
  cin>>str;
  for(int i=0;i<n;i++)
    {
      cin>>wd[i];
    }

  string strp=str;
  bool ck[strp.length()];
  for(int i=0;i<strp.length();i++)
    {
      ck[i]=false;
    }

  for(int i=0;i<n;i++)
    {
      for(int j=0;j<strp.length()-wd[i].length()+1;j++)
        {
          if(strp[j]==wd[i][0])
          {
            bool temp=true;
            for(int k=0;k<wd[i].length();k++)
              {
                if(strp[j+k]!=wd[i][k])
                {
                  temp=false;
                }
              }
            if(temp==true)
            {
              for(int k=0;k<wd[i].length();k++)
              {
                ck[j+k]=true;
              }
            }
          }
        }
      }

  bool t=true;
  for(int i=0;i<strp.length();i++)
    {
      if(ck[i]==false)
      {
        t=false;
      }
    }

  if(t==false)
  {
  	cout<<"false"<<endl;
  }
  else
  {
  	cout<<"true"<<endl;
  }
  
  return 0;
}
