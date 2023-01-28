#include <array>
#include <iostream>
#include <type_traits>

template<typename ... Args> // 가변 인자를 갖는 템플릿
auto build_array(Args&&... args)->std::array<typename std::common_type<Args...>::type, 
	sizeof...(args)> // sizeof... (args)라는 크기를 갖고, array<common_type<Args...>::type의 배열
{
	using commonType = typename std::common_type<Args...>::type;
	return { std::forward<commonType>((Args&&)args)... };
} // -> 의 의미는 후행 반환 형식 

int main()
{
	auto data = build_array(1, 0u, 'a', 3.2f, false);

	for (auto i : data)
		std::cout << i << " ";
	std::cout << std::endl;
}