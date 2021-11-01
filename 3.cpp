# include <iostream>
using namespace std;

int main ()
{
    int n,i,j;
    
	cout<<"-----Program Soal No.3-----"<<endl;
    cout<<"Input (Angka Genap)=  ";
	cin>>n;

    if(n > 0)
    {
        for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if ((i==0) || (i==n-1))
                {
                    cout<<"+ ";
                }
                else if ((j==2) || (j==5) ||(j==8))
                {
                	cout<<"+ ";
				}
                else if (n%2 == 1)
                    {
                        cout<<"= ";
                    }
                else
                {
                    cout<<"= ";
                }
            }
            cout<<endl;
        }

    }
return 0;
}
