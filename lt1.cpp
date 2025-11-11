#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 class Solve{
    public:
    vector<int>Sumofnums(vector<int>&num,int target)
    {
        unordered_map<int,int>checked;
        for(int i=0;i<num.size();i++)

        {
            int requiredelm=target-num[i];
            if(checked.find(requiredelm)!=checked.end())
        {
            return{checked[requiredelm],i};
            }
            checked[num[i]]=i;
        }
        return {};
    }

        };
        int main()
        {
            Solve s1;
            vector<int>num={2,7,9,11};
            int target=9;
            vector<int>results=s1.Sumofnums(num,target);
            cout<<"["<<results[0]<<","<<results[1]<<"]"<<endl;
        return 0;
        }
