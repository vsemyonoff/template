GNU make/XCode 5 template for C/C++ projects
============================================

Main idea
--------------------------------------------

Please look [here][1] and [here][2] for the concepts.

How to use that?
--------------------------------------------

I want to start new project 'SuperProject'.

1. Local project, only working repo:
   * git clone git://github.com/vsemyonoff/template SuperProject
   * cd SuperProject
   * ./mkproject
2. Local project with custom local origin:
   * git clone git://github.com/vsemyonoff/template SuperProject
   * cd SuperProject
   * ./mkproject /mnt/projects/superproject
3. Project with custom remote origin:
   * Go to github.com
   * Create new repo (for example 'superproject')
   * git clone git://github.com/vsemyonoff/template SuperProject
   * cd SuperProject
   * ./mkproject git://git@github.com:githubuser/superproject

Open 'SuperProject.xcodeproj' and build it. To be able to run/debug
>Edit Scheme > Run > Other > '/project/path/SuperProject/bin/SuperProject'.

* First example will create local project and init repo without origin.
* Second will also create local master repo and push initial commit there.
* Third will do the same but setup as origin GitHub repo and push there.

[1]: http://www.hiltmon.com/blog/2013/07/05/xcode-and-the-simple-c-plus-plus-project-structure/ "XCode 5 and the Simple C++ Project"
[2]: http://hiltmon.com/blog/2013/07/07/xcode-4-code-completion-for-external-build-projects/    "XCode 5 code completion"
