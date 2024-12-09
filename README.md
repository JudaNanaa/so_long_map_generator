# so_long_map_generator

**so_long_map_generator** is a C-based tool designed to create and validate maps for 42 **so_long** game project. It automates the generation of maps while ensuring that they are playable, adhering to the game's requirements.

## How to Use

### Compilation

Run the following command to build the project:

```bash
make
```

This generates an executable named `so_long_generator`.

### Usage

```bash
./so_long_generator <map_dimensions> <collectibles> <output_file>
```

- `<map_dimensions>`: Dimensions of the map (e.g., `10x10` for a 10x10 grid).
- `<collectibles>`: Number of collectibles to place in the map.
- `<output_file>`: Name of the `.ber` file to save the map.

#### Example

```bash
./so_long_generator 15x10 5 map
```

This creates a 15x10 map with 5 collectibles and saves it as `map.ber`.

## Features

- **Automatic Map Generation**: Generate maps with walls, sprites, collectibles, and exits.
- **Playability Check**: Validates that the generated map can be completed (e.g., all collectibles can be collected, and the exit is reachable).
- **Customization**: Adjust map dimensions and number of collectibles via command-line arguments.
- **File Output**: Saves the generated map to a `.ber` file for use in your so_long project.
