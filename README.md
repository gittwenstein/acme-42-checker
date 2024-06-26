# The Meaning of Life Checker 

Life is short. Swimming in the **_char pool = '\*'_** is **shorter**. Don't waste your time. Test your _(swimming/key)_ strokes. Properly &amp; efficiently.

| Project | Test Coverage | Link to Test Suite | Notes |
|:---:|:---:|:---:|:---|
|C00|9/9|[Test suite for C00](C00/_test.tar.gz)||
|C01|9/9|[Test suite for C01](C01/_test.tar.gz)||
|C02|12/13|[Test suite for C02](C02/_test.tar.gz)| Test for ex12 coming if and when I find the time |
|C03|6/6|[Test suite for C03](C03/_test.tar.gz)||
|C04|6/6|[Test suite for C04](C04/_test.tar.gz)||
|C05|9/9|[Test suite for C05](C05/_test.tar.gz)||

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

	>**Note:** *Don't right-click on the **link**, and "Save link as"; it'll corrupt the file headers. Instead, follow the link by **left-clicking** it, and then in the upper right corner clicking the **"Download raw file"*** (smallish button with downward pointing arrow).

3. Place the zipped file in the repo to be tested; in our example:
	```bash
	cp ~/Downloads/_test.tar.gz ~/projects/C00
	```
4. Unpack the zipped file
	- Right-click on the zipped tar file and choose "Extract here", or...
	- ```bash
		~/projects/C00/tar zxvf _test.tar.gz
		``` 
5. If you are using the test ***in your own repo***, don't forget to **DELETE** the zipped file `_test.tar.gz`, so that you don't accidentally commit/push it upstream. This file and the unpacked folder must stay on your local machine only. Likewise, do not forget about **step 8**, and adding the `_test` folder to `.gitignore`.
	```bash
	cd ~/projects/C00
	rm _test.tar.gz
	```
6. To test your project, go to the `_test` dir. This is **vital**. All the paths in the test script are ***relative***, so--unless you modify the script to your liking (which you are more than welcome to do)--it is **imperative** that you run the script ***from within*** the `_test` directory. Otherwise chaos will ensue.
	```bash
	cd ~/projects/C00/_test
	./test
	```
7. Should you like to run the `norminette` tests as well, run the script with the flag `-n`:
	```bash
	./test -n
	```
8. If you decide to use the tests *in your own code*, **do not commit**, worse yet, push anything from your repo, until you make absolutely sure the test files won't get pushed upstream. ***First***, make sure you have the `.gitignore` file in your local repo:
	```bash
	~/projects/C00/.gitignore
	```
	And that in `.gitignore`, you have these two lines (plus, of course, whatever lines you've already had there):
	```
	.gitignore
	_test
	```
	**Now**, you are ***safe to proceed***. Now, the `_test` folder and everything in it, as well as the `.gitignore` file will stay safely on your local machine, and your local machine only.

## Happy coding
More tests are coming, obviously. If you find them useful, and new ones don't pop up here soon enough for you, feel absolutely free to use the template from the test suites to write better, more comprehensive tests...faster. Me be human. Me need sleep here. And there. `EOF`
