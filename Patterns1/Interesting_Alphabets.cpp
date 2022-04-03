/*Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  #include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int i,j,n;
    cin>>n;
    char c;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           c='A'+n-i+j-1;
           cout<<c;
        }
        cout<<endl;
    }
}
