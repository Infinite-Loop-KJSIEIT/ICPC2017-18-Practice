#include <iostream>
using namespace std;

int main() {
    int a[100000], n, flag_0, flag_1, flag_neg1, flag_oth;
    int i, t;
    cin>>t;
    while(t--)
    {
        flag_0 = flag_neg1 = flag_1 = flag_oth = 0;
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i] == 0)
                ++flag_0;
            else if (a[i] == 1)
                ++flag_1;
            else if (a[i] == -1)
                ++flag_neg1;
            else
                ++flag_oth;
        }
        if (flag_oth > 1)
            cout<<"no\n";
        else
        {
            if (flag_oth && flag_neg1)
                cout<<"no\n";
            else if (flag_neg1 > 1 && flag_1 == 0)
                cout<<"no\n";
            else
               cout<<"yes\n";
        }
    }
	return 0;
}
