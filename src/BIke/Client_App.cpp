#include "Factory_Bike.cpp"

int main()
{
	int code{};
	while(true){

		std::cout << "Enter Bike code [1 To 4]: ";
		std::cin >> code;
		if (code)
		{
			iBike* ibk = NULL;
			ibk = Bike_Factory::FactoryBike_method((Bike_code)code);
			delete ibk;
		}
		else
			break;
	}
	std::cout << "Exit...\n";
	return 0;
}
