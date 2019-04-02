# How to use this code:

### Includes:

For every shape class that you want to use, be sure to include the appropriate header.

### Object instantiation:

- **Circle** - Circle takes a radius (int).
- **Horizontal** - Horizontal takes a Vector of unique\_ptr-s to any derived Shape.
- **Layered** - Layered takes a Vector of unique\_ptr-s to any derived Shape.
- **Polygon** - Polygon takes a number of sides (int) and a side length (int).
- **Rectangle** - Rectangle takes a width (double) and a height (double).
- **Rotated** - Rotated takes a unique\_ptr to a derived Shape and an angle (int).
- **Scaled** - Scaled takes a unique\_ptr to a derived Shape, an x-axis scale factor, and a y-axis scale factor.
- **Smiley** - Smiley takes a radius (int).
- **Spacer** - Spacer takes a width (double) and a height (double).
- **Square** - Square takes a side length (int).
- **Triangle** - Triangle takes a side length (int).
- **Vertical** - Vertical takes a Vector of unique\_ptr-s to any derived Shape.

NOTE: Shape is a pure virtual base class, and any instantiated Shapes are essentially useless.

### \*.intoPS

There are four intoPS functions that all do the same things, but with slightly different effects.

- intoPS() - This function appends to a file "PostScript.txt".
- intoPS(_fileName_) - This function take a fileName (string) that is appends the PostScript output to.
- intoPS(_fileStream_) - This function takes a fileStream, opens "PostScript.txt" in append mode, and appends the PostScript to the file.
- intoPS(_fileStream, fileName_) - This function takes a fileStream, opens (or creates) the file fileName, and appends the PostScript output to the file.


