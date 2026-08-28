struct File {
    u8 _c
};

inline bool function FS_IsBusy(File* file) {
    return file->_c & 0x1;
}

inline bool function FS_IsFile(File* file) {
    return file->_c & 0x10;
}