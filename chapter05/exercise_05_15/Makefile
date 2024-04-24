test1: GradeBook
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null && echo PASSED || echo FAILED

GradeBook: main.o GradeBook.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

main.ii GradeBook.ii: GradeBook.hpp

.gitignore:
	echo GradeBook > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output GradeBook .gitignore

.PRECIOUS: main.ii GradeBook.ii main.s GradeBook.s
.SECONDARY: main.ii GradeBook.ii main.s GradeBook.s

