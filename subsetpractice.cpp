#include<iostream>
#include<vector>
using namespace std ; 

void subsets(vector<int> nums , vector<int> output ,int index ,vector<vector <int>>& ans )
{
    //base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return ;
    }
    // exclude case 
    cout<< "exclude " << nums[index]<< endl;
    subsets(nums, output , index +1 , ans );

    cout<< "include " << nums[index]<< endl;
    // include case
    int element  = nums[index];
    output.push_back(element);
    subsets(nums,output,index+1 ,ans);

}
int main()
{
    vector <int> nums ;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    vector<vector <int>> ans ; 
    vector<int> output;
    int index = 0;

    subsets(nums , output , index , ans);

    cout << "power set :" << endl ;

    for (int i = 0 ; i < ans.size(); i++ )
    {
        for (int j = 0 ; j < ans[i].size(); j++)
        {
            cout<< ans[i][j] << " " ; 
        }       cout << endl ; 
    }
}