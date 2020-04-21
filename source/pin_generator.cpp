 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
     ofstream file;
     file.open("pass.txt");
     int n;
     int n1;
     cout<<"Enter the length of the pin to be generated from :"<<endl;
     cin>>n1;
     cout<<"Enter the length of the pin to be generated to :"<<endl;
     cin>>n;
     if(n1==n)
     {
     cout<<"creating_pin_file..."<<endl;
     cout<<"pins_being_generated..."<<endl;
     cout<<"generating_random_combinations..."<<endl;
    for(long long int i=0; i < pow(10,n1); ++i)
    {
        //cout << setfill('0') << setw(n1) << i << endl;
        file << setfill('0') << setw(n1) << i<<endl;
    }
    cout<<"\nsession_is_half_completed..."<<endl;
    cout<<"\n\nfile is saved as pass.txt in the same directory\n";
    file.close();
    getchar();
     }
     else
     {
         cout<<"creating_pin_file..."<<endl;
     cout<<"pins_being_generated..."<<endl;
     cout<<"generating_random_combinations..."<<endl;
    for(long long int i=0; i < pow(10,n1); ++i)
    {
        //cout << setfill('0') << setw(n1) << i << endl;
        file << setfill('0') << setw(n1) << i<<endl;
    }
    cout<<"\nsession_is_half_completed..."<<endl;
    for(long long int i=0; i < pow(10,n); ++i)
    {
        //cout << setfill('0') << setw(n) << i << endl;
        if(i==(pow(10,n)-1))
        {
            file << setfill('0') << setw(n) << i;
        }
        else
        {
            file << setfill('0') << setw(n) << i << endl;
        }
    }
    cout<<"\n\nfile is saved as pass.txt in the same directory\n";
    file.close();
    getchar();
     }
 }