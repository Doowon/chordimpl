/**@file chord.h
 *
 *  @author Doowon Kim
 *  @date Jul. 2014
 */

#ifndef CHORD_H
#define CHORD_H

#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAX_NUM_NODE 3
/**
 * create chord nodes
 * @param  numOfNodes number of nodes
 * @return -1 if errors, otherwise return the number of created nodes
 */
int createNodes(int numNode, int id[]);

/**
 * Create a chord node
 * @return [description]
 */
int createNode();

/**
 * Assign key to a node
 * @return [description]
 */
int assignKey();

/*
 * DEBUG PRINTER
 */
void print();

#endif