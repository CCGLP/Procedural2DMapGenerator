#pragma once
#include "Generator.hpp"

class CellularAutomata : Generator{

public:
	void generate(Area* area) override;
	void configure(void* data) override;
};