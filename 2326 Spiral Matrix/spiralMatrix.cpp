#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

//Lets try to figurte out the question now;
//We have a linked list 
//imported it now lol
//We make an m*n matrix
//lets make topRow, bottomRow, leftCol, rightCol as variables that we will update on each loop
//We fill top row first,increase topRow variable, 
//then move down to right most col rightCol, decrease right col
//fill the lowest row, increase bottomRow move up the leftCol
//and so on; till there is a node in the linked List
//
//So the first thing is initialising the variables
vector<vector<int> > spiralMatrix(int m, int n, Node* head) {
    //Initialise Matrix
    vector<vector<int> > matrix(m,vector<int> (n,-1));
    //Initialise all the Variables
    int topRow = 0;
    int bottomRow = m-1;
    int leftCol = 0;
    int rightCol = n-1;
    
    //Start a loop till there is a node
    while (head){
        //Fill the Top Row first
        for(int i = leftCol; i<=rightCol && head;i++){
            matrix[topRow][i] = head->val;
            head = head->next;
        }
        // increase topRow
        topRow++;
        //Fill the right most column
        //This time I will name the variable in 
        //row and col cause that'll be easier for me
        for(int row = topRow;row<=bottomRow && head;row++){
            matrix[row][rightCol] = head->val;
            head = head->next;
        }
        //decrease rightCol cause we have filled top row &
        //right column till now
        rightCol--;
        //Fill the bottom most row now
        for(int col = rightCol; col >= leftCol && head; col--){
            matrix[bottomRow][col] = head->val;
            head = head->next;
        }
        //decrease bottom row;
        bottomRow--;

        //Last but not the least
        //
        for(int row = bottomRow;row>=topRow && head;row--){
            matrix[row][leftCol] = head->val;
            head = head->next;
        }
        leftCol++;
    }
return matrix;
}

int main(){
cout<<"No Error";
}
