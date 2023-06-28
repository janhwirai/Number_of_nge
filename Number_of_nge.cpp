#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int q, vector<int> &indices){
        //write your code here
        vector<int>res;
        int count=0;
        for(int i=0;i<q;i++){
            int ind=indices[i]; //For particular index
            for(int j=ind+1;j<n;j++){
                if(arr[ind]<arr[j]){
                    count++;
                }
            }
            res.push_back(count);    //Count for the current number
            count=0;    //For next query
        }
        return res;
       
    }

};


int main(){
    int t;
    cout<<"\nEnter testcases";
    cin >> t;

    while(t--){
       int n;
       cout<<"\nEnter the size of array";
       cin >> n;
       vector<int> v1(n);
       for(int i = 0;i<n;i++) cin >> v1[i];
        int q;
        cout<<"\nEnter the queries";
        cin >> q;
        vector<int> v2(q);
        for(int i = 0;i<q;i++) cin >> v2[i];

        Solution obj;
        vector<int> ans = obj.count_NGE(n,v1,q,v2);

        for(int i = 0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}