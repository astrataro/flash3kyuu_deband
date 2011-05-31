
namespace pixel_proc_8bit {
	static inline void init_context(char context_buffer[CONTEXT_BUFFER_SIZE], int frame_width)
	{
		// nothing to do
	}

	static inline void destroy_context(void* context)
	{
		// nothing to do
	}

	static inline void next_pixel(void* context)
	{
		// nothing to do
	}

	static inline void next_row(void* context)
	{
		// nothing to do
	}

	static inline int upsample(void* context, unsigned char pixel)
	{
		return pixel;
	}

	static inline int downsample(void* context, int pixel, int row, int column)
	{
		return pixel;
	}

	static inline int avg_2(void* context, int pixel1, int pixel2)
	{
		return (pixel1 + pixel2 + 1) >> 1;
	}

	static inline int avg_4(void* context, int pixel1, int pixel2, int pixel3, int pixel4)
	{
		// consistent with SSE code
		int avg1 = (pixel1 + pixel2 + 1) >> 1;
		int avg2 = (pixel3 + pixel4 + 1) >> 1;
		return (avg1 + avg2) >> 1;
	}

};