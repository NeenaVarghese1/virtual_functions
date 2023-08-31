#include<iostream>
using namespace std;
class   Virus {
public: 
	double hivrate;
	double covidrate;
	double birdfluerate;


public:
	void virtual GetMortalityRate() {

	}

};
class Hiv :public  Virus {
public:
	int hiv;
	
public:
	void GetMortalityRate()  {
	cout << "Enter the Count Of HIV virus:  " ;
	cin >> hiv;
	hivrate=(hiv / 30000000.0 )* 100.0;
	
	cout << "Mortality rate due to HIV Virus: " << hivrate << "%"<<endl;
	
}
};
class Covid : public   Virus {
public:
	int covid;
	 
public:
	void GetMortalityRate()
	{
		cout << "Enter the Count Of COVID virus: " ;
		cin >> covid;
		covidrate =(covid / 30000000.0) * 100.0;
		
		cout << "Mortality rate due to Covid Virus: " << covidrate <<"%"<< endl;

		
	}
};
class Birdflue :public Virus{
public:
	int birdflue;
	 
public:
	void GetMortalityRate() {
		cout << "Enter the Count Of Blueflue: ";
		cin >> birdflue;
		birdfluerate =( birdflue/ 30000000.0) * 100.0;
		
		cout << "Mortality rate due to Bird Flue: " << birdfluerate <<"%"<< endl;
	}
};
		
	

void main() {
	Virus* virusPtr;
	
	Hiv rate1;
	Covid rate2;
	Birdflue rate3;


	virusPtr = &rate1;
	virusPtr->GetMortalityRate();
	virusPtr = &rate2;
	virusPtr->GetMortalityRate();
	virusPtr = &rate3;
	virusPtr->GetMortalityRate();



	
}