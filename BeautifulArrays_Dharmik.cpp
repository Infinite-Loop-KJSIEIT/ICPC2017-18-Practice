#include <iostream>
using namespace std;

int main() {
    int a[100000], n, f_0, f_1, f_neg1, f_oth;
    int i, t;
    cin>>t;
    while(t--)
    {
        f_0 = f_neg1 = f_1 = f_oth = 0;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i] == 0)
                ++f_0;
            else if (a[i] == 1)
                ++f_1;
            else if (a[i] == -1)
                ++f_neg1;
            else
                ++f_oth;
        }
        if (f_oth > 1)
            cout<<"no\n";
        else
        {
            if (f_oth && f_neg1)
                cout<<"no\n";
            else if (f_neg1 > 1 && f_1 == 0)
                cout<<"no\n";
            else
               cout<<"yes\n";
        }
    }
	return 0;
}
