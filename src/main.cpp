#include <iostream>
#include "graph.h"

int main() {
    Graph g;

    // Add nodes to the graph
    g.addNode("A");
    g.addNode("B");

    // Add an edge between nodes A and B
    g.addEdge("A", "B");

    // Check if node A exists
    std::cout << "Does node A exist? " << (g.hasNode("A") ? "Yes" : "No") << std::endl;

    // Check if there is an edge from A to B
    std::cout << "Is there an edge from A to B? " << (g.hasEdge("A", "B") ? "Yes" : "No") << std::endl;

    // Retrieve and print neighbors of node A
    std::vector<std::string> neighbors = g.getNeighbors("A");
    std::cout << "Neighbors of node A: ";
    for (const auto &neighbor : neighbors) {
        std::cout << neighbor << " ";
    }
    std::cout << std::endl;

    // Remove edge from A to B
    g.removeEdge("A", "B");
    std::cout << "Is there an edge from A to B after removal? " << (g.hasEdge("A", "B") ? "Yes" : "No") << std::endl;

    // Remove node B
    g.removeNode("B");
    std::cout << "Does node B exist after removal? " << (g.hasNode("B") ? "Yes" : "No") << std::endl;

    return 0;
}
