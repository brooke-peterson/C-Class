# C-F19: Introduction to C programming

Lecture: MW 1500-1615 @ Keplinger Hall Rm 3060

This course provides students with practical exercises in C that will aid them in the completion of a Lexical Analyzer for the pascal language.  

## Projects/Exercises
* P1 (10%): Relop and Whitespace Machines
* P2 (10%): Int, Real, and Long Real Machines
* P3 (10%): Addop, Mulop, CatchAll
* P4 (10%): Reserved Word List
* P5 (10%): IdRes Machine and Tokenization
* P6 (10%): Tokenization and Lexical Errors
* Exercises (30%)
* Final (10%)


## Projects & Lab Workflow
Project code should be compartmentalized to a subdirectory with an appropriate name located in the top level of the repository (Project One = P1, Exercise One = E1). This project should **NOT** be polluted with non-code materials (presentations, etc). In general, copy the sub-directories containing the skeleton code and any associated files into the project directory (ex: P1) and make that the initial commit on the new branch.

**EVERY** project subdirectory must include a `README.md` describing your work and any special notes necessary for your work to be evaluated.

### (1) Starting Work
For each project/lab, create a branch **off of master** -- run `git status` or `git branch` to make sure your current branch is master. ALWAYS branch off of master and DO NOT place commits that modify one project's files onto an unrelated branch (i.e. don't mix commits/branches). If you are not on master, simply run `git checkout master` to move to it. To create the new lab/project branch, run `git checkout -b BRANCH_NAME`. Name branches using the following convention:

* Exercises
  * E1, E2, etc.
* Projects
  * P1, P2, etc.

After your first commit on this branch, push to remote via `git push -u origin BRANCH_NAME` and open a pull request comparing the branch to the master base branch. Note that your pull request is the clear indication to your instructors that you have begun work on a given task!

Pull Requests should be titled following this example format: "L0 - JD" where "JD" is the first and last initials of student John Doe. Additionally, add all members of the `ASRL/C-instructors` team as reviewers, add the appropriate label (e.g. "Project", "Lab"), and self-assign the issue.

### (2) Submitting Work
When you are ready to submit, apply the `submitted` label to the pull request. The instructors will review your work and take one of two actions:

* Approval
  * Your work is considered complete and graded (`graded` label applied)  -- you may safely merge via the green `merge` button using a "merge commit" method (should be the default)
    * Once done, run `git checkout master` and `git pull` to pull the new commits on the remote master into your local master.
* Request Changes
  * Your instructor may ask for you to correct or improve some portion of your work. Make these changes, commit/push them, and ping instructors again. This process will continue until work receives final approval.

### Git Tips
* [Git Checkout](https://www.atlassian.com/git/tutorials/using-branches/git-checkout/)
  * Git provides powerful branching features -- make use of them! You can/should have multiple branches out when working on more than one lab/project.
  * When your working directory is clean (no pending changes), you may easily move back and forth between branches. All it takes is: `git checkout BRANCH_NAME`.
    *  NOTE: **Always** run `git checkout master` to move back to your local master prior to creating a new branch!
* [Git Stash](https://www.atlassian.com/git/tutorials/git-stash/)
  * Problems
    * Git won't let you `checkout` another branch when you have work-in-progress (WIP, i.e. uncommitted changes to tracked files)
    * Git won't allow you to `pull --rebase` with work-in-progress
  * Solution
    * Run `git stash` to "stash" your current branch's WIP material on a stack (literally saves your working directory state)
    * Change to the branch you want to work on via `git checkout BRANCH_NAME`
    * When done, checkout your original branch and run `git stash pop` to put your WIP back into your working directory!

## Miscellaneous Notes
* Use coherent/concise commit messages
* DO NOT delete project branches
