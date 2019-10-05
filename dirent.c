/*code to work with directories,like files in c*/


#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <dirent.h>      // for including all directories functions
int main()
{
DIR *dp;                 // directory pointer
int position;
struct dirent *entry;    // reference pointer to access the dirent structure
dp=opendir("..");        // opens the current  directory
seekdir(dp,15);          // move the cursor to desired position
while(entry=readdir(dp))     // readdir returnsa directory pointer
{puts(entry->d_name);
printf("%d",entry->d_ino);        // d_name is char [] type,d_ino returns serial file no.,
printf("%d",entry->d_namlen);}    //  d_namelen returns length of the name of files
position=telldir(dp);          

printf("%d",telldir(dp));
closedir(dp);
return 0;
}
