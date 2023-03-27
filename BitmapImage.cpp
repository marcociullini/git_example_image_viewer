#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if ((fileExt == "jpg") || (fileExt == "png") || (fileExt == "bmp") || (fileExt == "gif")) {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::save(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::resize(int width, int height) {
    this->width = width;
    this->height = height;
    // resize buffer
    return true;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
