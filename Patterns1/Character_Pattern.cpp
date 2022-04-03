/*Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK  */
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  #include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int i,j,n,val;
    char c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        val=i;
        for(j=1;j<=i;j++)
        {
        c='A'+val-1;
        cout<<c;
        val=val+1;
        }
        cout<<endl;
    }
  
}
