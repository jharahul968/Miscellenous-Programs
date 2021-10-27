#include <iostream>
using namespace std;
class LandMeasure{
    private:
        int ropani,ana,paisa,dam;
    
    public:
    void getdata(){
        cin>>ropani;
        cin>>ana;
        cin>>paisa;
        cin>>dam;
    }
    void returndata(){
        cout<<ropani;
        cout<<endl;
        cout<<ana;
        cout<<endl;
        cout<<paisa;
        cout<<endl;
        cout<<dam;
    }
    int intoDam(){
        ana+=ropani*16;
        paisa+=ana*4;
        dam+=paisa*4;
        int d=dam;
        return d;
    }
    LandMeasure operator +(LandMeasure LM){
        LandMeasure result;
        result.ropani=ropani+LM.ropani;
        result.ana=ana+LM.ana;
        result.paisa=paisa+LM.paisa;
        result.dam=dam+LM.dam;
        return result;
    }
};

int main(){
    LandMeasure LM1,LM2;
    LM1.getdata();
    LM2.getdata();
    LM1.returndata();
    cout<<endl;
    LM2.returndata();
    cout<<endl;
    LandMeasure LM=LM1+LM2;
    LM.returndata();
    return 0;
}

// int operator + (LandMeasure LM1,LandMeasure LM2){
// int sum=LM1.intoDam()+LM2.intoDam();
// return sum;
// }
// int main(){
//     LandMeasure LM1,LM2;
//     LM1.getdata();
//     LM2.getdata();
//     LM1.returndata();
//     cout<<endl;
//     LM2.returndata();
//     cout<<endl;
//     cout<<LM1+LM2;
//     return 0;
// }