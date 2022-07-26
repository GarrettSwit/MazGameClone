#pragma once
#include "PlacableActor.h"
#include <iostream>

class Key;

class Vehicle : public PlacableActor
{
	bool isOn = true;
	int m_lives = 1;
	int worth;
	int x =1 , y = 1;
public:
	Vehicle(int x, int y)
		: PlacableActor(x,y) {
		isOn = true;
		m_lives= true;
		worth = 1;
		y = 1;
		x = 1;

	}
	

	virtual ActorType GetType() override { return ActorType::Vehicle; }
	virtual void Draw() override;

	void TurnOn(bool OnOff) {isOn = OnOff;}

	virtual void Drive() {
		if (isOn) {
			//drive around
			std::cout << "We really do be be driving around";
		}
	}

private:
	
};
class Boat : public Vehicle {
public:
	Boat(int x, int y, int m_lives)
		: Vehicle(x, y)
	{

	}
	virtual void Draw() override;
	void Drive() override {
		std::cout << "beep beep im on a boat!";
	}
private:

};
class Car : public Vehicle {
public:
	Car(int x, int y, int m_lives)
		: Vehicle(x, y)
	{

	}
	void Drive() override {
		std::cout << "beep beep im in a car!";
	}
	virtual void Draw() override;
private:

};
class Airplane : public Vehicle {
public:
	Airplane(int x, int y, int m_lives)
		: Vehicle(x, y)
	{

	}
	void Drive() override {
		std::cout << "beep beep im in a aeroplane over the sea!";
	}
	virtual void Draw() override;
private:

};