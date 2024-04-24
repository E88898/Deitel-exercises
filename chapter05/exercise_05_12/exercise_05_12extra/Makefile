test1: exercise_05_12extra
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null && echo PASSED || echo FAILED

exercise_05_12extra: exercise_05_12extra.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_05_12extra > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_05_12extra .gitignore

.PRECIOUS: exercise_05_12extra.ii exercise_05_12extra.s
.SECONDARY: exercise_05_12extra.ii exercise_05_12extra.s

