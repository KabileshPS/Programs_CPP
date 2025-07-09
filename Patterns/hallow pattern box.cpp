 #include<iostream>
using namespace std;

int main() {
    int n;
cin>>n;
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < n; j++) 
        { // columns

            
            if (i==0||j==0||i==n-1||j%2==0||i%2==0) 
            {
                cout << "* ";
            }
            
            
            else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}
