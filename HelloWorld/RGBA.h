#include <cstdint>

class RGBA
{
private:
	std::uint8_t m_red, m_green, m_blue, m_alpha;
public:
	RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};
	void print() {
		std::cout << "RGBA values: " << std::endl << "Red: " << +m_red << std::endl << "Green: " << +m_green << std::endl << "Blue: " << +m_blue << std::endl << "Alpha: " << +m_alpha << std::endl;
	};
};