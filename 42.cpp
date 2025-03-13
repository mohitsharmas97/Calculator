#include<iostream> 
#include<cmath>
 using namespace std;
      class displaymenu{
        public:
       void display(){
        cout<<"..............display menu................"<<endl;
        cout<<"1.Simple Calcultor"<<endl;
        cout<<"2. Scientific Calculator"<<endl;
        cout<<"enter your choice"<<endl;
       }

    
};
class simplecalc: public displaymenu{
    public:
    int n;
    void choice(){
        cout<<"1. Sum "<<endl;
        cout<<"2. Multiply"<<endl;
        cout<<"3. Divide"<<endl;
        cout<<"4. Remainder"<<endl;
        cout<<"5. subtraction"<<endl;
        cin>>n;
        int a,b;
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
        switch(n){
            case 1: 
            cout<<"Sum:"<<a+b<<endl;
            break;
            case 2:
             cout<<"multiply"<<a*b<<endl;
            break;
             case 3:
             cout<<" Divide="<<a/b;
            break;
             
            case 4:
            cout<<"remainder="<<a%b<<endl;
            break;
            
   cout<<"Sub:"<<a-b<<endl;
            break;        case 5:
            cout<<"Sub:"<<a-b<<endl;
            break;
            default:
            cout<<"......Invalid option ...Under construction......"<<endl;
            break;
        }

        }
};
class scientificcalc: public simplecalc{
    int c;
    public:
    void getdata(){
        cout<<".......Scientific calculator Operations......"<<endl;
        cout<<"1. Square root of no"<<endl;
        cout<<"Sine angle "<<endl;
        cin>>c;
        int num;
        cout<<"Enter number"<<endl;
        cin>>num;
        switch(c){
            case 1:
            cout<<"Square of"<<num<<"is"<<sqrt(num)<<endl;
            break;
            case 2:
            cout<<"2. Sin of "<<num<<"is"<<sin(num)<<endl;
            break;
            default:
            cout<<"invalid options"<<endl;
            break;
        }
    }
};
int main(){
    int o;
    scientificcalc m;
    m.display();
    cout<<"Enter choice";
    cin>>o;
    switch(o){
    case 1:
    m.choice();
    break;
    case 2:
    m.getdata();
    break;
    default:
    cout<<"Invalid"<<endl;

    }
    
    }


    //we use multilevel inheritance here...
