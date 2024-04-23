# acme-42-checker

Life is short. Swimming in the **_char \*pool = '\*'_** is **shorter**. Don't waste your time. Test your _(swimming/key)_ strokes. Properly &amp; efficiently.

| Project | Test Coverage | Link to Test Suite |
|:---|:---:|---:|
|C00|9/9|[Test suite for C00](C00/_test.tar.gz)|
|C01|9/9|[Test suite for C01](C01/_test.tar.gz)|
|C02|12/13|[Test suite for C02](C02/_test.tar.gz)|

## Why?
Draining of the pool is fast approaching, and wasting precious eval points (and, consequently, time as well), just to see if the auditors at Darth Moul & Computress Inette, Ltd. will be kind to you (this time), is akin to wasting money on lottery tickets. Looking at the calendar, I panicked, slept on it, calmed down, and started writing code *the way it's supposed to be written*. **Tests first**! Implemenation to pass the tests, second.

### Evaluatees
Using these ready-made tests is a fast way to check your code compliance during development, and gives you a better chance to succeed once your code faces Darth Moul.

### Evaluators
Heaps of work to do? Don't feel like wasting time making sure the code you have to evaluate compiles and does what it's supposed to do? Download, unzip, run script, and back to your own code.

## How?

For clarity's sake, let's take it step by step:

1. You have a repo, let's say, for project `C00` placed in a directory called `projects`, in your `home` directory, i.e.:
	```bash
	~/projects/C00
	```
2. Download the corresponding zipped test suite from the table above.

3. Place the zipped file in the repo to be tested; in our example:
	```bash
	cp ~/Downloads/_test.tar.gz ~/projects/C00
	```
4. Unpack the zipped file
	- Right-click on the zipped tar file and choose "Extract here", or...
	- ```bash
		~/projects/C00/tar zxvf _test.tar.gz
		``` 
5. To test your project, go to the `_test` dir. This is **vital**. All the paths in the test script are ***relative***, so--unless you modify the script to your liking (which you are more than welcome to do)--it is **imperative** that you run the sript ***from within*** the `_test` directory. Otherwise chaos will ensue.
	```bash
	cd ~/projects/C00/_test
	./test
	```
6. Should you like to run the `norminette` tests as well, run the script with the flag `-n`:
	```bash
	./test -n
	```

## Happy coding
More tests are coming, obviously. If you find them useful, and new ones don't pop up here soon enough for you, feel absolutely free to use the template from the test suites to write better, more comprehensive tests...faster. Me be human. Me need sleep here. And there. `EOF`
