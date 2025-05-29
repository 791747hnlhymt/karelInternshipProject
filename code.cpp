#include <iostream>
#include <vector>
using namespace std;


struct instructions{
  string inst;
  int value;
  bool visited;
};



string sim;
vector<string>instuct;
vector<int>treat;
string jump;




int main() {
    
    cout << "Welcome to the karel training simulator! \n";
    while(sim != "exit"){
        
        instructions in;
        
        cout << "Give Karel a command. acc or jmp or sit: ";
        cin >> in.inst;
        
        
        instuct.push_back(in.inst);//only collects all the commands like acc , etc
        
        
        if(in.inst == "acc"){
            cout << "Would you like to give Karel a Treat? ";
            cin >> in.inst;
            if(in.inst == "yes"){
                cout << "How many treats would you like to give Karel? ";
                cin >> in.value;
                treat.push_back(in.value);
                cout << "Karel enjoyed the " << treat[0] << " treats! \n";
                cout << endl;
                cout << "Would you like to exit yes or no: ";
                cin >> sim;
                cout << endl;
                cout << endl;
            }else if(in.inst == "no"){
                cout << "Ok maybie next time sorry Karel.\n";
                cout << "Would you like to exit yes or no: ";
                cin >> sim;
                cout << endl;
                cout << endl;
            }
        }else if(in.inst == "jmp"){
            cout << "Would you like Karel to jump forward or backwards? ";
            cin >> jump;
            if(jump == "forward"){
                cout << "Karel jumped forward!\n";
                
            }else if(jump == "backward"){
                cout << "Karel jumped backwards!\n";
               
            }
        }
        
        
        if(sim == "yes"){
            cout << "You did " << instuct.size() << " commands!\n";
            for(string i : instuct){
                cout << i << endl;
            }
            cout << "Thank you for playing!\n";
            break;
        }
        
    }

    return 0;
