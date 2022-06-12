#include <iostream>
#include <vector>
using namespace std;

void subsequence(string str , string output , int  index , vector<string>& ans)
{
    // cout << "subse" <<endl;
    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude 
    cout << "exclude " <<output<< endl;
    subsequence(str,output  , index +1 , ans);
     
    char s = str[index];
    output = output + s ;
    cout << "include " <<output<< endl;
    subsequence(str , output ,index+1 , ans);

}

int main()
{
    vector <string> ans ;
    string str = "abc";
    string output = "";
    int index = 0 ;
    cout << str <<endl; 
    subsequence(str,output , index , ans); 

    for (int i = 0 ; i <= ans.size(); i++)
    {
        cout << ans[i] << endl ;
    }
    

}