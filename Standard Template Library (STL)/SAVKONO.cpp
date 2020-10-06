#include<bits/stdc++.h> 
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, z, input, count=0, flag=0, f;
        cin >> n >> z;
        priority_queue<int> q;
        for(int i=0; i<n; i++) {
            cin >> input;
            q.push(input);
        }
        while(q.top()!=0 && z>0) {
            count++;
            f = q.top();
            z -= f;
            q.pop();                
            q.push(f / 2);
        }
        if(z > 0)  
            cout << "Evacuate\n";
        else   
            cout << count << "\n";
    }    
    return 0;
}
