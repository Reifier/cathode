FILES = display_memory_location_of_integer.c
compile_everything: $(FILES)
	@for filename in $(FILES); \
	do \
	    output_filename=$$(echo "$$filename" | sed -E 's/(.*)\.c/\1\.o/g'); \
	    gcc $$filename -o $$output_filename; \
	    echo "Compiling: $$filename. Outputing: $$output_filename"; \
	done
