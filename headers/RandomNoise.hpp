#pragma once
#include "Generator.hpp"


class RandomNoise : public Generator {

	public:
	void generate(Area* area) override;
};