/*
 * TranspositionalTable.h
 *
 *  Created on: Aug 29, 2012
 *      Author: msinclair94
 */
#pragma once
#ifndef TRANSPOSITIONTABLE_HPP_
#define TRANSPOSITIONTABLE_HPP_

#include <vector>

#include "Piece.hpp"
#include "Hash.hpp"

class AI;

typedef class TranspositionTable {
public:
	friend class AI;
	TranspositionTable();
	~TranspositionTable();

	unsigned char& operator[](const Hash::Zkey hash) { return entries[hash % tableSz];}

	const unsigned char& operator[](const Hash::Zkey hash) const {return entries[hash % tableSz];}

	bool hasEvaluated(const Hash::Zkey);

private:
	std::vector<unsigned char> entries;

	static unsigned tableSz;
} TT;

#endif /* TRANSPOSITIONTABLE_HPP_ */
