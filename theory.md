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
???

### What is the difference between git submodules and git subtrees?
???

### What is a build system in C++? Name 3 build systems: 
???

### What is a package manager in C++? Name 3 package manager: 
???
