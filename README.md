# Patched dmenu

This repository contains a customized version of `dmenu`, a dynamic menu for X, with several patches already applied to enhance its functionality and usability.

## Description

`dmenu` is a fast and lightweight dynamic menu for X. It reads a list of newline-separated items from stdin and displays a menu from which the user can select an item. This version of `dmenu` includes several patches that add new features and improve user interaction.

## Features

- **Highlight**: Enhances the visual feedback for selected items.
- **Mouse Support**: Adds mouse interaction support.
- **Password**: Enables a password mode where input is hidden.
- **Xresources**: Allows customization of `dmenu`'s appearance through Xresources.

## Installation

### Prerequisites

- A C compiler (e.g., `gcc`)
- `make`
- Xlib header files

### Building and Installing

1. Clone the Repository:
   ```sh
   git clone https://github.com/mfreym/dmenu.git
   cd dmenu
   ```

2. Build:
    ```sh
    make
    ```

3. Install:
    ```sh
    sudo make install
    ```

## Usage

Once installed, you can launch `dmenu` using the `dmenu_run` script. This script serves as a handy wrapper to start `dmenu` with commonly used options.

## Credits

This project is based on [dmenu](https://tools.suckless.org/dmenu/), a dynamic menu for X developed by the [Suckless community](https://suckless.org/).
