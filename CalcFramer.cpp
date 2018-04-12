#include <assert.h>
#include "CalcFramer.hpp"

using namespace std;

static const string DELIMINATOR = "\r\n";

void CalcFramer::append(string chars)
{
	// PUT YOUR CODE HERE
	messageBuffer += chars;
	while (true) {
		size_t pos = messageBuffer.find(DELIMINATOR);
		if (pos != string::npos) {
			messages.push_back(messageBuffer.substr(0, pos));
			messageBuffer.erase(0, pos + DELIMINATOR.length());
		} else {
			break;
		}
	}
}

bool CalcFramer::hasMessage() const
{
	// PUT YOUR CODE HERE
	return !messages.empty();
}

string CalcFramer::topMessage() const
{
	// PUT YOUR CODE HERE
	return messages.front();
}

void CalcFramer::popMessage()
{
	// PUT YOUR CODE HERE
	messages.pop_front();
}

void CalcFramer::printToStream(ostream& stream) const
{
	// (OPTIONAL) PUT YOUR CODE HERE--useful for debugging
	for (string message : messages) {
		stream << message << '\n';
	}
}
