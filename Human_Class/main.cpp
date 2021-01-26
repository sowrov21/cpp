#include <iostream>

using namespace std;

class MyDate{

     int day,month,year;

     public: AssignDate( int d, int m, int y)
     {
         day=d;
         month=m;
         year=y;
         PrintDate();
     }

    public: void PrintDate()
     {
         cout<<day<<"/"<<month<<"/"<<year<<endl;
     }

};

class Human : public MyDate
{
public:
    int id;
    string name;
    MyDate dateOfBirth;
    int bPH, bPL;      ///bloodPressureHigh = bPH bloodPressureLow = bPL
    string gender;
    int heartRate;

    public: Human();


     public: Human(int i, string n, MyDate dob, int H, int L, string gen, int hr)
    {
        id=i;
        name=n;
        dateOfBirth=dob;
        bPH=H;
        bPL=L;
        gender=gen;
        heartRate=hr;


    }
/*
    public: AssignValue(int i, string n, MyDate dob, int H, int L, string gen, int hr)
    {
        id=i;
        name=n;
        dateOfBirth=dob;
        bPH=H;
        bPL=L;
        gender=gen;
        heartRate=hr;


    }
*/
   /* void UserInput()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Please, Put Health Information: "<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"Patient ID: "<<endl;
        cin>>id;
        cout<<"Patient Name: "<<endl;
        cin>>name;
        cout<<"Date Of Birth: "<<endl;
        //cin>>dateOfBirth;
        cout<<"Blood Pressure High: "<<endl;
        cin>>bPH;
        cout<<"Blood Pressure Low: "<<endl;
        cin>>bPL;
        cout<<"Gender( Hints: Male/Female):  "<<endl;
        cin>>gender;
        cout<<"Heart Rate: "<<endl;
        cin>>heartRate;
    }
*/

    void ShowAll()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Health Information Of "<<name<<": "<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        //cout<<"Date Of Birth: "<< PrintDate()<<endl;
        cout<<"Blood Pressure High: "<<bPH<<endl;
        cout<<"Blood Pressure Low: "<<bPL<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Heart Rate: "<<heartRate<<endl;
        BloodPressureCheck();
    }

     void BloodPressureCheck()
     {
         if((gender=="Male") && (bPH>=110 && bPH<=120) && (heartRate>=80 && heartRate<=90) ||
            (gender=="Female") && (bPH>=100 && bPH<=110) && (heartRate>=70 && heartRate<=80))
         {
             cout<<"Overall Health Condition: Healthy !"<<endl;
         }
         else
         {
             cout<<"Overall Health Condition: Unhealthy !"<<endl;
         }
     }



};

Human :: Human()
{
    cout<<"Default Constructor"<<endl;
    ///Only Constructor fulfilled at outside of class.No return type( void, int, etc) is allowed here.
}
int main()
{
    //cout << "Hello world!" << endl;

    MyDate dateOne,dateTwo;
    dateOne.AssignDate(25,06,1986);
    dateTwo.AssignDate(14,10,1962);

    Human humanOne(18,"John",dateOne,115,85,"Male",85),humanTwo;
    Human *h1 = new Human;
    Human *h2 = new Human(19,"Jack",dateTwo,150,83,"Male",79);
    ///Right way to passing values in parameterize constructor in C++
    //Human();
    //humanOne.AssignValue(18,"John",dateOne,115,85,"Male",85);
    //humanTwo.AssignValue(19,"Jack","14/02/1990",150,83,"Male",79);
    humanOne.ShowAll();
    h2->ShowAll();  ///Used (->) as h2 pointer type object

    return 0;
}
