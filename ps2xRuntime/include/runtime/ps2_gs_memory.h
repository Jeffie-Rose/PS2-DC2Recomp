#pragma once

#include <cstdint>
#include <type_traits>
#include <array>
#include <span>

#include "types.h"

namespace GSMem
{
	constexpr usz MEMORY_SIZE = 4_mb;
	constexpr usz PAGE_SIZE = 8_kb;

	// these are all the same regardless of storage mode
	constexpr usz BLOCKS_PER_PAGE = 32;
	constexpr usz COLUMNS_PER_BLOCK = 4;

	// note:
	// there are others (FFX uses 0x11 as an alias for CT24)
	// these are just the official ones
	enum class PixelStorageMode
	{
		C32 = 0x00, // 32 bit color
		C24 = 0x01, // 24 bit color
		C16 = 0x02, // 16 bit color
		C16S = 0x0A, // 16 bit color (32 bit compatible memory layout)
		P8 = 0x13, // 8 bit index
		P4 = 0x14, // 4 bit index
		P8H = 0x1B, // 8 bit index (stored in upper 8 bits of 32 bit)
		P4HL = 0x24, // 4 bit index (stored in low nibble of upper 8 bits of 32 bit)
		P4HH = 0x2C, // 4 bit index (stored in high nibble of upper 8 bits of 32 bit)
		Z32 = 0x30, // 32 bit depth
		Z24 = 0x31, // 24 bit depth
		Z16 = 0x32, // 16 bit depth
		Z16S = 0x3A, // 16 bit depth (32 bit compatible memory layout)
		Max = 0x3F // 6 bits of values
	};

	constexpr PixelStorageMode C32 = PixelStorageMode::C32;
	constexpr PixelStorageMode C24 = PixelStorageMode::C24;
	constexpr PixelStorageMode C16 = PixelStorageMode::C16;
	constexpr PixelStorageMode C16S = PixelStorageMode::C16S;
	constexpr PixelStorageMode P8 = PixelStorageMode::P8;
	constexpr PixelStorageMode P4 = PixelStorageMode::P4;
	constexpr PixelStorageMode P8H = PixelStorageMode::P8H;
	constexpr PixelStorageMode P4HL = PixelStorageMode::P4HL;
	constexpr PixelStorageMode P4HH = PixelStorageMode::P4HH;
	constexpr PixelStorageMode Z32 = PixelStorageMode::Z32;
	constexpr PixelStorageMode Z24 = PixelStorageMode::Z24;
	constexpr PixelStorageMode Z16 = PixelStorageMode::Z16;
	constexpr PixelStorageMode Z16S = PixelStorageMode::Z16S;

	struct Extent2D
	{
		u32 x{ 0 };
		u32 y{ 0 };
	};

	template<typename T, Extent2D Extent>
	using LookupTable = std::array<std::array<T, Extent.x>, Extent.y>;

	constexpr bool IsValidPsm(PixelStorageMode psm)
	{

		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
		case PixelStorageMode::P8:
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4:
		case PixelStorageMode::P4HH:
		case PixelStorageMode::P4HL:
			return true;
		}

		return false;
	}

	// Bits per pixel in unpacked format (GS memory)
	constexpr usz UnpackedBitWidth(PixelStorageMode psm)
	{

		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
		case PixelStorageMode::P8H:  // unpacked to alpha of 32
		case PixelStorageMode::P4HH: // unpacked to alpha of 32
		case PixelStorageMode::P4HL: // unpacked to alpha of 32
			return 32;
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
			return 16;
		case PixelStorageMode::P8:
			return 8;
		case PixelStorageMode::P4:
			return 4;
		}

		return 32;
	}

	// bits per pixel (packed width)
	constexpr usz BitsPerPixel(PixelStorageMode psm)
	{

		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
			return 32;
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
			return 24;
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
			return 16;
		case PixelStorageMode::P8:
		case PixelStorageMode::P8H:
			return 8;
		case PixelStorageMode::P4:
		case PixelStorageMode::P4HH:
		case PixelStorageMode::P4HL:
			return 4;
		default:
			break;
		}

		return 32;
	}

	constexpr bool IsDepth(PixelStorageMode psm)
	{

		switch (psm)
		{
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
		case PixelStorageMode::Z24:
		case PixelStorageMode::Z32:
			return true;
		default:
			break;
		}

		return false;
	}

	constexpr bool IsColor(PixelStorageMode psm)
	{
		return !IsDepth(psm);
	}

	constexpr bool IsPaletted(PixelStorageMode psm)
	{

		switch (psm)
		{
		case PixelStorageMode::P8:
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
			return true;
		}

		return false;
	}

	template<usz BitCount>
	struct BitStorageHelper;

	template<>
	struct BitStorageHelper<4>
	{
		using Type = u8;
	};

	template<>
	struct BitStorageHelper<8>
	{
		using Type = u8;
	};

	template<>
	struct BitStorageHelper<16>
	{
		using Type = u16;
	};

	template<>
	struct BitStorageHelper<24>
	{
		using Type = u32;
	};

	template<>
	struct BitStorageHelper<32>
	{
		using Type = u32;
	};

	template<PixelStorageMode psm>
	struct PixelStorageTraits
	{

		// page extent, in units of pixels
		static constexpr Extent2D PageExtent();

		// block size in a page, in units of blocks
		static constexpr Extent2D BlockExtent();

		// column extent in a block, in units of pixels
		static constexpr Extent2D ColumnExtent();

		// block count in a page (always 32 for valid psm)
		static constexpr usz BlocksPerPage();

		// pixel count in a block
		static constexpr usz PixelsPerBlock();

		// pixel count in a page
		static constexpr usz PixelsPerPage();

		using BlockLookupTableT = LookupTable<u8, BlockExtent()>;
		using ColumnLookupTableT = LookupTable<u16, ColumnExtent()>;
		using PageLookupTableT = std::array<LookupTable<u16, PageExtent()>, BlocksPerPage()>;

		// calculates the column offset
		static constexpr usz ColumnId(const ColumnLookupTableT& table, u32 x, u32 y);

		// calculates the block offset
		static constexpr usz BlockId(const BlockLookupTableT& table, u32 x, u32 y);

		// calculates the page offset
		static constexpr usz PageId(u32 base, u32 bw, u32 x, u32 y);

		// sets up the lookup table which precomputes a bunch of math for us
		static constexpr void InitPageLookupTable(PageLookupTableT& table, const BlockLookupTableT& block_table, const ColumnLookupTableT& column_table);

		// gets a pixel address
		static constexpr u32 Address(const PageLookupTableT& table, u32 block, u32 bw, u32 x, u32 y);

		using PackedT = typename BitStorageHelper<BitsPerPixel(psm)>::Type;
		using UnapckedT = typename BitStorageHelper<UnpackedBitWidth(psm)>::Type;

		// returns a offset into a 32 bit word (P8H, P4HH, P4HL)
		static constexpr usz BitOffset();

		// writes the pixel
		static constexpr void Write(const PageLookupTableT& table, u8* data, u32 block, u32 bw, u32 x, u32 y, PackedT value);

		// reads the pixel
		static constexpr auto Read(const PageLookupTableT& table, u8* data, u32 block, u32 bw, u32 x, u32 y) -> PackedT;

		static_assert(BlocksPerPage() == BLOCKS_PER_PAGE);
		static_assert(IsValidPsm(psm));
	};

	template<PixelStorageMode psm>
	constexpr Extent2D PixelStorageTraits<psm>::PageExtent()
	{
		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
			return { 64, 32 };
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
			return { 64, 64 };
		case PixelStorageMode::P8:
			return { 128, 64 };
		case PixelStorageMode::P4:
			return { 128, 128 };
		}
	}

	template<PixelStorageMode psm>
	constexpr Extent2D PixelStorageTraits<psm>::BlockExtent()
	{
		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::C24:
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
		case PixelStorageMode::Z32:
		case PixelStorageMode::Z24:
		case PixelStorageMode::P8:
			return { 8, 4 };
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
		case PixelStorageMode::P4:
			return { 4, 8 };
		default:
			break;
		}

		return { 0, 0 };
	}

	template<PixelStorageMode psm>
	constexpr Extent2D PixelStorageTraits<psm>::ColumnExtent()
	{
		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C24:
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
			return { 8, 8 };
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
			return { 16, 8 };
		case PixelStorageMode::P8:
			return { 16, 16 };
		case PixelStorageMode::P4:
			return { 32, 16 };
		}

		return { 0, 0 };
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::BlocksPerPage()
	{
		const auto extent = BlockExtent();

		return static_cast<usz>(extent.x) * static_cast<usz>(extent.y);
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::PixelsPerBlock()
	{
		constexpr auto extent = ColumnExtent();

		return static_cast<usz>(extent.x) * extent.y;
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::PixelsPerPage()
	{
		constexpr auto extent = PageExtent();

		return static_cast<usz>(extent.x) * extent.y;
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::ColumnId(const ColumnLookupTableT& table, u32 x, u32 y)
	{
		constexpr auto extent = ColumnExtent();

		// wrap along the column extent
		y = y % extent.y;
		x = x % extent.x;

		return table[y][x];
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::BlockId(const BlockLookupTableT& table, u32 x, u32 y)
	{
		constexpr auto block_extent = BlockExtent();
		constexpr auto column_extent = ColumnExtent();

		y = (y / column_extent.y) % block_extent.y;
		x = (x / column_extent.x) % block_extent.x;

		return table[y][x];
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::PageId(u32 base, u32 bw, u32 x, u32 y)
	{
		constexpr auto page_extent = PageExtent();

		const u32 base_page = base / BlocksPerPage();
		const u32 row = (y / page_extent.y) * bw;
		const u32 col = x / page_extent.x;

		return static_cast<usz>(base_page) + row + col;
	}

	template<PixelStorageMode psm>
	constexpr void PixelStorageTraits<psm>::InitPageLookupTable(PageLookupTableT& table, const BlockLookupTableT& block_table, const ColumnLookupTableT& column_table)
	{
		constexpr auto page_extent = PageExtent();
		constexpr auto pixels_per_block = PixelsPerBlock();
		constexpr auto blocks_per_page = BlocksPerPage();

		for (usz block = 0; block < blocks_per_page; ++block)
		{
			for (usz y = 0; y < page_extent.y; ++y)
			{
				for (usz x = 0; x < page_extent.x; ++x)
				{
					table[block][y][x] = ((block + BlockId(block_table, x, y)) * PixelsPerBlock()) + ColumnId(column_table, x, y);
				}
			}
		}
	}

	template<PixelStorageMode psm>
	constexpr u32 PixelStorageTraits<psm>::Address(const PageLookupTableT& table, u32 block, u32 bw, u32 x, u32 y)
	{
		constexpr auto block_count = BlocksPerPage();
		constexpr auto page_extent = PageExtent();
		constexpr auto pixels_per_page = PixelsPerPage();

		const u32 page = PageId(block, bw, x, y);

		block = block % block_count;
		y = y % page_extent.y;
		x = x % page_extent.x;

		return (page * PixelsPerPage()) + table[block][y][x];
	}

	template<PixelStorageMode psm>
	constexpr usz PixelStorageTraits<psm>::BitOffset()
	{
		switch (psm)
		{
		case PixelStorageMode::P8H:
		case PixelStorageMode::P4HL:
			return 24;
		case PixelStorageMode::P4HH:
			return 28;
		default:
			break;
		}

		return 0;
	}

	template<PixelStorageMode psm>
	constexpr void PixelStorageTraits<psm>::Write(const PageLookupTableT& table, u8* data, u32 block, u32 bw, u32 x, u32 y, PackedT value)
	{
		const u32 pixel_addr = Address(table, block, bw, x, y);
		const u32 bits = pixel_addr * UnpackedBitWidth(psm) + BitOffset();
		const u32 byte_addr = (bits / 8) & (MEMORY_SIZE - sizeof(PackedT));
		const u32 shift = bits % 8;

		u8* ptr = &data[byte_addr];

		PackedT old;
		std::memcpy(&old, ptr, sizeof(PackedT));

		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
		case PixelStorageMode::P8:
		case PixelStorageMode::P8H:
			std::memcpy(ptr, &value, sizeof(PackedT));
			break;
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
			// RMW
			value = (old & 0xFF000000) | (value & 0x00FFFFFF);
			std::memcpy(ptr, &value, sizeof(PackedT));
			break;
		case PixelStorageMode::P4:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
			// RMW
			value = (old &~(0x0F << shift)) | ((value & 0x0F) << shift);
			std::memcpy(ptr, &value, sizeof(PackedT));
			break;
		default:
			break;
		}
	}

	template<PixelStorageMode psm>
	constexpr auto PixelStorageTraits<psm>::Read(const PageLookupTableT& table, u8* data, u32 block, u32 bw, u32 x, u32 y) -> PackedT
	{
		const u32 pixel_addr = Address(table, block, bw, x, y);
		const u32 bits = pixel_addr * UnpackedBitWidth(psm) + BitOffset();
		const u32 byte_addr = (bits / 8) & (MEMORY_SIZE - sizeof(PackedT));
		const u32 shift = bits % 8;

		PackedT v;
		std::memcpy(&v, &data[byte_addr], sizeof(PackedT));

		switch (psm)
		{
		case PixelStorageMode::C32:
		case PixelStorageMode::Z32:
		case PixelStorageMode::C16:
		case PixelStorageMode::C16S:
		case PixelStorageMode::Z16:
		case PixelStorageMode::Z16S:
		case PixelStorageMode::P8:
		case PixelStorageMode::P8H:
			return v;
		case PixelStorageMode::C24:
		case PixelStorageMode::Z24:
			return v & 0x00FFFFFF;
		case PixelStorageMode::P4:
		case PixelStorageMode::P4HL:
		case PixelStorageMode::P4HH:
			return (v >> shift) & 0x0F;
		default:
			break;
		}

		return 0xFFFF00FFu;
	}

	void InitLookupTables();

	void WriteCT32(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteZ32(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);

	void WriteCT24(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteZ24(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);

	void WriteCT16(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteCT16S(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteZ16(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteZ16S(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);

	void WriteP8(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteP8H(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);

	void WriteP4(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteP4HH(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);
	void WriteP4HL(u8* data, u32 bp, u32 bw, u32 x, u32 y, u32 value);

	u32 ReadCT32(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadZ32(u8* data, u32 bp, u32 bw, u32 x, u32 y);

	u32 ReadCT24(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadZ24(u8* data, u32 bp, u32 bw, u32 x, u32 y);

	u32 ReadCT24(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadZ24(u8* data, u32 bp, u32 bw, u32 x, u32 y);

	u32 ReadCT16(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadCT16S(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadZ16(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadZ16S(u8* data, u32 bp, u32 bw, u32 x, u32 y);

	u32 ReadP8(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadP8H(u8* data, u32 bp, u32 bw, u32 x, u32 y);

	u32 ReadP4(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadP4HL(u8* data, u32 bp, u32 bw, u32 x, u32 y);
	u32 ReadP4HH(u8* data, u32 bp, u32 bw, u32 x, u32 y);
}