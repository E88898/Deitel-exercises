test1: exercise_04_35_c
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null 2>&1 && echo PASSED || echo FAILED

exercise_04_35_c: exercise_04_35_c.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_04_35_c > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_04_35_c .gitignore

.PRECIOUS: exercise_04_35_c.ii exercise_04_35_c.s
.SECONDARY: exercise_04_35_c.ii exercise_04_35_c.s
