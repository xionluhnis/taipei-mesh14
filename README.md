Taipei Mesh 2014
================

Slides and content for the [2014 workshop on Mesh Processing](https://www.facebook.com/groups/176534365780994/) in Taipei

Structure
---------
Introduction to C++
  0. History and compilation model
  1. Hello world
  2. Basics (declaration, definition, functions, control flow)
  3. Arrays and pointers
  4. Templates and classes
  5. Stack vs heap (scope, `new`, `delete`, array versions, smart pointers)
  6. Polymorphism (inheritance, `virtual` methods, virtual pure)
  7. Types and conversions (`const`, `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, `explicit`)

**Code**: breakdown with OpenFramework

Introduction to OpenMesh
  1. Half-edge data structure
  2. Iterators, circulators (one-ring)
  3. Custom properties
  4. Modifying the topology

**Code**: mesh property visualization

Remeshing with OpenMesh
  1. Laplacian smoothing
  2. Simplification with quadrics?
  3. Notion of curvature?
  4. Adaptive remeshing?

**Code**: remeshing

TODO
----
  - split C++ and OpenMesh into different slides
  - announce the structure at the beginnning of C++
  - show examples compiled and executed in real time (out of slides!)
  - use "breakdown" as a motivation game to introduce all features
  - write the slides!
