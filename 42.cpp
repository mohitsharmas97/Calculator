#include<iostream> 
#include<cmath>
 using namespace std;


// class simplecalc{
//     int a,b;
//     float add,sub,mul,div,rem;
   
//     public:
//     void input(){
//     cout<<"Enter first no"<<endl;
//     cin>>a;
//     cout<<"Enter second no"<<endl;
//     cin>>b;
//     }
//     int sum(){
//         return a+b;
//     }
//     int sub(){
//         return a-b;
// }
//    int mul(){
//     return a*b;
//    }
//    int div(){
//     if(b!=0){
//         return a/b;
//     }
//    }
//    int rem(){
//     return a%b;
//    }


//     // void perform(){
//     //      add= a+b;
//     //      sub=a-b;
//     //      mul=a*b;
//     //      div =a/b;
//     //      rem=a%b;
//     // }
//     void output(){
      

//         cout<<"Sum="<<add<<endl;
//         cout<<"Subtraction="<<sub<<endl;
//         cout<<"Multiply"<<mul<<endl;
//         cout<<"Divide"<<div<<endl;
//         cout<<"Remainder="<<rem<<endl;
//     }
// };
// class scientificalc : public simplecalc{

//     int n;
//     public:
    
//     void indata(){
//         cout<<"Enter value of theta"<<endl;
//         cin>>n;
// }
//     void outdata(){ 
//         cout<<"Cos"<<n<<"="<<cos(n)<<endl;
//         cout<<"Sin"<<n<<"="<<sin(n)<<endl;
//         cout<<"Tan"<<n<<"="<<tan(n)<<endl;
//     }
// };


// int main(){
//     scientificalc x;
//     int choice;
//     do{
//      cout << "\n====== Calculator======" << endl;
//      cout<<"1. Scientific calculator"<<endl;
//      cout<<"2. Simple Calculator"<<endl;
//      cout<<"3. Input numbers"<<endl;
//      cout<<"4.sum "<<endl;
//      cout<<"5. Multiply"<<endl;
//      cout<<"6. Divide"<<endl;
//      cout<<"7. Remainder"<<endl;
//      cout<<"7. Subtraction"<<endl;
//       cout<<"Enter your choice"<<endl;
//       cin>>choice;
//       switch(choice){
//         case 1:
//        simplecalc;
//        break;

//        case 2:
//        scientificalc;
//        break;

        
//       }
//     } 

// }






















// //     cout<<".................Press 1 for simple calculator................"<<endl;
// //     cout<<".................Press 2 for scientific calculator.............."<<endl;

// //     int choice;
// //     cout<<"Enter the calculator that you want to use"<<endl;
// //     cin>>choice;
// //     switch(choice){
// //         case 1: simplecalc s;
// //                             s.input();
// //                             s.perform();
// //                             s.output();
// //                             break;
// //     case 2: scientificalc d;
// //        d.indata();
// //        d.outdata();
// //        break;

// //        case 3: break;

// //     }
// //     return 0;
// // }


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