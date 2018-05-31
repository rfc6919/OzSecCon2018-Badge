const char arduino[] = {
0x4E, 0x49, 0x00, 0x80, 0x00, 0x40, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 
0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xe0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x07, 0x07, 0x06, 0x06, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xe0, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x03, 
0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x01, 0x03, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 
0xe0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x07, 0x03, 0x01, 
0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
0x01, 0x03, 0x07, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x87, 0xdf, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0xc0, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xe0, 0xf0, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 
0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0f, 0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 
0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 
0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 
0xfc, 0xfc, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 
0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 
0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x03, 
0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 
0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 
0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfc, 0xfc, 0x3c, 0xfc, 0xf8, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0xfc, 0xfc, 0xfc, 0x1c, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc, 0xf8, 0x00, 0x00, 0x00, 0xfc, 0xfc, 
0xfc, 0x1c, 0x1c, 0x1c, 0x1c, 0xfc, 0xf8, 0xf0, 0xc0, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc, 0xfc, 0xfc, 0x1c, 
0x1c, 0x1c, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00, 0xfc, 0xfc, 0xfc, 0x00, 
0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0x1c, 0x0c, 0x0c, 0x1c, 0xfc, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x78, 0x7f, 0x7f, 0x0f, 0x0e, 0x0c, 0x0f, 0x3f, 0x7f, 0x7e, 0x70, 0x00, 
0x00, 0x3f, 0x7f, 0x7f, 0x07, 0x07, 0x0f, 0x3f, 0x7f, 0x7f, 0x71, 0x00, 0x00, 0x00, 0x7f, 0x7f, 
0x7f, 0x70, 0x70, 0x70, 0x38, 0x3f, 0x3f, 0x1f, 0x07, 0x00, 0x00, 0x1f, 0x3f, 0x3f, 0x78, 0x70, 
0x70, 0x70, 0x3f, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x7f, 0x7f, 0x7f, 0x7f, 0x70, 
0x70, 0x70, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x3f, 0x00, 0x03, 0x0f, 0x3f, 0x7f, 0x7f, 0x7f, 0x00, 
0x00, 0x03, 0x1f, 0x3f, 0x3f, 0x70, 0x70, 0x70, 0x78, 0x3f, 0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
