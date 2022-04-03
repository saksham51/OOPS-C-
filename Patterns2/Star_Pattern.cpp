/*Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******                */
------------------------------------------------------------------------------------------------------------------------------------------------------------------
  #include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,i,j,s;
    int d=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";

        }
        for(j=1;j<=d;j++)
        {
           cout<<"*";
        }
        d=d+2;
        cout<<endl;
    }
}
