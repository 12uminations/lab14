#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool show[N][M]){
        cout<<"------------------------------------------------------------------------\n"; 
        for(int j=0;j<30;j++){
            cout<<"|";
            for(int i=0;i<70;i++){
              if(show[j][i] == 0){
              cout<<" ";
              }
              else if(show[j][i] == 1) {
              cout<<"*";
              }
            }
             cout<<"|\n";
        }
        cout<<"------------------------------------------------------------------------\n"; 
}
void updateImage(bool show[N][M],int s,int y,int x){
    for(int i=0;i<30;i++){
        for(int j=0;j<70;j++){
            if(pow(pow((j-x),2)+pow((i-y),2),0.5)<=s-1){
                show[i][j] = 1;
            }
            }
    }
}
