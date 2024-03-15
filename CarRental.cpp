#include<iostream>
using namespace std;
class Car{
public:
        string company,model;
        int year, rgNo, rent;
        bool rented;
        Car(string company,string model,int year,int rgNo,int rent,bool rented)
        {
                this->company = company;
                this->model = model;
                this->year = year;
                this->rgNo = rgNo;
                this->rent = rent;
                this->rented = rented;
        }        
        void display()
        {
                cout <<"Company: " << company<<endl;
                cout << "Model: " << model<<endl;
                cout << "Year: " << year<<endl;
                cout << "Registration No.: " << rgNo<<endl;
                cout << "Rent: " << rent <<"/day"<< endl<<endl;
        }

};
        void call(Car c1,Car c2,Car c3,Car c4){
                c1.display();
                c2.display();
                c3.display();
                c4.display();
        }
int main()
{
        Car c1("Mahindra","Scorpio-N",2024,125,4000,false);
        Car c2("Honda","Civic",2020,220,2500,false);
        Car c3("Suzuki","Swift Dzire",2021,400,2000,false);
        Car c4("Hyundai", "Creta", 2022, 115, 3000,false);

        
        cout << "---Available Cars--- "<<endl<<endl;
        call(c1, c2, c3, c4);

        cout << endl;
        while(true)
        {
                cout << "Registration No. : ";
                int rg;
                cin >> rg;

                switch(rg)
                {
                        case 125:{
                                
                                system("cls");
                                if(!c1.rented)
                                {
                                        c1.rented = true;
                                        cout << "You have successfully rented: " << endl;
                                        c1.display();
                                }
                                else{
                                        cout << "This car is already rented!..." << endl;
                                        cout << "Search for other car Or 0 to exit.." << endl<<endl;
                                        call(c1, c2, c3, c4);
                                        
                                }
                                break;
                        }
                        case 220:{system("cls");
                                if(!c2.rented)
                                {
                                        c2.rented = true;
                                        cout << "You have successfully rented: " << endl;
                                        c2.display();
                                }
                                else{
                                        cout << "This car is already rented!..." << endl;
                                        cout << "Search for other car Or 0 to exit.." << endl<<endl;
                                        call(c1, c2, c3, c4);
                                }
                                break;
                        }
                        case 400:{system("cls");
                                if(!c3.rented)
                                {
                                        c3.rented = true;
                                        cout << "You have successfully rented: " << endl;
                                        c3.display();
                                }
                                else{
                                        cout << "This car is already rented!..." << endl;
                                        cout << "Search for other car Or 0 to exit.." << endl<<endl;
                                        call(c1, c2, c3, c4);
                                }
                                break;
                        }
                        case 115:{system("cls");
                                if(!c4.rented)
                                {
                                        c4.rented = true;
                                        cout << "You have successfully rented: " << endl;
                                        c4.display();
                                }
                                else{
                                        cout << "This car is already rented!..." << endl;
                                        cout << "Search for other car Or 0 to exit..";
                                        cout<< endl<<endl;
                                        call(c1, c2, c3, c4);
                                }
                                break;
                        }
                        case 0:
                                exit(0);
                        default:
                        {
                                system("cls");
                                cout << "Enter valid Registration No. Or 0 to exit.."<<endl;
                                call(c1, c2, c3, c4);
                        }

                }
        
        }
}
/*

*/