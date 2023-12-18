#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of holes/mice:";
    cin>>n;
    int mice[n];
    int holes[n];
    cout<<"Enter the positions of mice:";
    for(int i=0;i<n;i++){
        cin>>mice[i];
    }
    cout<<"Enter the positions of holes:";
    for(int i=0;i<n;i++){
        cin>>holes[i];
    }

    sort(holes,holes+n);
    sort(mice,mice+n);
    int maxDiff=0;
    for(int i=0;i<n;i++){
        if(maxDiff < abs(mice[i] - holes[i]))
        {
            maxDiff = abs(mice[i] - holes[i]);
        }
    }
    cout<<"The last mouse enters to the hole in " <<maxDiff<<" minutes";
    return 0;
}