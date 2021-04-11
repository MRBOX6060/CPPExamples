#include <iostream>
#include <vector>

using namespace std;

char menu_selection(){
    char selection{}; 
    cout<<"P - Printer numbers"<<endl;
    cout<<"A - Add number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display smallest number" <<endl;
    cout<<"L - Display largest number"<<endl;
    cout<<"Q - Quit"<<endl;
        
    cout<<"Enter your choice: ";
    cin>> selection;
    return selection;
}

void print_numbers(const vector<int> &vec){
    if (!vec.empty()){
        cout<<"[ " ;
        for(auto item : vec)
            cout<<item<<" ";
        cout<<"]"<<endl;
    }
    else
        cout<<"[] - The list is empty"<<endl;
}

void add_number(vector <int> &vec){
    int new_item{};
    cout<<"Enter an integer to add to the list: ";
    cin>> new_item;
    vec.push_back(new_item);
    cout<<new_item<<" added"<<endl;
}

void mean_numbers(const vector <int> &vec){
    if (!vec.empty()){
        int sum{};
        for(auto item : vec)
            sum += item;
        cout<<"The mean is: "<<sum/vec.size()<<endl;
    }
    else
        cout<<"Unable to calculator the mean - no data"<<endl;
}

void smallest_number(const vector <int> &vec){
    if (!vec.empty()){
                int smallest_item = vec.front();
                for(auto item : vec)
                    smallest_item = (item<smallest_item)? item : smallest_item;
                cout<<"The smallest number is: "<<smallest_item<<endl;
            }
            else
                cout<<"Unable to determine the smallest number - list is empty"<<endl;
}

void largest_number(const vector <int> &vec){
    if (!vec.empty()){
                int largest_item = vec.front();
                for(auto item : vec)
                    largest_item = (item > largest_item)? item : largest_item;
                cout<<"The smallest number is: "<<largest_item<<endl;
            }
            else
                cout<<"Unable to determine the largest number - list is empty"<<endl;
}

int main()
{
    vector <int> vec;
    char selection{};
    do {
        selection = menu_selection();
        // P - Printer the numbers
        if(selection == 'P' || selection =='p'){
            print_numbers(vec);
        }
                
        //A - Add number
        else if(selection == 'A' || selection =='a'){
            add_number(vec);
        }
        
        //M - Display mean of the numbers
        else if(selection == 'M' || selection =='m'){
            mean_numbers(vec);
        }
        
        //S - Display smallest number
        else if(selection == 'S' || selection =='s'){
            smallest_number(vec);
        }
        
        //L - Display largest number
        else if(selection == 'L' || selection =='l'){
            largest_number(vec);
        }
        else if(selection == 'Q'||selection == 'q'){
            cout<<"Goodbye!"<<endl;
        }
        else
            cout<<" Your choise is incorrect please try again!"<<endl;
    }while (selection !='q' && selection !='Q');
    return 0;
}