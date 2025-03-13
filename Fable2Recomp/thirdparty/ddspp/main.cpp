#include "ddspp.h"

#include <iostream>
#include <cstdio>

int main()
{
	const char* path = "data/white.dds";

	FILE* fh = fopen(path, "rb");

	int ddsSize;
	fseek(fh, 0, SEEK_END);
	ddsSize = ftell(fh);
	rewind(fh);
	
	unsigned char* data = new unsigned char[ddsSize];

	fread(data, sizeof(*data), ddsSize, fh);

	ddspp::Descriptor desc;
	ddspp::Result ddsResult = ddspp::decode_header(data, desc);

	ddspp::Header header;
	ddspp::HeaderDXT10 h10;
	ddspp::encode_header(desc.format, desc.width, desc.height, desc.depth, desc.type, desc.numMips, desc.arraySize, header, h10);

	unsigned int rowPitch512 = ddspp::get_row_pitch(512, 64, 4, 0);

	unsigned int rowPitch = ddspp::get_row_pitch(29, 8, 1, 0);

	unsigned int rowPitchDesc = ddspp::get_row_pitch(desc, 0);

	unsigned int offset = ddspp::get_offset(desc, 4, 0);

	return 0;
}