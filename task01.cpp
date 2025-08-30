#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int numsubjects;
    cout<<"enter total number of subjects:"<<endl;
    cin>>numsubjects;


    float totalgradepoints=0.0;
    float totalcredits=0.0;
    for(int i=1;i<=numsubjects;i++){
       float gradepoint,credit;
       cout<<"enter grade point for subject:"<<i<<":"<<endl;
       cin>>gradepoint;
       cout<<"enter credit hours for subject:"<<i<<":"<<endl;
       cin>>credit;
       totalgradepoints += gradepoint*credit;
       totalcredits += credit;
    }
    //now to find CGPA by using formula: 
    float cgpa=totalgradepoints/totalcredits;
     cout<<fixed<< setprecision(2);
     cout<<"your CGPA is:"<<cgpa<<endl;
    
    //optional grade classification
    if(cgpa>=9.0)
    cout<<"grade:Outstanding"<<endl;
    else if(cgpa>=8.0)
    cout<<"grade:Excellent"<<endl;
    else if(cgpa>=7.0)
    cout<<"grade:Very good"<<endl;
    else if(cgpa>=6.0)
    cout<<"grade:Good"<<endl;
    else if(cgpa>=5.0)
    cout<<"grade:Average"<<endl;
    else
    cout<<"grade:Needs improvement"<<endl;
    return 0;
}


     

    


