#include<iostream>
#include<stack>
#define max 100
using namespace std;

int b[max];
int k;
void Nhiphan(int n){
	int n1 = n;
	stack<int> s;
	int r,i;
	
	while(n1!=0){
		r = n1%2;
		n1 = n1/2;
		s.push(r);
	}
	while(!s.empty()){
		i = s.top(); s.pop();
		b[k] = i;
		k++;
	}
}

int Power_Modulo(int x,int n, int m){
  	int Power = 1;
  	Nhiphan(n);
	for(int i=0; i < k; i++){
  		Power = (Power*Power)%m;
    	if(b[i]==1)
    		Power = (Power*x)%m;
  	}   
  return Power;
}


int main(){
	int x, n, m;
	while(true){
		k = 0;
		cout<<"\nNhap x: "; cin>>x;
		cout<<"Nhap n: "; cin>>n;
		cout<<"Nhap m: "; cin>>m;
		int kq2 = Power_Modulo(x, n, m);
		cout<<"Ket qua: "<<kq2<<endl;
	}
		
	return 0;	
}
