#include "vertex.h"

// Initialize a new vertex.
struct vertex newVertex (float x, float y, float r, float g, float b) {
    return {.x = x, .y = y, .r = r, .g = g, .b = b};
}

// Create an array of vertices for a triangle.
std::vector<vertex> triangleWithVertices (vertex a, vertex b, vertex c) {
    return {a,b,c};
}
