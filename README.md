# Gtkmm Virtual Keyboard

This project is a virtual application keyboard developed in c++ using gtkmm and sigc++. You will need to have sigc++ to connect a slot to the input signal emitted by the keyboard. It is not meant to work as a virtual keyboard for other processes but rather a component in a gtkmm or c++ application.


## First Steps

We use CMake to compile and build the keyboard. It was developed as a Gtk::Grid that can be added to other containers as Windows and Boxes. It emits a signal_input() with a Glib::ustring argument whenever a key is pressed.

### Prerequisites

This library depends on Gtkmm and sigc++. It is enough to install gtkmm as sigc++ is a dependencie for it and will be installed together.

### Installing

To install it, follow the steps below according to your OS. (Windows instructions coming soon)

#### Linux

To install in Linux, use your package manager. The next command will install it in Manjaro(Arch):

```
sudo pacman -Syu gtkmm3
```

If you use Ubuntu, and maybe other Debian based distros, the command is:
```
sudo apt install libgtkmm-3.0-dev
```

To test it, run the following command in the root folder of the project:
```
g++ main.cpp keyboard.cpp keyboardentry.cpp keyboardbutton.cpp -o demo `pkg-config gtkmm-3.0 --cflags --libs` && ./demo
```

You should see the following screen with the keyboard and an entry field. Try pressing the keys to see if you can type.

## Integration guide

To use the keyboard with your application you need to use sigc++ and create a slot for the signal input emitted by the keyboard widget. The following snippet shows how to create a keyboard object:

```c++
Keyboard* keyboard =  new Keyboard();
```

You can then add it to a window or container. Below you can see how to connect a callback function to the signal_input. The callback must be a void function that takes a const Glib::ustring* as an argument and entry is not a pointer.

```
keyboard->signal_input().connect(sigc::mem_fun(receiver_object, &receiver_object::callback_function));
```

As the regular text entry components in Gtk don't support text appending, I extended Gtk::Entry to add the append_text function. This function can be used as the slot for the keyboard signal_input. For more details on how to do this, check [main.cpp](main.cpp)

## Compiling/Building/Deploying

To build in the command line, I suggest you use the command ``g++ <files> -o <exe_name> `pkg-config gtkmm-3.0 --cflags --libs` ``. The `` `pkg-config gtkmm-3.0 --cflags --libs` `` part will add the g++ options to link gtkmm.

Rather than compiling by hand, I recommend that you use CMake or other build tool. For CMake, check CMakeList.txt for details on how to link gtkmm to your executable.

## Build Tools

* [CMake](http://cmake.org/) - CMake is an open-source, cross-platform family of tools designed to build, test and package software.

## Contributing

Please open an issue, fork the repo and open a PR when your feature is complete. Include in the PR description a test procedure and a detailed description of the feature.

## Versioning

We use [SemVer](http://semver.org/). For available versions, check the [tags](https://github.com/novaweb-mobi/gtkmm-virtual-keyboard/tags). 

## Autores

* **Mateus Berardo** - *Initial Work* - [MatTerra](https://github.com/MatTerra)

Check the [contribuitors](https://github.com/novaweb-mobi/gtkmm-virtual-keyboard/contributors) that helped in this project.

## License

This project is licensed under a MIT license - check [LICENSE.md](LICENSE.md) for details.

## Agradecimentos

* **Billie Thompson** - *README template* - [PurpleBooth](https://github.com/PurpleBooth)
