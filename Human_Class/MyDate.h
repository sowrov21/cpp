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
