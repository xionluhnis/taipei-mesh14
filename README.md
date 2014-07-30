Taipei Mesh 2014
================

Slides and content for the [2014 workshop on Mesh Processing](https://www.facebook.com/groups/176534365780994/) in Taipei

Structure
---------
_Day 1_
**Slides**: Introduction to C++
  0. History and compilation model
  1. Hello world
  2. Basics (declaration, definition, functions, control flow, arrays)
  3. Pointers
  4. Templates
  5. Classes
  6. Stack vs heap (scope, `new`, `delete`, array versions, smart pointers)
  7. Polymorphism (inheritance, `virtual` methods, virtual pure)
  8. Types and conversions (`const`, `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, `explicit`)
  9. C++0x, C++3, C++11 (lambda functions, type inference with `auto`)

**Project**: BubbleBreaker with OpenFramework (OF)
  - OF presentation (setup, update, draw)
  - OFX addons preview
  - Breakdown dissection

**Slides**: Introduction to OpenMesh
  1. Half-edge data structure
  2. Iterators, circulators (one-ring)
  3. Custom properties
  4. Modifying the topology

**Project**: Mesh Property Visualization
  - Mesh import
  - Mesh interaction
  - Mesh visualization

_Day 2_
**Slides**: Remeshing with OpenMesh
  1. Laplacian smoothing
  2. Simplification with quadrics?
  3. Notion of curvature?
  4. Adaptive remeshing?

**Project**: Remeshing

**Slides**: ShapeUp constraints
  1. ShapeUp optimization problem
  2. Constraint formulation (e.g. edge length, planarity?)

**Project**: Constrained Mesh Optimization
  - OFMesh + ShapeUp (CPU / GPU?)
  - Examples of constraints
  - User-defined constraints

TODO
----
  - announce the structure at the beginnning of C++
  - show examples compiled and executed in real time (out of slides!)
  - write the slides!
  - write the code and test on Linux+MacOSX+Windows
  - create virtualbox environment in case people have troubles
  - have website to host slides, project files and links (use pico + yocto)
