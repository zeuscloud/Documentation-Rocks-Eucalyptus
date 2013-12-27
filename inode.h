struct inode {
  mode_t i_mode;	/* file type, protection, etc. */
  nlink_t i_nlinks; /* how many links to this file */
  uid_t i_uid;	/* user id of the file's owner */
  gid_t i_gid; 	/* group number */
  off_t i_size;	/* current file size in bytes */
  time_t i_atime;	/* time of last access (V2 only) */
  time_t i_mtime;	/* when was file data last changed */
  time_t i_ctime;	/* when was inode itself changed (V2 only)*/
  zone_t i_zone[V2_NR_TZONES]; /* zone numbers for direct, ind, and dbl ind */
......
};
