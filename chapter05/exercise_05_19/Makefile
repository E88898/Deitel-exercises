test1: exercise_05_19
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null && echo PASSED || echo FAILED

exercise_05_19: exercise_05_19.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_05_19 > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_05_19 .gitignore

.PRECIOUS: exercise_05_19.ii exercise_05_19.s
.SECONDARY: exercise_05_19.ii exercise_05_19.s

