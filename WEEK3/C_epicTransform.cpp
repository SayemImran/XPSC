#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<int,int> track_count;
        for(int i=1; i<=n; i++){
            int dt;
            cin>>dt;
            track_count[dt]++;
        }

        priority_queue<int> pq;
        for(auto [val, cnt] : track_count){
            pq.push(cnt);
        }

        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            int x,y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;

            if(x>0){
                pq.push(x);
            }
            if(y>0){
                pq.push(y);
            }
        }

        int ans = 0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}