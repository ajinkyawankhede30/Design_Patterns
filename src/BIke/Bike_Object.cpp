#include <iostream>


enum class Bike_code
{
	TVS = 1,
	Bajaj = 2,
	Honda = 3,
	Hero = 4
};
//std::istream& operator >> (std::istream& stream, Bike_code code)
//{
//	 stream >> code;
//	 return stream;
//}

class iBike
{
protected:
	std::string name;
	double price;

public:
	virtual ~iBike() {};

	void virtual GetBikeInfo() = 0;
	void virtual SetName();
	void virtual SetPrice();
	std::string virtual GetName();
	double virtual GetPrice();
};

class TVS : public iBike
{
public:

	void SetName() { name = "TVS Apache RTR 160 4V"; }
	void SetPrice() { price = 162000.25; }
	std::string GetName() { return name; }
	double GetPrice() { return price; }

	void GetBikeInfo() override
	{
		std::cout << "\n**************************\n";
		std::cout << "Name: " << GetName() <<"\n";
		std::cout << "Manufacturer: " << "TVS \n";
		std::cout << "Price: "<< GetPrice() << "\n";
		std::cout << "\n**************************\n";
	}

};

class Bajaj : public iBike
{
public:
	void GetBikeInfo() override
	{
		std::cout << "\n**************************\n";
		std::cout << "Name: " << "Bajaj Pulsar 160 NS\n";
		std::cout << "Manufacturer: " << "Bajaj \n";
		std::cout << "Price: 152000-/ \n";
		std::cout << "\n**************************\n";
	}

};


class Honda : public iBike
{
public:
	void GetBikeInfo() override
	{
		std::cout << "\n**************************\n";
		std::cout << "Name: " << "Honda CB 350\n";
		std::cout << "Manufacturer: " << "Honda \n";
		std::cout << "Price: 250000-/ \n";
		std::cout << "\n**************************\n";
	}

};

class Hero : public iBike
{
public:
	void GetBikeInfo() override
	{
		std::cout << "\n**************************\n";
		std::cout << "Name: " << "Hero XPulse 200\n";
		std::cout << "Manufacturer: " << "Hero \n";
		std::cout << "Price: 240000-/ \n";
		std::cout << "\n**************************\n";
	}

};