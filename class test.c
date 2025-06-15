#include<iostream>
#include<string>
using namespace std;
class test {
    private:
    int testcode;
    string discription;
    int nocandidate;
    int centerreqd;
    int calcntr(){
        return (nocandidate / 100) + 1;
    }
    public: 
    
    void schedule(){
        cout<<"enter a test code: ";
        cin>>testcode;
        cin.ignore();
        cout<<"enter a discription: ";
        getline(cin, discription);
        cout<<"enter a name of candidate: ";
        cin>>nocandidate;
        cout<<"enter a center required: ";
        cin>>centerreqd;
        
        centerreqd=calcntr();
    }
    void disptest(){
        cout<<"\n test details\n";
        cout<<"test code: "<<testcode<<endl;
        cout<<"discription: "<<discription<<endl;
        cout<<"name of candidate: "<<nocandidate<<endl;
        cout << "Centers Required: " << centerreqd << endl;
    }
};
int main(){
    test exam;
    exam.schedule();
    exam.disptest();
    return 0;
}
    