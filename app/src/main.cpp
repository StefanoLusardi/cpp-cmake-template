int main(int argc, char** argv)
{
#if defined(_MSC_VER) && !defined(__clang__)
	std::cout << "MSVC @ WIN32" << std::endl;

#elif defined __clang__ && defined(__unix__)
	std::cout << "CLANG @ WSL" << std::endl;

#elif defined __clang__ && defined(WIN32)
	std::cout << "CLANG @ WIN32" << std::endl;

#elif defined __GNUC__ && defined(__unix__)
	std::cout << "GCC @ WSL" << std::endl;

#endif

	// core core(99);
	// std::cout << core.get() << std::endl;

    int *array = new int[100];
    delete[] array;
    auto x = array[argc]; // BOOM

	return 0;
}
