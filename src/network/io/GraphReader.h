/**
 * @file GraphReader.h
 * @date 06.10.2010
 * @author gerd
 */

#ifndef GRAPHREADER_H_
#define GRAPHREADER_H_

#include <iostream>

namespace largenet
{

class Graph;

namespace io
{

class GraphReader
{
public:
	GraphReader() {}
	virtual ~GraphReader() {}
	virtual Graph* createFromStream(std::istream& strm) = 0;
};

}

}

#endif /* GRAPHREADER_H_ */
