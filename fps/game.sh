# https://stackoverflow.com/questions/10906275/undefined-reference-to-stdios-baseinitinit

# Del old
if [ -f fps ]; then
	rm fps
fi

# Build new
gcc game.c -o fps -lstdc++ -lncurses

# Run
./fps