#include <iostream>
#include <vector>
using namespace std;

void PrintBoard(const vector<vector< int>> &b){

    for(vector<int> each_col_board:b){
        for(int each_element_col:each_col_board){
            cout<<each_element_col<<" ";
        }
        cout<<endl;
    }

};

int main(){
    vector<vector <int>>board;
    board={{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};

PrintBoard(board);
return 0;

}