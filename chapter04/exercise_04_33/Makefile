test1: exercise_04_33
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null 2>&1 && echo PASSED || echo FAILED

exercise_04_33: exercise_04_33.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_04_33 > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_04_33 .gitignore

.PRECIOUS: exercise_04_33.ii exercise_04_33.s
.SECONDARY: exercise_04_33.ii exercise_04_33.s
