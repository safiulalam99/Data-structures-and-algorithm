
#pragma once
#include <iostream>
#include "Utility.h"
#include "Queue.h"

class Extended_queue : public Queue {
public:
	bool full() const;
	int size() const;
	void clear();
	Error_code serve_and_retrieve(Queue_entry& item);
};
