# In-Memory Graph Database

## Introduction to Graph Databases

Graph databases are designed to handle and query relationships between entities. Unlike traditional relational databases that use tables and rows, graph databases use nodes (entities) and edges (relationships) to model data. This structure is particularly useful for applications involving complex relationships, such as:

Social Networks: Modeling users and their connections.

Recommendation Engines: Analyzing user preferences and connections.

Fraud Detection: Identifying suspicious patterns and relationships.

Network Analysis: Understanding complex networks and dependencies.

The graph model allows for efficient querying and manipulation of relationships, making it an ideal choice for applications requiring deep insights into interconnected data.

## Project Overview

This project involves creating a simple in-memory graph database in C++. The aim is to implement core functionalities such as adding and removing nodes and edges, and querying the graph. The project demonstrates:

Graph Management: How to manage nodes and edges in a graph.
C++ Implementation: Using modern C++ features to handle data efficiently.

Performance Considerations: Implementing and optimizing data structures for effective graph operations.

## Key Features

Add/Remove Nodes: Functions to manage nodes in the graph.
Add/Remove Edges: Functions to manage relationships between nodes.
Query Neighbors: Retrieve neighbors of a specific node.
Check Existence: Verify if nodes and edges exist.

## Project Structure

The project is organized into the following directories and files:

```makefile
InMemoryGraphDB/
├── include/
│ └── graph.h # Header file defining the Graph class
├── src/
│ ├── graph.cpp # Source file implementing the Graph class
│ └── main.cpp # Main program to test Graph functionality
├── tests/ # (Optional) Directory for unit tests
├── CMakeLists.txt # CMake configuration file for building the project
```

## Building and Running the Project

To build and run the project, follow these steps:

Create a Build Directory and Navigate Into It

```sh
mkdir build
cd build
```

Run CMake to Configure the Project
```sh
cmake ..
```

Build the Project
```sh
make
```

Run the Executable
```sh
./InMemoryGraphDB
```

## Usage

After running the executable, the program will demonstrate the following functionalities:

* Adding nodes and edges.
* Removing nodes and edges.
* Querying the existence of nodes and edges.
* Retrieving and displaying neighbors of a node.
