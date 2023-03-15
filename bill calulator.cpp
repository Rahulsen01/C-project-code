#include<iostream>
using namespace std;

void design_of_bill(char name[40], char date[20]) {
	cout<<("\n\n")<<endl;
	cout<<("\t great observer club")<<endl;
	cout<<("\n\t-----------\n");
	cout<<"Date: "<<date<<endl;
	cout<<"Invoice to: " <<name<<endl;
	cout<<"\n";
	cout<<"----------------------\n";
	cout<<"Items \t\t\t";
	cout<<"Qty\t\t\t";
	cout<<"Price \t\t\t";
	cout<<"\n----------------------";
	cout<<"\n\n"<<endl;
}

void print_in_bill(char item[40], int qty, float price) {
	cout<<item<<"\t";
	cout<<"\t\t"<<qty;
	cout<<"\t\t"<<qty*price<<"+";
	cout<<"\n"<<endl;
}

void calculate_bill(float total) {
	cout<<"\n";
	cout<<"==============="<<endl;
	cout<<"Total Amount = \t\t\t\t\t"<<total<<endl;
}

struct restaurant {
	char name[50];
	char date[20];
	char item[40];
	int take_no_of_item;
	int unit_charge_of_item;
	int qty;
};

int main() {
	float total = 0;
	int m;
	struct restaurant r1[50];
	cout<<"\n Enter the Date: ";
	cin>>r1[0].date;
	cout<<"\n Enter the customer name: ";
	cin>>r1[0].name;
	cout<<"\n Enter the number of orders as requested by the customer: ";
	cin>>m;
	for(int i=0 ;i<m;i++) {
		cout<<"\nEnter "<<i+1<<" item:\t";
		cin>>r1[i].item;
		cout<<"Enter Quantity of item:\t";
		cin>>r1[i].take_no_of_item;
		cout<<"Enter per unit charge of item:\t";
		cin>>r1[i].unit_charge_of_item;
		total += r1[i].take_no_of_item * r1[i].unit_charge_of_item;
	}
	design_of_bill(r1[0].name, r1[0].date);
	for(int i=0;i<m;i++) {
			print_in_bill(r1[i].item,r1[i].take_no_of_item,r1[i].unit_charge_of_item);
	}
	calculate_bill(total);
	cout<<"\n";
	cout<<"====================================================================\n"<<endl;
	cout<<"*****************************Thank you*********************************"<<endl;
	cout<<"\n";
	return 0;
}
