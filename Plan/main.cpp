#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    pair<int,int>arr[100001];
    for(int i=0;i<n;i++){cin>>arr[i].first;arr[i].second=i+1;}
    sort(arr,arr+n);
    while(q--)
    {int k;
    cin>>k;
        int start =0,endd=n-1,mid;
        bool f=1;
        while(start<=endd)
        {mid=(start+endd)/2;
            if(arr[mid].first==k){f=0;cout<<"Yes"<<" "<<arr[mid].second<<'\n';break;}
            else if(arr[mid].first>k){endd=mid-1;}
            else if (arr[mid].first<k)start=mid+1;
        }
        if(f){cout<<"No"<<'\n';}
    }
    return 0;
}
