#pragma once
#include "Generator.hpp"


struct DrunkardConfiguration {
	float upChance;
	float rightChance; 
	float downChance; 
	float leftChance;
	int iterations; 
	int startPointX;
	int startPointY; 
};

class DrunkardWalk : Generator {

private: 
	DrunkardConfiguration configuration; 
	bool initialConfigurationDone; 
public:
	DrunkardWalk();
	DrunkardWalk(int iterations); 
	void generate(Area* area) override;
	void configure(void* data) override; 
	void initialConfigurationBeforeGeneration(); 


private:
	void defaultConfiguration(int iterations = 10000); 
};