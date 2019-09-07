#include <iostream>
using namespace std;

int main()
{
    int tmonth, im;
    double mpay, cv, owes;
    while (cin >> tmonth >> mpay >> cv >> im && tmonth>-1)
    {
        int m[im];
        double r[im], tr, iv;
        for (int i = 0; i < im; i++)
        {

            cin >> m[i] >> r[i];
        }

        owes = cv;
        tr = r[0];
        cv += mpay;
        cv -= (cv * tr);
        cout<<"Month 0"  <<", Rate: "<<tr<<", CV: "<<cv<<", owes: "<<owes<<endl;
        int count = 1, mr = 1;
        while (cv < owes)
        {

            owes -= mpay;

            if (count == m[mr])
            {
                tr = r[mr];
                mr++;
            }


            cv -= (cv * tr);
            cout<<"Month " << count <<", Rate: "<<tr<<", CV: "<<cv<<", owes: "<<owes<<endl;
            count++;
        }

        if (count > 1)
            cout << count << " months" << endl;
        else
            cout << count << " month" << endl;
    }

    return 0;
}
