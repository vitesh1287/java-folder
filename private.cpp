#include<iostream>//used in cin input or cout output uses
#include<string>// store in char an array name 
using namespace std;// used in std::cout, std::cin

class student{
    private:
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    
    float ctotal() {// used in function call inside class for private method
        total=eng + math + science;
        return total;
        
    }
    public:
    void takedata() {// used for input data
        cout<<"enter a admission number: ";
        cin>>admno;
        cin.ignore();//यह cin के बाद getline() चलाने के लिए इनपुट बफर को क्लियर करता है

        cout<<"enter a student name: ";
        cin.getline(sname,20);////यह cin के बाद getline() चलाने के लिए इनपुट बफर को क्लियर करता है
        cin>>sname;
        cout<<"enter a english marks: ";
        cin>>eng;
        cout<<"enter a maths marks: ";
        cin>>math;
        cout<<"enter a science marks: ";
        cin>>science;
        ctotal();
    }
    void showdata(){
        cout<<"\n student details" << endl;
        cout<<"admission number: "<<admno << endl;
        cout<<"name: "<<sname << endl;
        cout<<"english marks: "<<eng << endl;
        cout << "Math Marks: " << math << endl;
        cout<<"science marks: "<<science << endl;
        cout<<"total marks: "<<total<< endl;
    }
        
    };
    int main() {
        student student;
        student.takedata();// used input data
        student.showdata();// used display data
        return 0;
    }
        
    
    

