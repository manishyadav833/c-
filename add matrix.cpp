#include<iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"enter row size="<<endl;
	cin>>r;
	cout<<"enter columns size="<<endl;
	cin>>c;
	int i,j;
	int a[i][j],b[i][j],res[i][j];
	cout<<"enter the 1st matrix element"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter value= "<<i<<j<<endl;
			cin>>a[i][j];
	}
}
	cout<<"enter the 2nd matrix element"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter value="<<i<<j<<endl;
			cin>>b[i][j];
	}
}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			res[i][j]=a[i][j]+b[i][j];
		}
   }
   cout<<"result is="<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<res[i][j];
		}
		cout<<endl;
    }
	return 0;
}
