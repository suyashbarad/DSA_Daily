#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;

class knapsack{
public:
        int n, W;
        int weight[100];
        int profit[100];
        int B[MAX][MAX];
        void input(){
            cout<<"Enter number of items: ";
            cin>>n;
            cout<<"Enter weight array: ";
            for(int i = 0; i < n; i++){
            cin>>weight[i];
            }

            cout<<"Enter profit array: ";
            for(int j = 0; j < n; j++){
            cin>>profit[j];
            }
            cout<<"Enter Capacity: ";
            cin>>W;
            cout<<"Weight array: ";
            for(int l = 0; l < n; l++){
            cout<< weight[l] << " " ;
            }
            cout<<endl;
            cout<<"Profit array: ";
            for(int l = 0; l < n; l++){
            cout<< profit[l] << " ";
            
            }
            
        }
        void algo(){
            for(int i = 0; i <= n; i++){
                B[i][0] = 0;
            }
            for(int w = 0; w <= W; w++){
                B[0][W] = 0;
            }
            for(int i = 0; i <= n; i++){
                for(int w = 0; w <= W; w++){
                    if (i == 0 || w == 0) {
                        B[i][w] = 0;
                    }
                    else if(weight[i-1] <= w){
                        B[i][w] = max(profit[i-1] + B[i-1][w-weight[i-1]], B[i-1][w]);
                    }
                    else{
                        B[i][w] = B[i-1][w];
                    }
                }
            }
            cout<<endl;
            for(int i = 0; i <= n; i++){
                for(int w = 0; w <= W; w++){
                    cout<<B[i][w]<<"  ";
                }
                cout<<endl;
            }
        }
        void display(){
            cout<<"\nn = "<<n<<"\nw = "<<W;
            cout<<"\nMax profit: "<<B[n][W];
        }
};
int main(){
    knapsack k;
    k.input();
    k.algo();
    k.display();
    return 0;
}