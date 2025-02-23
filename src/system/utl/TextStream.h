#ifndef UTL_TEXTSTREAM_H
#define UTL_TEXTSTREAM_H

class TextStream {
    public:
    TextStream();
    virtual ~TextStream() {}
    virtual void Print(const char*) = 0;

    char float_print_buf[8]; // why they do this
};

#endif
