#define ICON_WIDTH 32
#define ICON_HEIGHT 32

const unsigned char clear_day_bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x01, 0x80, 0x03, 
    0x80, 0x01, 0x80, 0x01, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0x1C, 0x38, 0x00, 
    0x00, 0x0E, 0x70, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x06, 0x60, 0x00, 0x3C, 0x06, 0x60, 0x3C, 
    0x3C, 0x06, 0x60, 0x3C, 0x00, 0x06, 0x60, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x0E, 0x70, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x80, 0x01, 0x80, 0x01, 
    0xC0, 0x01, 0x80, 0x03, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char clear_night_bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 
    0x80, 0x3F, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 
    0xF0, 0x1C, 0x00, 0x00, 0xF8, 0x1C, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x00, 
    0x3C, 0x3C, 0x00, 0x00, 0x3C, 0x78, 0x00, 0x00, 0x3C, 0x78, 0x00, 0x00, 0x3C, 0xF0, 0x00, 0x00, 
    0x3C, 0xF0, 0x01, 0x00, 0x3C, 0xE0, 0x07, 0x00, 0x3C, 0xC0, 0x3F, 0x1C, 0x38, 0x80, 0xFF, 0x3F, 
    0x78, 0x00, 0xFE, 0x3F, 0x78, 0x00, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x1F, 0xF0, 0x01, 0x00, 0x0F, 
    0xE0, 0x03, 0xC0, 0x0F, 0xC0, 0x0F, 0xF0, 0x07, 0x80, 0xFF, 0xFF, 0x03, 0x00, 0xFF, 0xFF, 0x00, 
    0x00, 0xFC, 0x7F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char cloudy_bits [] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0x06, 0x60, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0xF8, 0x01, 0x80, 0x1F, 
    0x1C, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0xC0, 
    0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x00, 0x60, 
    0x06, 0x00, 0x00, 0x60, 0x1C, 0x02, 0x40, 0x38, 0xF8, 0x07, 0xE0, 0x1F, 0xE0, 0x1F, 0xF8, 0x07, 
    0x00, 0xF8, 0x1F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
};

const unsigned char fog_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF8, 0xFF, 0xFF, 0x1F, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 
    0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0xFC, 0xFF, 0xFF, 0x3F, 
    0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char partly_cloudy_day_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 
    0x00, 0x00, 0x04, 0x00, 0x00, 0x08, 0x00, 0x06, 0x00, 0x18, 0x00, 0x07, 0x00, 0x10, 0x0E, 0x03, 
    0x00, 0x80, 0x3F, 0x00, 0x00, 0xC0, 0x60, 0x00, 0x00, 0x60, 0xC0, 0x00, 0x00, 0x60, 0x80, 0x00, 
    0x00, 0x60, 0x80, 0x01, 0x80, 0xF3, 0x8F, 0x39, 0x00, 0x38, 0x9C, 0x01, 0x00, 0x0C, 0xF0, 0x00, 
    0xC0, 0x07, 0xE0, 0x03, 0xF0, 0x03, 0xC0, 0x0F, 0x38, 0x00, 0x00, 0x1C, 0x08, 0x00, 0x00, 0x10, 
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 
    0x0C, 0x00, 0x00, 0x30, 0x18, 0x00, 0x00, 0x18, 0x70, 0x06, 0x60, 0x0E, 0xE0, 0x1F, 0xF8, 0x07, 
    0x00, 0xF8, 0x1F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char partly_cloudy_night_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 
    0x00, 0x80, 0x09, 0x00, 0x00, 0x80, 0x19, 0x00, 0x00, 0x80, 0x18, 0x00, 0x00, 0x80, 0x30, 0x00, 
    0x00, 0x80, 0xE1, 0x0F, 0x00, 0xE0, 0x87, 0x0F, 0x00, 0x78, 0x1C, 0x06, 0x00, 0x0C, 0x30, 0x07, 
    0x80, 0x07, 0xE0, 0x03, 0xF0, 0x03, 0xC0, 0x07, 0x38, 0x00, 0x00, 0x0C, 0x18, 0x00, 0x00, 0x18, 
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 
    0x08, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x18, 0x70, 0x06, 0x60, 0x0E, 0xE0, 0x1F, 0xF8, 0x07, 
    0x00, 0xF8, 0x1F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char rain_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0x06, 0x60, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x30, 0x00, 0x00, 0x0C, 
    0x18, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x18, 0x00, 0x00, 0x18, 0x30, 0x04, 0x20, 0x1C, 
    0xE0, 0x0F, 0xF0, 0x07, 0x80, 0x39, 0x9C, 0x01, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0xE0, 0x01, 
    0x00, 0x03, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0x80, 0x87, 0x01, 0x00, 0x00, 0x83, 0x01, 0x00, 
    0x00, 0xC0, 0x03, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char sleet_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0x06, 0x60, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x30, 0x00, 0x00, 0x0C, 
    0x18, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x18, 0x00, 0x00, 0x18, 0x30, 0x00, 0x00, 0x1C, 
    0xE0, 0x0F, 0xF0, 0x07, 0x80, 0x39, 0x9C, 0x01, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xC0, 0x01, 0x80, 0x03, 0xC0, 0x81, 0x81, 0x03, 0xC0, 0xC0, 0x03, 0x03, 0x00, 0xC0, 0x03, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x70, 0x00, 
    0x00, 0x0E, 0x70, 0x00, 0x00, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char snow_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0x06, 0x60, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x30, 0x00, 0x00, 0x0C, 
    0x18, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 
    0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x18, 0x00, 0x00, 0x18, 0x30, 0x04, 0x20, 0x1C, 
    0xE0, 0x0F, 0xF0, 0x07, 0x80, 0x39, 0x9C, 0x01, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x80, 0x81, 0x05, 0xE0, 0x90, 0x09, 0x0F, 0xA0, 0xF1, 0x0F, 0x07, 
    0xF0, 0x60, 0x06, 0x00, 0x60, 0x60, 0x06, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0xF0, 0x0F, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char sunset_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x01, 0x80, 0x03, 0x80, 0x03, 0xC0, 0x01, 
    0x00, 0xC1, 0x83, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0x1C, 0x38, 0x00, 
    0x00, 0x0C, 0x30, 0x00, 0x00, 0x8E, 0x71, 0x00, 0x3C, 0xA6, 0x65, 0x3C, 0x3C, 0xC6, 0x63, 0x3C, 
    0x00, 0x8E, 0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xFE, 0x7F, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char sunrise_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
    0x00, 0x80, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x01, 0x80, 0x03, 0x80, 0x03, 0xC0, 0x01, 
    0x00, 0xC1, 0x83, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0x1C, 0x38, 0x00, 
    0x00, 0x0C, 0x30, 0x00, 0x00, 0x8E, 0x71, 0x00, 0x3C, 0xC6, 0x63, 0x3C, 0x3C, 0xE6, 0x67, 0x3C, 
    0x00, 0x8E, 0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xFE, 0x7F, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char wind_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 
    0x00, 0xC0, 0x03, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 
    0xFC, 0xFF, 0x03, 0x1E, 0xF8, 0xFF, 0x01, 0x1F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 
    0xFC, 0xFF, 0xFF, 0x1F, 0xFC, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF8, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7E, 0x00, 
    0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char thermometer_bits [] = {
    // size is 32 x 32 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xE0, 0x07, 0x00, 
    0x00, 0xF0, 0x0F, 0x00, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x30, 0x0C, 0x00, 
    0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 
    0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 
    0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x38, 0x1C, 0x00, 
    0x00, 0x38, 0x1C, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x1C, 0x38, 0x00, 0x00, 0x1C, 0x38, 0x00, 
    0x00, 0x1C, 0x38, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
    0x00, 0xF0, 0x0F, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char* getIconFromString(String icon) {
    //"clear-day, clear-night, rain, snow, sleet, wind, fog, cloudy, partly-cloudy-day, or partly-cloudy-night"
    if (icon == "clear-day") {
        return clear_day_bits;
    }
    else if (icon == "clear-night") {
        return clear_night_bits;
    }
    else if (icon == "rain") {
        return rain_bits;
    }
    else if (icon == "snow") {
        return snow_bits;
    }
    else if (icon == "sleet") {
        return sleet_bits;
    }
    else if (icon == "wind") {
        return wind_bits;
    }
    else if (icon == "fog") {
        return fog_bits;
    }
    else if (icon == "cloudy") {
        return cloudy_bits;
    }
    else if (icon == "partly-cloudy-day") {
        return partly_cloudy_day_bits;
    }
    else if (icon == "partly-cloudy-night") {
        return partly_cloudy_night_bits;
    }
    return cloudy_bits;
}

