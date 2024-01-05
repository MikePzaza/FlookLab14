#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}


void showMatrix(const bool x[][N]){
	for(int i=0 ; i<N ;i++){
		for(int j=0 ; j<N ; j++){
				cout << x[i][j] << " " ;
		}
		cout << "\n" ;
	}


}

void inputMatrix(double y[][N]) {
	for(int i=0 ; i<N ; i++){
		cout << "Row " << i+1 << ": " ;
		for(int j=0 ; j<N ; j++){
			cin >> y[i][j] ;
		}
	}

}

void findLocalMax(const double x[][N], bool y[][N]){
	for(int i=0 ; i<N ; i++){
		y[i][0]= 0 ;
		y[0][i]= 0 ;
		y[i][N-1]= 0 ;
		y[N-1][i]= 0 ;
	}
	for(int i=1 ; i<N-1 ; i++){
		for(int j=1 ; j<N-1 ; j++){
			if(x[i][j] >= x[i+1][j] && x[i][j] >= x[i][j+1] && x[i][j] >= x[i-1][j] && x[i][j] >= x[i][j-1]){
				y[i][j] = true ;
			}
			else{
				y[i][j] = false ;
			}

		}

	}

}