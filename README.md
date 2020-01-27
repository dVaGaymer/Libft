# Libft
Part1 :
	memset
			assign to each space of mem
	bzero
			fills with 0s
	memcpy
			returns dst if == to src or not n
			start copying
	memccpy
			start copying
			--
	memmove
			check if overlap
			copies normal or back
	strlen
			counts while string
			returns size_t
	strlcpy
			protected
			if not size return src
			copy
			if dstsize left null terminate
	strlcat
			check parameters
			move to dest pos where copy starts
			start append
			null terminate if there is room
	strchr
			look for c, returns dir if found
			if reaches ends returns dir if c == 0
	strrchr
			same as before but starts at end
	strnstr
			check params
			moves haystack pointer
			loop to check needle
	strncmp
			check n parameter
			moves while at least one string exists
			when diff return diff
			anyway return diff at end
	atoi
			jump spaces
			jump + and -
			if - applies sign -
			jump numbers storing them
			if num reach some max or min return 0 -1
	isalpha
			check alpha ascii
	isdigit
			check num ascii
	isalnum
			check num and alpha ascii
	isascii
			check simple ascii
	isprint
			check printable ascii
	toupper
			if lower set to upper
	tolower
			if upper set to lower
	calloc
			allocates memory
			fills with 0
	strdup
			allocates same memory s1
			fills with s1 chars
      
---------------------------------------------------------------------------------------------------------
Part 2:
	substr
			protected
			check if start bigger than len(s)
			check if len too big
			protect malloc
	strjoin
			protected
			protect malloc
	strtrim
			protected
			find start index
			find end index
			check if trim is full of chars
			calculate total len
			return substring
	split	
			protected
			if empty string returns empty string
			count number of subsplit
			protect malloc
			fill string of strings
	itoa
			allocate space for every digit, +1 if negative
			fill with number from back
			put 45 if negative
	strmapi
			protected
			protect malloc
			changes chars
	putchar
			puts char
	putstr
			protected
	putendl
			protected
	putnbr
			if negative print - and convert to +
			recursive
