/* 
 ������?�Ŀ�Ͱ汾�����ο� ������˵����
 ��ͨ�����������ӡ�������н���������С����ڿ���̨�鿴�����Ϣ
 int main() ��ں��������޸ģ��Է�ִ��ʧ��
*/
/*
 Please refer to the "Environmental Notes" for the libraries and versions that can be introduced.
 Please print the results of your code using the output method and check the output on the console after "run".
 Don't modify the int main() entry function as it may fail to execute.
*/ 

#include <iostream>
#include <assert.h>
#include <math.h>

using namespace std;

int main()
{
  /* ���ڴ˴���д����
     please write your code here
  */ 

  int n;
  cin>>n;
  int gr[n];
  int tr[n*n*n][3];
  int ln=0;
  for(int i=0;i<n;i++)
    {
      cin>>gr[i];
    }

  for(int i=n-1;i>=0;i--)
    {
      for(int j=n-1;j>=0&&j!=i;j--)
        {
          for(int k=n-1;k>=0&&k!=i&&k!=j;k--)
            {
              if(gr[i]+gr[j]+gr[k]==10)
              {
                tr[ln][0]=gr[i];
				tr[ln][1]=gr[j];
				tr[ln][2]=gr[k];
				ln+=1;
              }
            }
        }
    }
    
    cout<<ln<<endl;
    for(int i=ln-1;i>=0;i--)
    {
    	cout<<tr[i][0]<<','<<tr[i][1]<<","<<tr[i][2]<<endl;
	}
    
  return 0;
}

