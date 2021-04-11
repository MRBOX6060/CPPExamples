#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec;
    char selection{};
    do {
        cout<<"P - Printer numbers"<<endl;
        cout<<"A - Add number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display smallest number" <<endl;
        cout<<"L - Display largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        
        cout<<"Enter your choice: ";
        cin>> selection;
        
        // P - Printer the numbers
        if(selection == 'P' || selection =='p'){
            if (!vec.empty()){
                cout<<"[ " ;
                for(auto item : vec)
                    cout<<item<<" ";
                cout<<"]"<<endl;
            }
            else
                cout<<"[] - The list is empty"<<endl;
        }
                
        //A - Add number
        else if(selection == 'A' || selection =='a'){
            int new_item{};
            cout<<"Enter an integer to add to the list: ";
            cin>> new_item;
            vec.push_back(new_item);
            cout<<new_item<<" added"<<endl;
            
        }
        
        //M - Display mean of the numbers
        else if(selection == 'M' || selection =='m'){
            if (!vec.empty()){
                int sum{};
                for(auto item : vec)
                    sum += item;
                cout<<"The mean is: "<<sum/vec.size()<<endl;
            }
            else
                cout<<"Unable to calculator the mean - no data"<<endl;
        }
        
        //S - Display smallest number
        else if(selection == 'S' || selection =='s'){
            if (!vec.empty()){
                int smallest_item = vec.front();
                for(auto item : vec)
                    smallest_item = (item<smallest_item)? item : smallest_item;
                cout<<"The smallest number is: "<<smallest_item<<endl;
            }
            else
                cout<<"Unable to determine the smallest number - list is empty"<<endl;
        }
        
        //L - Display largest number
        else if(selection == 'L' || selection =='l'){
            if (!vec.empty()){
                int largest_item = vec.front();
                for(auto item : vec)
                    largest_item = (item > largest_item)? item : largest_item;
                cout<<"The smallest number is: "<<largest_item<<endl;
            }
            else
                cout<<"Unable to determine the largest number - list is empty"<<endl;
        }
        else if(selection == 'Q'||selection == 'q'){
            cout<<"Goodbye!"<<endl;
        }
        else
            cout<<" Your choise is incorrect please try again!"<<endl;
            
        
    }while (selection !='q' && selection !='Q');
    return 0;
}