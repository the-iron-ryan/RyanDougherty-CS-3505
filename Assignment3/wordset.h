#ifndef WORDSET_H
#define WORDSET_H

#include <string>

namespace cs3505
{
	class node;

	class wordset
	{
		public:
			wordset(int capacity = 100);
			wordset(const wordset & other);
			~wordset();

			void add(const std::string & val);
			void remove(const std::string & val);
			bool contains(const std::string & val) const;
			int size() const;

			wordset & operator= (const wordset & right);

			static long long get_constructor_count();
			static long long get_destructor_count();
		private:
			int hash(const std::string & val) const;
			void clean();
				
			int capacity;
			int count;
			node** table;

			static long long constructor_count;
			static long long destructor_count;
	};	
}
#endif
