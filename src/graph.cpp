#include "graph.h"

/**
 * Add a node to the graph.
 * If the node already exists, it does nothing.
 * @param node The identifier of the node.
 */
void Graph::addNode(const std::string &node) {
    // Check if the node already exists in the graph.
    if (adjList.find(node) == adjList.end()) {
        // Add the node with an empty set of neighbors.
        adjList[node] = std::unordered_set<std::string>();
    }
}

/**
 * Add an edge between two nodes in the graph.
 * This method ensures both nodes exist before adding the edge.
 * @param from The identifier of the starting node.
 * @param to The identifier of the ending node.
 */
void Graph::addEdge(const std::string &from, const std::string &to) {
    // Ensure both nodes are in the graph.
    addNode(from);
    addNode(to);

    // Add the edge from 'from' to 'to'.
    adjList[from].insert(to);
}

/**
 * Remove a node from the graph.
 * This method also removes all edges associated with the node.
 * @param node The identifier of the node.
 */
void Graph::removeNode(const std::string &node) {
    // Remove the node from the adjacency list.
    adjList.erase(node);

    // Remove all edges leading to the node from other nodes.
    for (auto &pair : adjList) {
        pair.second.erase(node);
    }
}

/**
 * Remove an edge between two nodes in the graph.
 * @param from The identifier of the starting node.
 * @param to The identifier of the ending node.
 */
void Graph::removeEdge(const std::string &from, const std::string &to) {
    // Check if the 'from' node exists.
    if (adjList.find(from) != adjList.end()) {
        // Remove the edge from 'from' to 'to'.
        adjList[from].erase(to);
    }
}

/**
 * Get the neighbors of a node.
 * @param node The identifier of the node.
 * @return A vector containing the neighbors.
 */
std::vector<std::string> Graph::getNeighbors(const std::string &node) {
    std::vector<std::string> neighbors;

    // Check if the node exists in the graph.
    if (adjList.find(node) != adjList.end()) {
        // Copy the neighbors from the adjacency list to the vector.
        neighbors.assign(adjList[node].begin(), adjList[node].end());
    }

    return neighbors;
}

/**
 * Check if a node exists in the graph.
 * @param node The identifier of the node.
 * @return True if the node exists, false otherwise.
 */
bool Graph::hasNode(const std::string &node) {
    // Return true if the node is found in the adjacency list.
    return adjList.find(node) != adjList.end();
}

/**
 * Check if an edge exists between two nodes in the graph.
 * @param from The identifier of the starting node.
 * @param to The identifier of the ending node.
 * @return True if the edge exists, false otherwise.
 */
bool Graph::hasEdge(const std::string &from, const std::string &to) {
    // Check if the 'from' node exists and if 'to' is a neighbor of 'from'.
    if (adjList.find(from) != adjList.end()) {
        return adjList[from].find(to) != adjList[from].end();
    }
    return false;
}
