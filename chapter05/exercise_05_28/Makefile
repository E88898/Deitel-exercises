test1: exercise_05_28
	./$< < $@.input > $@.output
	diff $@.output $@.expected > /dev/null && echo PASSED || echo FAILED

exercise_05_28: exercise_05_28.o | .gitignore
	g++ -Wall -Wextra -Werror -Wno-implicit-fallthrough -std=c++03 -g3    $^ -o $@

%.o: %.s
	g++ -Wall -Wextra -Wno-implicit-fallthrough -std=c++03 -g3 -c $< -o $@

%.s: %.ii
	g++ -Wall -Wextra -Wno-implicit-fallthrough -std=c++03 -g3 -S $< -o $@

%.ii: %.cpp
	g++ -Wall -Wextra -Wno-implicit-fallthrough -std=c++03 -g3 -E $< -o $@

.gitignore:
	echo exercise_05_28 > .gitignore

clean:
	rm -rf *.ii *.s *.o *.output exercise_05_28 .gitignore

.PRECIOUS: exercise_05_28.ii exercise_05_28.s
.SECONDARY: exercise_05_28.ii exercise_05_28.s

