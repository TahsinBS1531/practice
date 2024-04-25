# practice

First edit

git reset --soft <commit>

after running this command my commit was yet there in the staging area and my working directory for further modification but not included in my repository

git reset --mixed <commit>

after running this command the commit was unstaged from the staging area but was still there for further modifications.

git reset --hard <commit>


after running this command my commit was unstaged from the staging area and also removed from the working directory also.

#Squash Commit

Squashing is a very great idea to clean the history. It combines multiple commits in a single line of commits and clean our history. Suppose for changing any feature i added 5 commits. But those 5 commits combined does one task fulfill. So makeing them in one commit is very much benefitial for future changes.