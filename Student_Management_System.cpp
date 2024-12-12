#include<bits/stdc++.h>
using namespace std;
int n=0,i=0;
class student
{
public:
    string name,department,section;
    int id;
} arr[1000000];
void admission(int m)
{
    for(i=0; i<n; i++)
    {
        cout<<"      "<<i+1<<"------->"<<"ID: ";
        cin>>arr[i].id;
        cout<<"               Name: ";
        cin>>arr[i].name;
        cout<<"               Section: ";
        cin>>arr[i].section;
        cout<<"               Department: ";
        cin>>arr[i].department;
        cout<<endl;
        //system("cls");
        cout<<"==================="<<endl;

    }
}
void add_student()                                  //add a new student
{
top:
    system("cls");
    //for(i=0; i<n; i++)
    //{
        printf("Input Student data You Want To add: \n");
        cout<<"----->ID: ";
        cin>>arr[i].id;
        cout<<"----->Name: ";
        cin>>arr[i].name;
        cout<<"----->Section: ";
        cin>>arr[i].section;
        cout<<"----->Department: ";
        cin>>arr[i].department;
        cout<<endl;
        //system("cls");
        cout<<"==================="<<endl;
        n++;
        i++;
        cout<<"Student added successfully"<<endl<<endl;
       // break;

//}
    char c;
    cout<<"Want to add another student?"<<endl;
    cout<<"If yes press y button and hit enter(-_-)"<<endl;
    cout<<"If no press n button and hit enter(-_-)"<<endl;
    cin>>c;
    if(c=='y')
    {
        goto top;
    }
    else
    {
        system("pause");
    }



}
void show_student(int i)
{
                                                            //cout<<"***************Student Information***************"<<endl<<endl;
    cout<<arr[i].id<<endl;
    cout<<arr[i].name<<endl;
    cout<<arr[i].section<<endl;
    cout<<arr[i].department<<endl<<endl;
}
void show_all_student()
{
    for(int i=0; i<n; i++)
    {
                                                            //cout<<"***************Student Information***************"<<endl<<endl;
        show_student(i);
    }
}
void show_a_student()
{
                                                            //cout<<"***************Information Of A Student***************"<<endl<<endl;
    int id;
    cin>>id;
    for(i=0; i<n; i++)
    {
        if(arr[i].id==id)
        {
            show_student(i);
        }
        else{
            cout<<"Student Not Found"<<endl;
        }
    }
}
void see_department()
{
                                                            //cout<<"***************Student Information Of A Department***************"<<endl<<endl;
    string d;
    cin>>d;
    for(i=0; i<n; i++)
    {
        if(arr[i].department==d)
        {
            show_student(i);
        }
        else{
                        cout<<"Student Not Found"<<endl;
        }
    }
}
void see_section()
{
                                                            //cout<<"***************Student Information Of A Section***************"<<endl<<endl;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(arr[i].section==s)
        {
            show_student(i);
        }
        else{
                        cout<<"Student Not Found"<<endl;
        }
    }
}
int  Search(int sea)
{
    int f=0;
    for(i=0; i<n; i++)
    {
        if(sea==arr[i].id)
        {
            f=1;
            return i;
            break;
        }
    }
    if(f==0)
    {
        return 0;
    }

}
void Delete(int s)                                              //Delete a student
{
    for(int i=s; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Deleting Complete.\n";
}
void edit(int s)                                                //edit a student information
{
    string nam,dep,sec;
    cout<<"*********Possible Operations*********"<<endl<<endl;
    cout<<"*****Press 1 For Rename Name: *****\n";
    cout<<"*****Press 2 For Change Department: *****\n";
    cout<<"*****Press 3 For Change Section: *****\n";
    int x;
    cin>>x;
    if(x==1)
    {
        cout<<"NAME: ";
        cin>>nam;
        arr[i].name=nam;
    }
    else if(x==2)
    {
        cout<<"DEPERTMENT: ";
        cin>>dep;
        arr[i].department=dep;
    }
    else if(x==3)
    {
        cout<<"SECTION: ";
        cin>>sec;
        arr[i].section=sec;
    }
    cout<<"Editing Complete.\n";
}
void Sort()                                                 //sort the information
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i].id>arr[j].id)
            {
                temp=arr[i].id;
                arr[i].id=arr[j].id;
                arr[j].id=temp;
            }
        }
    }
}
int main()
{
    cout<<"Enter how may student do you want to admit?"<<endl;
    cin >> n;
    admission(n);
    while(1)
    {
        system("cls");
        cout<<"            =====================================Student Management System====================================="<<endl<<endl<<endl<<endl;
        cout<<"                                     ";
        cout<<"*********************************************************\n\n"<<endl;
        cout<<"                                           ";
        cout<< "* press 1 to add a student:                       *" <<endl;
        cout<<"                                           ";
        cout<< "* press 2 to see a student:                       *" <<endl;
        cout<<"                                           ";
        cout<< "* press 3 to see all student:                     *" <<endl;
        cout<<"                                           ";
        cout<< "* press 4 to see department:                      *" <<endl;
        cout<<"                                           ";
        cout<< "* press 5 to see section:                         *" <<endl;
        cout<<"                                           ";
        cout<< "* press 6 to delete a student information:        *" <<endl;
        cout<<"                                           ";
        cout<< "* press 7 to edit a student data:                 *" <<endl;
        cout<<"                                           ";
        cout<< "* press 8 to sort the data of the program:        *" <<endl;
        cout<<"                                           ";
        cout<< "* Press 9 to If You Want To Exit The Program      *\n"<<endl;
        cout<<"                                     ";
        cout<<"*********************************************************\n\n"<<endl;


        int x;
        cin>>x;
        if(x==1)
        {
            system("cls");
            //printf("Input Student data You Want To add: \n");

            add_student();
            //system("pause");

        }
        if(x==2)
        {
            system("cls");
            printf("Input Student ID You Want To See: \n");
            cout<<"------>ID: ";
            show_a_student();
            system("pause");
        }
        if(x==3)
        {
            system("cls");
            show_all_student();
            system("pause");
        }

        if(x==4)
        {
            system("cls");
            printf("Input Students Department You Want To See: \n");
            cout<<"------->Department: ";

            see_department();
            system("pause");
        }

        if(x==5)
        {
            system("cls");
            printf("Input Students Section You Want To See: \n");
            cout<<"------>Section: ";

            see_section();
            system("pause");
        }

        if(x==6)
        {
            system("cls");
            printf("Input Student ID You Want To Delete: \n");
            int a,p;
            cout<<"ID: ";
            cin>>a;
            p=Search(a);
            Delete(p);
            system("pause");
        }
        if(x==7)
        {
            system("cls");
            cout<<"Input Student ID You Want To Edit\n";
            cout<<"ID: ";
            int a,p;
            cin>>a;
            p=Search(a);
            edit(p);
            system("pause");
        }
        if(x==8)
        {
            //system("cls");
            Sort();
            cout<<"Sorting Complete.\n";
            system("pause");
        }
        if(x==9)
        {
            system("cls");
            break;
        }
    }


}

