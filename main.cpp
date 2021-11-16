#include <iostream>
#include <queue>

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
  Cell(int i , int j){
    row = i;
    col = j;
  }
};

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


  return 0;
}
