#include <iostream>

using namespace std;

int main()
{
    cout<< "What is the size of you one of the columns of your square matrix?"<<endl;
    int num;
    cin >>num;
    cout << "Enter the values of the elements in your array"<<endl;
    int arr[num][num];
    for(int i =0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<< "This is your matrix"<<endl;

    for(int i =0; i <num; i++)
    {
        cout<< "|";

        for(int j =0; j< num; j++)
        {
            cout<<arr[i][j];
            if(j<num-1)
            {
                cout<<",";
            }
        }
        cout<<"|"<<endl;
    }
    int sum=0;
    for(int i=0; i<num;i++)
    {
        for(int j=0; j<num; j++)
        {
            if(i==j)
            {
                sum= sum + arr[i][j];
            }
        }
    }
    cout<<"The trace of your matrix is: "<<sum;

    int check1=0;
    int check2 =0;
    for(int k=0; k< num; k++)
    {
    check1=0;
    for(int i =0; i < num; i++)
    {
        for(int j = i+1; j<num;j++ )
        {
            if(arr[k][i]==arr[k][j])
            {
                check1++;
            }
        }
    }
    if(check1!=0)
    {
        check2++;
    }
    }

    cout<<endl<<"The number of rows with duplicate elements is: "<<check2;


    int check3=0;
    int check4 =0;
    for(int k=0; k< num; k++)
    {
    check3=0;
    for(int i =0; i < num; i++)
    {
        for(int j = i+1; j<num;j++ )
        {
            if(arr[i][k]==arr[j][k])
            {
                check3++;
            }
        }
    }
    if(check3!=0)
    {
        check4++;
    }
    }

    cout<<endl<<"The number of columns with duplicate elements is: "<<check4;

    return 0;
}
