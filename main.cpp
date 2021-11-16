#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//#define SIZE 5;
const int SIZE = 5;

void printArray(int arr[][SIZE],int SIZE){
  for(int i=0;i<SIZE+1;i++){
    for(int j=0;j<SIZE;j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
}

struct Cell{
  int row,col;
  vector<struct Cell> visitedList;

  Cell(int i , int j){
    row = i;
    col = j;
  }

  Cell(int i, int j,vector<struct Cell> visitedIn){
    row = i;
    col = j;
    visitedList = visitedIn;
    visitedList.push_back(Cell(row,col));
  }

};

void visit(queue<Cell> q, Cell cell ,int array[][SIZE]){
  //Verfie that cell inside the grid
  if((cell.row < SIZE && cell.row >= 0 ) && (cell.col < SIZE-1 && cell.col >= 0)){
    //verify if the value is equal to 1
    if(array[cell.row][cell.col] == 1){
      q.push(cell);
    }
  }
}

int main(){
  //Draw the map of cities
  //const int SIZE = 5;
  int array[SIZE+1][SIZE]={
    {1,1,1,1,0},
    {1,1,0,0,0},
    {0,1,1,0,0},
    {0,0,1,1,0},
    {1,1,0,1,0},
    {0,0,0,1,1}
  };

  printArray(array,SIZE);

  //Search BFS

  queue<Cell> q;

  Cell start(0,0);
  Cell target(SIZE,SIZE-1);

  visit(q, start , array);


  return 0;
}
