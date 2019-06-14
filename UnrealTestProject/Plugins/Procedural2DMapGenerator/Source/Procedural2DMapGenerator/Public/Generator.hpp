#pragma once

struct Area; 
class Generator {

	public:
		virtual void generate(Area* area) {};
		virtual void configure(void* data) {}; 
};