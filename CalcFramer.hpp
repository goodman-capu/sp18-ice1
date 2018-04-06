#ifndef CALCFRAMER_HPP
#define CALCFRAMER_HPP

#include <iostream>
#include <queue>

using namespace std;

class CalcFramer {
public:
	void append(string chars);

	// Does this buffer contain at least one complete message?
	bool hasMessage() const;

	// Copy the first instruction in this buffer into the provided class
	string topMessage() const;

	// Pops off the first instruction from the buffer
	void popMessage();

	// prints the string to an ostream (useful for debugging)
	void printToStream(ostream& stream) const;

protected:
	// PUT ANY FIELDS/STATE HERE
	string messageBuffer;
	deque<string> messages;
};

#endif // CALCFRAMER_HPP
