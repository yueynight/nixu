#include<iostream>
using namespace std;
static int i=0;
int nixu(int a[],int count,int length){
	if(length==1)return count;
	else{
	for(int j=i+1;j<length;j++){
	if(a[i]>a[j]){
		count++;
		cout<<"("<<a[i]<<","<<a[j]<<")";
	} 
}
	return nixu(a+1,count,length-1);
}

}
int main(){
	cout<<"逆序对为:";
	int a[]={8,2,3,5,7,1,4,};
	int leng=sizeof(a)/sizeof(int);
	int cont=0;
	cont=nixu(a,cont,leng);
	cout<<endl<<"逆序对数为："<<cont;
	return 0;
}
