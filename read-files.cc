#include <iostream>

#include <png++/png.hpp>

int main(int argc, char* argv[]) {
  std::string filename;
  png::palette pal(256);
  while (getline(std::cin, filename)) {
    png::image<png::rgb_pixel> image(filename);
    for (size_t i = 0; i < image.get_height(); i++) {
      for (size_t j = 0; j < image.get_width(); j++) {
        png::rgb_pixel p = image.get_pixel(j, i);
        std::cout << (int)p.red << ":" << (int)p.green << ":" << (int)p.blue << " ";
      }
      std::cout << std::endl;
    }
  }
}
