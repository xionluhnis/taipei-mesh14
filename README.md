Taipei Mesh 2014
================

Slides and content for the [2014 workshop on Mesh Processing](https://www.facebook.com/groups/176534365780994/) in Taipei.

Based on [PicoCMS](http://picocms.org/) with [YoctoManager](https://github.com/xionluhnis/yoctomanager) and [Adv-meta](https://github.com/shawnsandy/adv-meta).

Structure
---------
_Day 1_

**Slides**: Introduction to C++
  0. History and compilation model
  1. Hello world
  2. Basics (fibonacci: *variables, functions, flow control, arrays*)
  3. Pointers (swap: *passing by value, by reference*)
  4. Templates (function template, specialization)
  5. Classes (declaration, definition, operator overloading, constructor, copy, destructor)
  6. Stack vs heap (scope, `new`, `delete`, array versions, smart pointers)
  7. Polymorphism (inheritance, `virtual` methods, virtual pure)
  8. Types and conversions (`const`, `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, `explicit`)
  9. C++0x, C++3, C++11 (lambda functions, type inference with `auto`)

**Project**: Voronoi + Surface Mesh with OpenFramework
  - of presentation (setup, update, draw)
  - ofx addons preview (ofxVoronoi, ofxUI, ofxPostProcessing)
  - Code dissection

**Slides**: Introduction to OpenMesh / [OpenGP](http://opengp.github.io/tutorial.html)
  1. Half-edge data structure
  2. Iterators, circulators (one-ring)
  3. Custom properties
  4. Connectivity (half-edges: *next, prev, opposite*, vertices: *from, to*)
  5. Modifying the topology (basic: *add, remove*)

**Project**: Mesh Property Visualization
  - Mesh import
  - Mesh interaction
  - Mesh visualization

_Day 2_

**Slides**: Remeshing with OpenMesh / OpenGP
  1. Laplacian smoothing (uniform, normal-constrained)
  2. Modifying the topology (advance: *edge collapse, edge split, edge flip*)
  3. Simplification with quadrics
  4. Metrics (valence, face area, face angles, curvature)
  5. Adaptive remeshing

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
  - show examples compiled and executed out of slides
  - write the slides
  - write the project code
  - test things
