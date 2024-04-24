test1: exercise_04_35.b
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null 2>&1 && echo PASSED || echo FAILED

exercise_04_35.b: exercise_04_35.b.o | .gitignore
	g++ -Wall -Wextra -Werror -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Werror -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_04_35.b > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_04_35.b .gitignore

.PRECIOUS: exercise_04_35.b.ii exercise_04_35.b.s
.SECONDARY: exercise_04_35.b.ii exercise_04_35.b.s
