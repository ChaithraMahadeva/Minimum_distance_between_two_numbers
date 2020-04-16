#include <stdio.h>
#include <iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
using namespace std;
long long minDist(long long arr[], long long n, long long x, long long y);

int main() {
    long long t;
    cin >> t;
	if(t>=1 && t<=100)	//checks for the constraint
	{
    while (t--) {
        long long n;
        cin >> n;
		if(n>=1 && n<=105)	//checks for the constraint
		{
        long long a[n];
        for (long long i = 0; i < n; i++) cin >> a[i];
        long long x, y;
        cin >> x >> y;
		if(x>=1 && y>=1 && x<=105 && y<=105)	//checks for the constraint
		{
        cout << minDist(a, n, x, y) << endl;
		}
		}
    }
	}
    return 0;
}

long long minDist(long long arr[], long long n, long long x, long long y) {
    // add code here.
    int x1=-1,y1=-1;
    int diff = n;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x) 
        {
            x1=i;
            if(y1!=-1) diff=(min(abs(x1-y1),diff));
        }
        if(arr[i]==y) 
        {
            y1=i;
            if(x1!=-1) diff=(min(abs(x1-y1),diff));
        }
    }   
        if(diff!=n) return diff;
        
        return -1;
}