#pragma once
#include "Generator.hpp"


struct DrunkardConfiguration {
	float upChance;
	float rightChance; 
	float downChance; 
	float leftChance;
	int iterations; 
};

class DrunkardWalk : Generator {

private: 
	DrunkardConfiguration configuration; 

public:
	DrunkardWalk();
	DrunkardWalk(int iterations); 
	void generate(Area* area) override;
	void configure(void* data) override; 


private:
	void defaultConfiguration(int iterations = 10000); 
};