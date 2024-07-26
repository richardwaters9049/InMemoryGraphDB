#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

/**
 * Class representing an in-memory graph.
 */
class Graph {
public:
    /**
     * Add a node to the graph.
     * @param node The identifier of the node.
     */
    void addNode(const std::string &node);

    /**
     * Add an edge between two nodes in the graph.
     * @param from The identifier of the starting node.
     * @param to The identifier of the ending node.
     */
    void addEdge(const std::string &from, const std::string &to);

    /**
     * Remove a node from the graph.
     * @param node The identifier of the node.
     */
    void removeNode(const std::string &node);

    /**
     * Remove an edge between two nodes in the graph.
     * @param from The identifier of the starting node.
     * @param to The identifier of the ending node.
     */
    void removeEdge(const std::string &from, const std::string &to);

    /**
     * Get the neighbors of a node.
     * @param node The identifier of the node.
     * @return A vector of neighbors.
     */
    std::vector<std::string> getNeighbors(const std::string &node);

    /**
     * Check if a node exists in the graph.
     * @param node The identifier of the node.
     * @return True if the node exists, false otherwise.
     */
    bool hasNode(const std::string &node);

    /**
     * Check if an edge exists between two nodes in the graph.
     * @param from The identifier of the starting node.
     * @param to The identifier of the ending node.
     * @return True if the edge exists, false otherwise.
     */
    bool hasEdge(const std::string &from, const std::string &to);

private:
    // Adjacency list representation of the graph.
    std::unordered_map<std::string, std::unordered_set<std::string>> adjList;
};

#endif // GRAPH_H
