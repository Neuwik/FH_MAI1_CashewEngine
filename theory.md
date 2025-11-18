# Theory Questions

## Ex 1
### What is the difference between git and github?
Git is a version control system used to track and manage code changes locally.
GitHub is a cloud platform that hosts Git repositories online for collaboration and sharing.

### Name 3 benefits of a version control system:
- Tracks changes and keeps a history of all code edits.
- Enables collaboration among multiple developers.
- Allows rollback to previous versions if something goes wrong.

### Name 3 alternatives to git:
- Apache Subversion (SVN) - Unreal Engine (Code/Assets)
- Perforce Helix Core (P4) - Unreal Engine (built-in)
- Plastic SCM / Unity Version Control - Unity

### Name 2 differences between git and other version control systems:
- Distributed vs. Centralized: Git is distributed - every developer has a full copy of the repository, while systems like SVN are centralized with a single main server.
  - Need to be online for Server
  - Commit History also only on Server
- Speed and branching: Git handles branching and merging much faster and more efficiently than most older systems like SVN or Perforce.

### Name known issues related to game engines (Unreal, Unity) and version control systems:
#### 1. Large Binary Files
- Game assets (textures, models, audio) are huge and stored as binary files, which Git doesn’t handle efficiently (slow cloning, merging impossible).
- Systems like Perforce or Plastic SCM are preferred because they handle large files and file locking better.

#### 2. Merge Conflicts
- Scenes, prefabs (Unity), and maps (Unreal) are often binary or semi-structured, making automatic merges unreliable — developers must manually resolve conflicts.

#### 3. Storage & Performance Issues
- Repositories can grow massive (tens or hundreds of GBs).
- Git can become very slow with these large histories and files, even with Git LFS.

#### 4. File Locking Needs
- In game production, multiple artists may edit the same asset. Without file locking (which Git lacks natively), work can be overwritten.
- Perforce and Plastic SCM provide exclusive check-outs to prevent this.

#### 5. Engine Integration
- Unreal and Unity need custom plugins or integrations for smooth VCS use.
- Unreal integrates best with Perforce/SVN, while Unity integrates best with Plastic SCM/Unity Version Control.


## Ex 2
### Describe a logging system with your own words:
A logging system records events or messages to track what’s happening during execution.
It helps monitor activity, debug errors, and analyze performance by saving logs with details like time, severity, and context.

### What is the difference between git submodules and git subtrees?
Submodules link to a repo; subtrees copy a repo’s content into yours.

Git Submodules:
- Embed a separate Git repository inside a parent repo as a reference.
- Keeps a fixed commit of the submodule; changes in the submodule need separate commits and pushes.
- Updates require explicit commands (git submodule update).
- Good for keeping external dependencies isolated.

Git Subtrees:
- Merge another repo into a subdirectory of the main repo.
- The subtree’s history is integrated into the main repo.
- Updates can be pulled/pushed with regular Git commands (git subtree pull/push).
- Easier to manage, no extra clone step for contributors.

### What is a build system in C++? Name 3 build systems: 
A build system in C++ is a tool that automates compiling source code, linking libraries, and producing executables or libraries. It handles dependencies and ensures that only the necessary files are rebuilt when changes occur.

- CMake
- Make
- Visual Studio
- Premake

[Source](https://www.reddit.com/r/cpp/comments/i7825h/build_system_whats_your_favorite/)

### What is a package manager in C++? Name 3 package manager: 
A package manager in C++ is a tool that automates downloading, installing, and managing libraries (dependencies) for your C++ projects, ensuring version compatibility and simplifying updates.

- Conan
- vcpkg
- Nix

[Source](https://stackoverflow.com/questions/27866965/does-c-have-a-package-manager-like-npm-pip-gem-etc)

## Ex 3
### What is the difference between a dynamic linked library and a static library?
The primary difference between static linking and dynamic linking is when this address resolution is done.
With static linking, it's done when you compile your program. 
With dynamic linking, it happens when you run your program.
Since dynamic linking defers the final linking step to the time when you actually run your program, this means your program and your program's libraries can be shipped separately.
Static linking means that the code for all routines called by your program becomes part of the executable file.

### Describe a logging system with your own words:
A logging system records events or messages to track what’s happening during execution.
It helps monitor activity, debug errors, and analyze performance by saving logs with details like time, severity, and context.

### What is a Design Pattern?
A design pattern is a general, reusable solution to a commonly occurring problem in software design.
It acts as a blueprint or template for structuring code to solve specific design challenges, but it is not a finished piece of code itself.
Patterns help improve code readability, maintainability, and efficiency, and they provide a common language for developers to communicate about solutions.

### Name and describe 2 Design Patterns (except façade or adapter):
#### Singleton
Ensures only one instance of a class exists and provides a global access point to it.
Useful for shared resources like loggers, config managers, or connection pools.

#### Publisher–Subscriber
Decouples senders (publishers) from receivers (subscribers).
Publishers emit events and subscribers register to be notified when those events occur.
Used in flexible, event-driven systems like games.

## Ex 4

### What is a precompiled header? Name pros and cons:
???

### Describe the layer of abstraction with your own words:
???

### Name the SOLID principles and describe them briefly:
???
