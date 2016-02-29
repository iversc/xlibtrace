/*
XFontStruct * XLoadQueryFont  // 2 args
    "Display *" "display"
    "const char *" "name"
*/
#define __TRACE_RETSTYLE_XLoadQueryFont__ TYPED
#define __TRACE_ARGSTYLE_XLoadQueryFont__ FIXED
#define __TRACE_SAFERETTYPE_XLoadQueryFont__ XFontStruct_p
#define __TRACE_PROTOARGLIST_XLoadQueryFont__ ( Display * display, const char * name)
#define __TRACE_ARGLIST_XLoadQueryFont__ ( display, name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLoadQueryFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLoadQueryFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLoadQueryFont__
#define __TRACE_PRINTF_BODY_XLoadQueryFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLoadQueryFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLoadQueryFont, char_p, name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLoadQueryFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLoadQueryFont, Display_p, display)
__TRACE__(XLoadQueryFont)


/*
XFontStruct * XQueryFont  // 2 args
    "Display *" "display"
    "XID" "font_ID"
*/
#define __TRACE_RETSTYLE_XQueryFont__ TYPED
#define __TRACE_ARGSTYLE_XQueryFont__ FIXED
#define __TRACE_SAFERETTYPE_XQueryFont__ XFontStruct_p
#define __TRACE_PROTOARGLIST_XQueryFont__ ( Display * display, XID font_ID)
#define __TRACE_ARGLIST_XQueryFont__ ( display, font_ID)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryFont__
#define __TRACE_PRINTF_BODY_XQueryFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryFont, XID, font_ID)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryFont, Display_p, display)
__TRACE__(XQueryFont)


/*
XTimeCoord * XGetMotionEvents  // 5 args
    "Display *" "display"
    "Window" "w"
    "Time" "start"
    "Time" "stop"
    "int *" "nevents_return"
*/
#define __TRACE_RETSTYLE_XGetMotionEvents__ TYPED
#define __TRACE_ARGSTYLE_XGetMotionEvents__ FIXED
#define __TRACE_SAFERETTYPE_XGetMotionEvents__ XTimeCoord_p
#define __TRACE_PROTOARGLIST_XGetMotionEvents__ ( Display * display, Window w, Time start, Time stop, int * nevents_return)
#define __TRACE_ARGLIST_XGetMotionEvents__ ( display, w, start, stop, nevents_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetMotionEvents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetMotionEvents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetMotionEvents__
#define __TRACE_PRINTF_BODY_XGetMotionEvents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetMotionEvents, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetMotionEvents, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetMotionEvents, Time, start) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetMotionEvents, Time, stop) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetMotionEvents, int_p, nevents_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetMotionEvents__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetMotionEvents, Display_p, display)
__TRACE__(XGetMotionEvents)


/*
XModifierKeymap * XDeleteModifiermapEntry  // 3 args
    "XModifierKeymap *" "modmap"
    "KeyCode" "keycode_entry"
    "int" "modifier"
*/
#define __TRACE_RETSTYLE_XDeleteModifiermapEntry__ TYPED
#define __TRACE_ARGSTYLE_XDeleteModifiermapEntry__ FIXED
#define __TRACE_SAFERETTYPE_XDeleteModifiermapEntry__ XModifierKeymap_p
#define __TRACE_PROTOARGLIST_XDeleteModifiermapEntry__ ( XModifierKeymap * modmap, KeyCode keycode_entry, int modifier)
#define __TRACE_ARGLIST_XDeleteModifiermapEntry__ ( modmap, keycode_entry, modifier)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDeleteModifiermapEntry__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDeleteModifiermapEntry__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDeleteModifiermapEntry__
#define __TRACE_PRINTF_BODY_XDeleteModifiermapEntry__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDeleteModifiermapEntry, XModifierKeymap_p, modmap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDeleteModifiermapEntry, KeyCode, keycode_entry) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDeleteModifiermapEntry, int, modifier)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDeleteModifiermapEntry__ 
__TRACE__(XDeleteModifiermapEntry)


/*
XModifierKeymap * XGetModifierMapping  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XGetModifierMapping__ TYPED
#define __TRACE_ARGSTYLE_XGetModifierMapping__ FIXED
#define __TRACE_SAFERETTYPE_XGetModifierMapping__ XModifierKeymap_p
#define __TRACE_PROTOARGLIST_XGetModifierMapping__ ( Display * display)
#define __TRACE_ARGLIST_XGetModifierMapping__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetModifierMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetModifierMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetModifierMapping__
#define __TRACE_PRINTF_BODY_XGetModifierMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetModifierMapping, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetModifierMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetModifierMapping, Display_p, display)
__TRACE__(XGetModifierMapping)


/*
XModifierKeymap * XInsertModifiermapEntry  // 3 args
    "XModifierKeymap *" "modmap"
    "KeyCode" "keycode_entry"
    "int" "modifier"
*/
#define __TRACE_RETSTYLE_XInsertModifiermapEntry__ TYPED
#define __TRACE_ARGSTYLE_XInsertModifiermapEntry__ FIXED
#define __TRACE_SAFERETTYPE_XInsertModifiermapEntry__ XModifierKeymap_p
#define __TRACE_PROTOARGLIST_XInsertModifiermapEntry__ ( XModifierKeymap * modmap, KeyCode keycode_entry, int modifier)
#define __TRACE_ARGLIST_XInsertModifiermapEntry__ ( modmap, keycode_entry, modifier)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInsertModifiermapEntry__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInsertModifiermapEntry__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInsertModifiermapEntry__
#define __TRACE_PRINTF_BODY_XInsertModifiermapEntry__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInsertModifiermapEntry, XModifierKeymap_p, modmap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInsertModifiermapEntry, KeyCode, keycode_entry) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInsertModifiermapEntry, int, modifier)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInsertModifiermapEntry__ 
__TRACE__(XInsertModifiermapEntry)


/*
XModifierKeymap * XNewModifiermap  // 1 args
    "int" "max_keys_per_mod"
*/
#define __TRACE_RETSTYLE_XNewModifiermap__ TYPED
#define __TRACE_ARGSTYLE_XNewModifiermap__ FIXED
#define __TRACE_SAFERETTYPE_XNewModifiermap__ XModifierKeymap_p
#define __TRACE_PROTOARGLIST_XNewModifiermap__ ( int max_keys_per_mod)
#define __TRACE_ARGLIST_XNewModifiermap__ ( max_keys_per_mod)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XNewModifiermap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XNewModifiermap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XNewModifiermap__
#define __TRACE_PRINTF_BODY_XNewModifiermap__ \
    __TRACE_PRINTF_ARG__(XNewModifiermap, int, max_keys_per_mod)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XNewModifiermap__ 
__TRACE__(XNewModifiermap)


/*
XImage * XCreateImage  // 10 args
    "Display *" "display"
    "Visual *" "visual"
    "unsigned int" "depth"
    "int" "format"
    "int" "offset"
    "char *" "data"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "bitmap_pad"
    "int" "bytes_per_line"
*/
#define __TRACE_RETSTYLE_XCreateImage__ TYPED
#define __TRACE_ARGSTYLE_XCreateImage__ FIXED
#define __TRACE_SAFERETTYPE_XCreateImage__ XImage_p
#define __TRACE_PROTOARGLIST_XCreateImage__ ( Display * display, Visual * visual, unsigned int depth, int format, int offset, char * data, unsigned int width, unsigned int height, int bitmap_pad, int bytes_per_line)
#define __TRACE_ARGLIST_XCreateImage__ ( display, visual, depth, format, offset, data, width, height, bitmap_pad, bytes_per_line)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateImage__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateImage__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateImage__
#define __TRACE_PRINTF_BODY_XCreateImage__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateImage, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, Visual_p, visual) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, unsigned_int, depth) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, int_ImageFormat, format) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, int, offset) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, char_p, data) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, int, bitmap_pad) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateImage, int, bytes_per_line)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateImage__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateImage, Display_p, display)
__TRACE__(XCreateImage)


/*
Status XInitImage  // 1 args
    "XImage *" "image"
*/
#define __TRACE_RETSTYLE_XInitImage__ TYPED
#define __TRACE_ARGSTYLE_XInitImage__ FIXED
#define __TRACE_SAFERETTYPE_XInitImage__ Status
#define __TRACE_PROTOARGLIST_XInitImage__ ( XImage * image)
#define __TRACE_ARGLIST_XInitImage__ ( image)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInitImage__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInitImage__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInitImage__
#define __TRACE_PRINTF_BODY_XInitImage__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInitImage, XImage_p, image)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInitImage__ 
__TRACE__(XInitImage)


/*
XImage * XGetImage  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned long" "plane_mask"
    "int" "format"
*/
#define __TRACE_RETSTYLE_XGetImage__ TYPED
#define __TRACE_ARGSTYLE_XGetImage__ FIXED
#define __TRACE_SAFERETTYPE_XGetImage__ XImage_p
#define __TRACE_PROTOARGLIST_XGetImage__ ( Display * display, Drawable d, int x, int y, unsigned int width, unsigned int height, unsigned long plane_mask, int format)
#define __TRACE_ARGLIST_XGetImage__ ( display, d, x, y, width, height, plane_mask, format)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetImage__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetImage__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetImage__
#define __TRACE_PRINTF_BODY_XGetImage__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetImage, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, unsigned_long, plane_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetImage, int_ImageFormat, format)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetImage__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetImage, Display_p, display)
__TRACE__(XGetImage)


/*
XImage * XGetSubImage  // 11 args
    "Display *" "display"
    "Drawable" "d"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned long" "plane_mask"
    "int" "format"
    "XImage *" "dest_image"
    "int" "dest_x"
    "int" "dest_y"
*/
#define __TRACE_RETSTYLE_XGetSubImage__ TYPED
#define __TRACE_ARGSTYLE_XGetSubImage__ FIXED
#define __TRACE_SAFERETTYPE_XGetSubImage__ XImage_p
#define __TRACE_PROTOARGLIST_XGetSubImage__ ( Display * display, Drawable d, int x, int y, unsigned int width, unsigned int height, unsigned long plane_mask, int format, XImage * dest_image, int dest_x, int dest_y)
#define __TRACE_ARGLIST_XGetSubImage__ ( display, d, x, y, width, height, plane_mask, format, dest_image, dest_x, dest_y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetSubImage__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetSubImage__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetSubImage__
#define __TRACE_PRINTF_BODY_XGetSubImage__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetSubImage, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, unsigned_long, plane_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, int_ImageFormat, format) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, XImage_p, dest_image) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, int, dest_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSubImage, int, dest_y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetSubImage__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetSubImage, Display_p, display)
__TRACE__(XGetSubImage)


/*
Display * XOpenDisplay  // 1 args
    "const char *" "display_name"
*/
#define __TRACE_RETSTYLE_XOpenDisplay__ TYPED
#define __TRACE_ARGSTYLE_XOpenDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XOpenDisplay__ Display_p
#define __TRACE_PROTOARGLIST_XOpenDisplay__ ( const char * display_name)
#define __TRACE_ARGLIST_XOpenDisplay__ ( display_name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XOpenDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XOpenDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XOpenDisplay__
#define __TRACE_PRINTF_BODY_XOpenDisplay__ \
    __TRACE_PRINTF_ARG__(XOpenDisplay, char_p, display_name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XOpenDisplay__ 
__TRACE__(XOpenDisplay)


/*
void XrmInitialize  // 0 args
*/
#define __TRACE_RETSTYLE_XrmInitialize__ VOID
#define __TRACE_ARGSTYLE_XrmInitialize__ FIXED
#define __TRACE_SAFERETTYPE_XrmInitialize__ void
#define __TRACE_PROTOARGLIST_XrmInitialize__ ()
#define __TRACE_ARGLIST_XrmInitialize__ ()
#define __TRACE_ADDITIONAL_LOCAL_VARS_XrmInitialize__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XrmInitialize__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XrmInitialize__
#define __TRACE_PRINTF_BODY_XrmInitialize__ 
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XrmInitialize__ 
__TRACE__(XrmInitialize)


/*
char * XFetchBytes  // 2 args
    "Display *" "display"
    "int *" "nbytes_return"
*/
#define __TRACE_RETSTYLE_XFetchBytes__ TYPED
#define __TRACE_ARGSTYLE_XFetchBytes__ FIXED
#define __TRACE_SAFERETTYPE_XFetchBytes__ char_p
#define __TRACE_PROTOARGLIST_XFetchBytes__ ( Display * display, int * nbytes_return)
#define __TRACE_ARGLIST_XFetchBytes__ ( display, nbytes_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFetchBytes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFetchBytes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFetchBytes__
#define __TRACE_PRINTF_BODY_XFetchBytes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFetchBytes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFetchBytes, int_p, nbytes_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFetchBytes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFetchBytes, Display_p, display)
__TRACE__(XFetchBytes)


/*
char * XFetchBuffer  // 3 args
    "Display *" "display"
    "int *" "nbytes_return"
    "int" "buffer"
*/
#define __TRACE_RETSTYLE_XFetchBuffer__ TYPED
#define __TRACE_ARGSTYLE_XFetchBuffer__ FIXED
#define __TRACE_SAFERETTYPE_XFetchBuffer__ char_p
#define __TRACE_PROTOARGLIST_XFetchBuffer__ ( Display * display, int * nbytes_return, int buffer)
#define __TRACE_ARGLIST_XFetchBuffer__ ( display, nbytes_return, buffer)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFetchBuffer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFetchBuffer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFetchBuffer__
#define __TRACE_PRINTF_BODY_XFetchBuffer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFetchBuffer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFetchBuffer, int_p, nbytes_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFetchBuffer, int, buffer)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFetchBuffer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFetchBuffer, Display_p, display)
__TRACE__(XFetchBuffer)


/*
char * XGetAtomName  // 2 args
    "Display *" "display"
    "Atom" "atom"
*/
#define __TRACE_RETSTYLE_XGetAtomName__ TYPED
#define __TRACE_ARGSTYLE_XGetAtomName__ FIXED
#define __TRACE_SAFERETTYPE_XGetAtomName__ char_p
#define __TRACE_PROTOARGLIST_XGetAtomName__ ( Display * display, Atom atom)
#define __TRACE_ARGLIST_XGetAtomName__ ( display, atom)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetAtomName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetAtomName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetAtomName__
#define __TRACE_PRINTF_BODY_XGetAtomName__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetAtomName, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetAtomName, Atom, atom)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetAtomName__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetAtomName, Display_p, display)
__TRACE__(XGetAtomName)


/*
Status XGetAtomNames  // 4 args
    "Display *" "dpy"
    "Atom *" "atoms"
    "int" "count"
    "char **" "names_return"
*/
#define __TRACE_RETSTYLE_XGetAtomNames__ TYPED
#define __TRACE_ARGSTYLE_XGetAtomNames__ FIXED
#define __TRACE_SAFERETTYPE_XGetAtomNames__ Status
#define __TRACE_PROTOARGLIST_XGetAtomNames__ ( Display * dpy, Atom * atoms, int count, char ** names_return)
#define __TRACE_ARGLIST_XGetAtomNames__ ( dpy, atoms, count, names_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetAtomNames__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetAtomNames__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetAtomNames__
#define __TRACE_PRINTF_BODY_XGetAtomNames__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetAtomNames, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetAtomNames, Atom_p, atoms) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetAtomNames, int, count) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetAtomNames, char_pp, names_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetAtomNames__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetAtomNames, Display_p, dpy)
__TRACE__(XGetAtomNames)


/*
char * XGetDefault  // 3 args
    "Display *" "display"
    "const char *" "program"
    "const char *" "option"
*/
#define __TRACE_RETSTYLE_XGetDefault__ TYPED
#define __TRACE_ARGSTYLE_XGetDefault__ FIXED
#define __TRACE_SAFERETTYPE_XGetDefault__ char_p
#define __TRACE_PROTOARGLIST_XGetDefault__ ( Display * display, const char * program, const char * option)
#define __TRACE_ARGLIST_XGetDefault__ ( display, program, option)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetDefault__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetDefault__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetDefault__
#define __TRACE_PRINTF_BODY_XGetDefault__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetDefault, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetDefault, char_p, program) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetDefault, char_p, option)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetDefault__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetDefault, Display_p, display)
__TRACE__(XGetDefault)


/*
char * XDisplayName  // 1 args
    "const char *" "string"
*/
#define __TRACE_RETSTYLE_XDisplayName__ TYPED
#define __TRACE_ARGSTYLE_XDisplayName__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayName__ char_p
#define __TRACE_PROTOARGLIST_XDisplayName__ ( const char * string)
#define __TRACE_ARGLIST_XDisplayName__ ( string)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayName__
#define __TRACE_PRINTF_BODY_XDisplayName__ \
    __TRACE_PRINTF_ARG__(XDisplayName, char_p, string)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayName__ 
__TRACE__(XDisplayName)


/*
char * XKeysymToString  // 1 args
    "KeySym" "keysym"
*/
#define __TRACE_RETSTYLE_XKeysymToString__ TYPED
#define __TRACE_ARGSTYLE_XKeysymToString__ FIXED
#define __TRACE_SAFERETTYPE_XKeysymToString__ char_p
#define __TRACE_PROTOARGLIST_XKeysymToString__ ( KeySym keysym)
#define __TRACE_ARGLIST_XKeysymToString__ ( keysym)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XKeysymToString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XKeysymToString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XKeysymToString__
#define __TRACE_PRINTF_BODY_XKeysymToString__ \
    __TRACE_PRINTF_ARG__(XKeysymToString, KeySym, keysym)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XKeysymToString__ 
__TRACE__(XKeysymToString)


/*
Atom XInternAtom  // 3 args
    "Display *" "display"
    "const char *" "atom_name"
    "Bool" "only_if_exists"
*/
#define __TRACE_RETSTYLE_XInternAtom__ TYPED
#define __TRACE_ARGSTYLE_XInternAtom__ FIXED
#define __TRACE_SAFERETTYPE_XInternAtom__ Atom
#define __TRACE_PROTOARGLIST_XInternAtom__ ( Display * display, const char * atom_name, Bool only_if_exists)
#define __TRACE_ARGLIST_XInternAtom__ ( display, atom_name, only_if_exists)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInternAtom__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInternAtom__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInternAtom__
#define __TRACE_PRINTF_BODY_XInternAtom__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInternAtom, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtom, char_p, atom_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtom, Bool, only_if_exists)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInternAtom__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XInternAtom, Display_p, display)
__TRACE__(XInternAtom)


/*
Status XInternAtoms  // 5 args
    "Display *" "dpy"
    "char **" "names"
    "int" "count"
    "Bool" "onlyIfExists"
    "Atom *" "atoms_return"
*/
#define __TRACE_RETSTYLE_XInternAtoms__ TYPED
#define __TRACE_ARGSTYLE_XInternAtoms__ FIXED
#define __TRACE_SAFERETTYPE_XInternAtoms__ Status
#define __TRACE_PROTOARGLIST_XInternAtoms__ ( Display * dpy, char ** names, int count, Bool onlyIfExists, Atom * atoms_return)
#define __TRACE_ARGLIST_XInternAtoms__ ( dpy, names, count, onlyIfExists, atoms_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInternAtoms__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInternAtoms__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInternAtoms__
#define __TRACE_PRINTF_BODY_XInternAtoms__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInternAtoms, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtoms, char_pp, names) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtoms, int, count) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtoms, Bool, onlyIfExists) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternAtoms, Atom_p, atoms_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInternAtoms__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XInternAtoms, Display_p, dpy)
__TRACE__(XInternAtoms)


/*
Colormap XCopyColormapAndFree  // 2 args
    "Display *" "display"
    "Colormap" "colormap"
*/
#define __TRACE_RETSTYLE_XCopyColormapAndFree__ TYPED
#define __TRACE_ARGSTYLE_XCopyColormapAndFree__ FIXED
#define __TRACE_SAFERETTYPE_XCopyColormapAndFree__ Colormap
#define __TRACE_PROTOARGLIST_XCopyColormapAndFree__ ( Display * display, Colormap colormap)
#define __TRACE_ARGLIST_XCopyColormapAndFree__ ( display, colormap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCopyColormapAndFree__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCopyColormapAndFree__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCopyColormapAndFree__
#define __TRACE_PRINTF_BODY_XCopyColormapAndFree__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCopyColormapAndFree, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyColormapAndFree, Colormap, colormap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCopyColormapAndFree__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCopyColormapAndFree, Display_p, display)
__TRACE__(XCopyColormapAndFree)


/*
Colormap XCreateColormap  // 4 args
    "Display *" "display"
    "Window" "w"
    "Visual *" "visual"
    "int" "alloc"
*/
#define __TRACE_RETSTYLE_XCreateColormap__ TYPED
#define __TRACE_ARGSTYLE_XCreateColormap__ FIXED
#define __TRACE_SAFERETTYPE_XCreateColormap__ Colormap
#define __TRACE_PROTOARGLIST_XCreateColormap__ ( Display * display, Window w, Visual * visual, int alloc)
#define __TRACE_ARGLIST_XCreateColormap__ ( display, w, visual, alloc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateColormap__
#define __TRACE_PRINTF_BODY_XCreateColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateColormap, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateColormap, Visual_p, visual) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateColormap, int_ColormapAlloc, alloc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateColormap, Display_p, display)
__TRACE__(XCreateColormap)


/*
Cursor XCreatePixmapCursor  // 7 args
    "Display *" "display"
    "Pixmap" "source"
    "Pixmap" "mask"
    "XColor *" "foreground_color"
    "XColor *" "background_color"
    "unsigned int" "x"
    "unsigned int" "y"
*/
#define __TRACE_RETSTYLE_XCreatePixmapCursor__ TYPED
#define __TRACE_ARGSTYLE_XCreatePixmapCursor__ FIXED
#define __TRACE_SAFERETTYPE_XCreatePixmapCursor__ Cursor
#define __TRACE_PROTOARGLIST_XCreatePixmapCursor__ ( Display * display, Pixmap source, Pixmap mask, XColor * foreground_color, XColor * background_color, unsigned int x, unsigned int y)
#define __TRACE_ARGLIST_XCreatePixmapCursor__ ( display, source, mask, foreground_color, background_color, x, y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreatePixmapCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreatePixmapCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreatePixmapCursor__
#define __TRACE_PRINTF_BODY_XCreatePixmapCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, Pixmap, source) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, Pixmap, mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, XColor_p, foreground_color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, XColor_p, background_color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, unsigned_int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapCursor, unsigned_int, y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreatePixmapCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreatePixmapCursor, Display_p, display)
__TRACE__(XCreatePixmapCursor)


/*
Cursor XCreateGlyphCursor  // 7 args
    "Display *" "display"
    "Font" "source_font"
    "Font" "mask_font"
    "unsigned int" "source_char"
    "unsigned int" "mask_char"
    "XColor const *" "foreground_color"
    "XColor const *" "background_color"
*/
#define __TRACE_RETSTYLE_XCreateGlyphCursor__ TYPED
#define __TRACE_ARGSTYLE_XCreateGlyphCursor__ FIXED
#define __TRACE_SAFERETTYPE_XCreateGlyphCursor__ Cursor
#define __TRACE_PROTOARGLIST_XCreateGlyphCursor__ ( Display * display, Font source_font, Font mask_font, unsigned int source_char, unsigned int mask_char, XColor const * foreground_color, XColor const * background_color)
#define __TRACE_ARGLIST_XCreateGlyphCursor__ ( display, source_font, mask_font, source_char, mask_char, foreground_color, background_color)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateGlyphCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateGlyphCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateGlyphCursor__
#define __TRACE_PRINTF_BODY_XCreateGlyphCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, Font, source_font) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, Font, mask_font) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, unsigned_int, source_char) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, unsigned_int, mask_char) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, XColor_const_p, foreground_color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGlyphCursor, XColor_const_p, background_color)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateGlyphCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateGlyphCursor, Display_p, display)
__TRACE__(XCreateGlyphCursor)


/*
Cursor XCreateFontCursor  // 2 args
    "Display *" "display"
    "unsigned int" "shape"
*/
#define __TRACE_RETSTYLE_XCreateFontCursor__ TYPED
#define __TRACE_ARGSTYLE_XCreateFontCursor__ FIXED
#define __TRACE_SAFERETTYPE_XCreateFontCursor__ Cursor
#define __TRACE_PROTOARGLIST_XCreateFontCursor__ ( Display * display, unsigned int shape)
#define __TRACE_ARGLIST_XCreateFontCursor__ ( display, shape)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateFontCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateFontCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateFontCursor__
#define __TRACE_PRINTF_BODY_XCreateFontCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateFontCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateFontCursor, unsigned_int, shape)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateFontCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateFontCursor, Display_p, display)
__TRACE__(XCreateFontCursor)


/*
Font XLoadFont  // 2 args
    "Display *" "display"
    "const char *" "name"
*/
#define __TRACE_RETSTYLE_XLoadFont__ TYPED
#define __TRACE_ARGSTYLE_XLoadFont__ FIXED
#define __TRACE_SAFERETTYPE_XLoadFont__ Font
#define __TRACE_PROTOARGLIST_XLoadFont__ ( Display * display, const char * name)
#define __TRACE_ARGLIST_XLoadFont__ ( display, name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLoadFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLoadFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLoadFont__
#define __TRACE_PRINTF_BODY_XLoadFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLoadFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLoadFont, char_p, name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLoadFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLoadFont, Display_p, display)
__TRACE__(XLoadFont)


/*
GC XCreateGC  // 4 args
    "Display *" "display"
    "Drawable" "d"
    "unsigned long" "valuemask"
    "XGCValues *" "values"
*/
#define __TRACE_RETSTYLE_XCreateGC__ TYPED
#define __TRACE_ARGSTYLE_XCreateGC__ FIXED
#define __TRACE_SAFERETTYPE_XCreateGC__ GC
#define __TRACE_PROTOARGLIST_XCreateGC__ ( Display * display, Drawable d, unsigned long valuemask, XGCValues * values)
#define __TRACE_ARGLIST_XCreateGC__ ( display, d, valuemask, values)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateGC__
#define __TRACE_PRINTF_BODY_XCreateGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGC, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGC, unsigned_long_GCComponent, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateGC, XGCValues_p, values)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateGC, Display_p, display)
__TRACE__(XCreateGC)


/*
GContext XGContextFromGC  // 1 args
    "GC" "gc"
*/
#define __TRACE_RETSTYLE_XGContextFromGC__ TYPED
#define __TRACE_ARGSTYLE_XGContextFromGC__ FIXED
#define __TRACE_SAFERETTYPE_XGContextFromGC__ GContext
#define __TRACE_PROTOARGLIST_XGContextFromGC__ ( GC gc)
#define __TRACE_ARGLIST_XGContextFromGC__ ( gc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGContextFromGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGContextFromGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGContextFromGC__
#define __TRACE_PRINTF_BODY_XGContextFromGC__ \
    __TRACE_PRINTF_ARG__(XGContextFromGC, GC, gc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGContextFromGC__ 
__TRACE__(XGContextFromGC)


/*
void XFlushGC  // 2 args
    "Display *" "display"
    "GC" "gc"
*/
#define __TRACE_RETSTYLE_XFlushGC__ VOID
#define __TRACE_ARGSTYLE_XFlushGC__ FIXED
#define __TRACE_SAFERETTYPE_XFlushGC__ void
#define __TRACE_PROTOARGLIST_XFlushGC__ ( Display * display, GC gc)
#define __TRACE_ARGLIST_XFlushGC__ ( display, gc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFlushGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFlushGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFlushGC__
#define __TRACE_PRINTF_BODY_XFlushGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFlushGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFlushGC, GC, gc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFlushGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFlushGC, Display_p, display)
__TRACE__(XFlushGC)


/*
Pixmap XCreatePixmap  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int" "depth"
*/
#define __TRACE_RETSTYLE_XCreatePixmap__ TYPED
#define __TRACE_ARGSTYLE_XCreatePixmap__ FIXED
#define __TRACE_SAFERETTYPE_XCreatePixmap__ Pixmap
#define __TRACE_PROTOARGLIST_XCreatePixmap__ ( Display * display, Drawable d, unsigned int width, unsigned int height, unsigned int depth)
#define __TRACE_ARGLIST_XCreatePixmap__ ( display, d, width, height, depth)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreatePixmap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreatePixmap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreatePixmap__
#define __TRACE_PRINTF_BODY_XCreatePixmap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreatePixmap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmap, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmap, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmap, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmap, unsigned_int, depth)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreatePixmap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreatePixmap, Display_p, display)
__TRACE__(XCreatePixmap)


/*
Pixmap XCreateBitmapFromData  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "const char *" "data"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XCreateBitmapFromData__ TYPED
#define __TRACE_ARGSTYLE_XCreateBitmapFromData__ FIXED
#define __TRACE_SAFERETTYPE_XCreateBitmapFromData__ Pixmap
#define __TRACE_PROTOARGLIST_XCreateBitmapFromData__ ( Display * display, Drawable d, const char * data, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XCreateBitmapFromData__ ( display, d, data, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateBitmapFromData__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateBitmapFromData__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateBitmapFromData__
#define __TRACE_PRINTF_BODY_XCreateBitmapFromData__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateBitmapFromData, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateBitmapFromData, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateBitmapFromData, char_p, data) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateBitmapFromData, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateBitmapFromData, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateBitmapFromData__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateBitmapFromData, Display_p, display)
__TRACE__(XCreateBitmapFromData)


/*
Pixmap XCreatePixmapFromBitmapData  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "char *" "data"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned long" "fg"
    "unsigned long" "bg"
    "unsigned int" "depth"
*/
#define __TRACE_RETSTYLE_XCreatePixmapFromBitmapData__ TYPED
#define __TRACE_ARGSTYLE_XCreatePixmapFromBitmapData__ FIXED
#define __TRACE_SAFERETTYPE_XCreatePixmapFromBitmapData__ Pixmap
#define __TRACE_PROTOARGLIST_XCreatePixmapFromBitmapData__ ( Display * display, Drawable d, char * data, unsigned int width, unsigned int height, unsigned long fg, unsigned long bg, unsigned int depth)
#define __TRACE_ARGLIST_XCreatePixmapFromBitmapData__ ( display, d, data, width, height, fg, bg, depth)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreatePixmapFromBitmapData__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreatePixmapFromBitmapData__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreatePixmapFromBitmapData__
#define __TRACE_PRINTF_BODY_XCreatePixmapFromBitmapData__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, char_p, data) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, unsigned_long, fg) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, unsigned_long, bg) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreatePixmapFromBitmapData, unsigned_int, depth)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreatePixmapFromBitmapData__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreatePixmapFromBitmapData, Display_p, display)
__TRACE__(XCreatePixmapFromBitmapData)


/*
Window XCreateSimpleWindow  // 9 args
    "Display *" "display"
    "Window" "parent"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int" "border_width"
    "unsigned long" "border"
    "unsigned long" "background"
*/
#define __TRACE_RETSTYLE_XCreateSimpleWindow__ TYPED
#define __TRACE_ARGSTYLE_XCreateSimpleWindow__ FIXED
#define __TRACE_SAFERETTYPE_XCreateSimpleWindow__ Window
#define __TRACE_PROTOARGLIST_XCreateSimpleWindow__ ( Display * display, Window parent, int x, int y, unsigned int width, unsigned int height, unsigned int border_width, unsigned long border, unsigned long background)
#define __TRACE_ARGLIST_XCreateSimpleWindow__ ( display, parent, x, y, width, height, border_width, border, background)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateSimpleWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateSimpleWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateSimpleWindow__
#define __TRACE_PRINTF_BODY_XCreateSimpleWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, Window, parent) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, unsigned_int, border_width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, unsigned_long, border) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateSimpleWindow, unsigned_long, background)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateSimpleWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateSimpleWindow, Display_p, display)
__TRACE__(XCreateSimpleWindow)


/*
Window XGetSelectionOwner  // 2 args
    "Display *" "display"
    "Atom" "selection"
*/
#define __TRACE_RETSTYLE_XGetSelectionOwner__ TYPED
#define __TRACE_ARGSTYLE_XGetSelectionOwner__ FIXED
#define __TRACE_SAFERETTYPE_XGetSelectionOwner__ Window
#define __TRACE_PROTOARGLIST_XGetSelectionOwner__ ( Display * display, Atom selection)
#define __TRACE_ARGLIST_XGetSelectionOwner__ ( display, selection)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetSelectionOwner__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetSelectionOwner__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetSelectionOwner__
#define __TRACE_PRINTF_BODY_XGetSelectionOwner__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetSelectionOwner, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetSelectionOwner, Atom, selection)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetSelectionOwner__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetSelectionOwner, Display_p, display)
__TRACE__(XGetSelectionOwner)


/*
Window XCreateWindow  // 12 args
    "Display *" "display"
    "Window" "parent"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int" "border_width"
    "int" "depth"
    "unsigned int" "class"
    "Visual *" "visual"
    "unsigned long" "valuemask"
    "XSetWindowAttributes *" "attributes"
*/
#define __TRACE_RETSTYLE_XCreateWindow__ TYPED
#define __TRACE_ARGSTYLE_XCreateWindow__ FIXED
#define __TRACE_SAFERETTYPE_XCreateWindow__ Window
#define __TRACE_PROTOARGLIST_XCreateWindow__ ( Display * display, Window parent, int x, int y, unsigned int width, unsigned int height, unsigned int border_width, int depth, unsigned int class, Visual * visual, unsigned long valuemask, XSetWindowAttributes * attributes)
#define __TRACE_ARGLIST_XCreateWindow__ ( display, parent, x, y, width, height, border_width, depth, class, visual, valuemask, attributes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateWindow__
#define __TRACE_PRINTF_BODY_XCreateWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, Window, parent) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, unsigned_int, border_width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, int, depth) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, int_WindowClass, class) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, Visual_p, visual) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, unsigned_long_WindowAttributes, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateWindow, XSetWindowAttributes_p, attributes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateWindow, Display_p, display)
__TRACE__(XCreateWindow)


/*
Colormap * XListInstalledColormaps  // 3 args
    "Display *" "display"
    "Window" "w"
    "int *" "num_return"
*/
#define __TRACE_RETSTYLE_XListInstalledColormaps__ TYPED
#define __TRACE_ARGSTYLE_XListInstalledColormaps__ FIXED
#define __TRACE_SAFERETTYPE_XListInstalledColormaps__ Colormap_p
#define __TRACE_PROTOARGLIST_XListInstalledColormaps__ ( Display * display, Window w, int * num_return)
#define __TRACE_ARGLIST_XListInstalledColormaps__ ( display, w, num_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListInstalledColormaps__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListInstalledColormaps__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListInstalledColormaps__
#define __TRACE_PRINTF_BODY_XListInstalledColormaps__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListInstalledColormaps, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListInstalledColormaps, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListInstalledColormaps, int_p, num_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListInstalledColormaps__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListInstalledColormaps, Display_p, display)
__TRACE__(XListInstalledColormaps)


/*
char ** XListFonts  // 4 args
    "Display *" "display"
    "const char *" "pattern"
    "int" "maxnames"
    "int *" "actual_count_return"
*/
#define __TRACE_RETSTYLE_XListFonts__ TYPED
#define __TRACE_ARGSTYLE_XListFonts__ FIXED
#define __TRACE_SAFERETTYPE_XListFonts__ char_pp
#define __TRACE_PROTOARGLIST_XListFonts__ ( Display * display, const char * pattern, int maxnames, int * actual_count_return)
#define __TRACE_ARGLIST_XListFonts__ ( display, pattern, maxnames, actual_count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListFonts__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListFonts__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListFonts__
#define __TRACE_PRINTF_BODY_XListFonts__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListFonts, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFonts, char_p, pattern) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFonts, int, maxnames) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFonts, int_p, actual_count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListFonts__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListFonts, Display_p, display)
__TRACE__(XListFonts)


/*
char ** XListFontsWithInfo  // 5 args
    "Display *" "display"
    "const char *" "pattern"
    "int" "maxnames"
    "int *" "count_return"
    "XFontStruct **" "info_return"
*/
#define __TRACE_RETSTYLE_XListFontsWithInfo__ TYPED
#define __TRACE_ARGSTYLE_XListFontsWithInfo__ FIXED
#define __TRACE_SAFERETTYPE_XListFontsWithInfo__ char_pp
#define __TRACE_PROTOARGLIST_XListFontsWithInfo__ ( Display * display, const char * pattern, int maxnames, int * count_return, XFontStruct ** info_return)
#define __TRACE_ARGLIST_XListFontsWithInfo__ ( display, pattern, maxnames, count_return, info_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListFontsWithInfo__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListFontsWithInfo__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListFontsWithInfo__
#define __TRACE_PRINTF_BODY_XListFontsWithInfo__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListFontsWithInfo, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFontsWithInfo, char_p, pattern) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFontsWithInfo, int, maxnames) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFontsWithInfo, int_p, count_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListFontsWithInfo, XFontStruct_pp, info_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListFontsWithInfo__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListFontsWithInfo, Display_p, display)
__TRACE__(XListFontsWithInfo)


/*
char ** XGetFontPath  // 2 args
    "Display *" "display"
    "int *" "npaths_return"
*/
#define __TRACE_RETSTYLE_XGetFontPath__ TYPED
#define __TRACE_ARGSTYLE_XGetFontPath__ FIXED
#define __TRACE_SAFERETTYPE_XGetFontPath__ char_pp
#define __TRACE_PROTOARGLIST_XGetFontPath__ ( Display * display, int * npaths_return)
#define __TRACE_ARGLIST_XGetFontPath__ ( display, npaths_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetFontPath__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetFontPath__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetFontPath__
#define __TRACE_PRINTF_BODY_XGetFontPath__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetFontPath, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetFontPath, int_p, npaths_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetFontPath__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetFontPath, Display_p, display)
__TRACE__(XGetFontPath)


/*
char ** XListExtensions  // 2 args
    "Display *" "display"
    "int *" "nextensions_return"
*/
#define __TRACE_RETSTYLE_XListExtensions__ TYPED
#define __TRACE_ARGSTYLE_XListExtensions__ FIXED
#define __TRACE_SAFERETTYPE_XListExtensions__ char_pp
#define __TRACE_PROTOARGLIST_XListExtensions__ ( Display * display, int * nextensions_return)
#define __TRACE_ARGLIST_XListExtensions__ ( display, nextensions_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListExtensions__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListExtensions__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListExtensions__
#define __TRACE_PRINTF_BODY_XListExtensions__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListExtensions, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListExtensions, int_p, nextensions_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListExtensions__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListExtensions, Display_p, display)
__TRACE__(XListExtensions)


/*
Atom * XListProperties  // 3 args
    "Display *" "display"
    "Window" "w"
    "int *" "num_prop_return"
*/
#define __TRACE_RETSTYLE_XListProperties__ TYPED
#define __TRACE_ARGSTYLE_XListProperties__ FIXED
#define __TRACE_SAFERETTYPE_XListProperties__ Atom_p
#define __TRACE_PROTOARGLIST_XListProperties__ ( Display * display, Window w, int * num_prop_return)
#define __TRACE_ARGLIST_XListProperties__ ( display, w, num_prop_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListProperties__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListProperties__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListProperties__
#define __TRACE_PRINTF_BODY_XListProperties__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListProperties, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListProperties, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListProperties, int_p, num_prop_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListProperties__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListProperties, Display_p, display)
__TRACE__(XListProperties)


/*
XHostAddress * XListHosts  // 3 args
    "Display *" "display"
    "int *" "nhosts_return"
    "Bool *" "state_return"
*/
#define __TRACE_RETSTYLE_XListHosts__ TYPED
#define __TRACE_ARGSTYLE_XListHosts__ FIXED
#define __TRACE_SAFERETTYPE_XListHosts__ XHostAddress_p
#define __TRACE_PROTOARGLIST_XListHosts__ ( Display * display, int * nhosts_return, Bool * state_return)
#define __TRACE_ARGLIST_XListHosts__ ( display, nhosts_return, state_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListHosts__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListHosts__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListHosts__
#define __TRACE_PRINTF_BODY_XListHosts__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListHosts, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListHosts, int_p, nhosts_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListHosts, Bool_p, state_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListHosts__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListHosts, Display_p, display)
__TRACE__(XListHosts)


/*
KeySym XKeycodeToKeysym  // 3 args
    "Display *" "display"
    "KeyCode" "keycode"
    "int" "index"
*/
#define __TRACE_RETSTYLE_XKeycodeToKeysym__ TYPED
#define __TRACE_ARGSTYLE_XKeycodeToKeysym__ FIXED
#define __TRACE_SAFERETTYPE_XKeycodeToKeysym__ KeySym
#define __TRACE_PROTOARGLIST_XKeycodeToKeysym__ ( Display * display, KeyCode keycode, int index)
#define __TRACE_ARGLIST_XKeycodeToKeysym__ ( display, keycode, index)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XKeycodeToKeysym__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XKeycodeToKeysym__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XKeycodeToKeysym__
#define __TRACE_PRINTF_BODY_XKeycodeToKeysym__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XKeycodeToKeysym, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XKeycodeToKeysym, KeyCode, keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XKeycodeToKeysym, int, index)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XKeycodeToKeysym__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XKeycodeToKeysym, Display_p, display)
__TRACE__(XKeycodeToKeysym)


/*
KeySym XLookupKeysym  // 2 args
    "XKeyEvent *" "key_event"
    "int" "index"
*/
#define __TRACE_RETSTYLE_XLookupKeysym__ TYPED
#define __TRACE_ARGSTYLE_XLookupKeysym__ FIXED
#define __TRACE_SAFERETTYPE_XLookupKeysym__ KeySym
#define __TRACE_PROTOARGLIST_XLookupKeysym__ ( XKeyEvent * key_event, int index)
#define __TRACE_ARGLIST_XLookupKeysym__ ( key_event, index)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLookupKeysym__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLookupKeysym__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLookupKeysym__
#define __TRACE_PRINTF_BODY_XLookupKeysym__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLookupKeysym, XKeyEvent_p, key_event) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLookupKeysym, int, index)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLookupKeysym__ 
__TRACE__(XLookupKeysym)


/*
KeySym * XGetKeyboardMapping  // 4 args
    "Display *" "display"
    "KeyCode" "first_keycode"
    "int" "keycode_count"
    "int *" "keysyms_per_keycode_return"
*/
#define __TRACE_RETSTYLE_XGetKeyboardMapping__ TYPED
#define __TRACE_ARGSTYLE_XGetKeyboardMapping__ FIXED
#define __TRACE_SAFERETTYPE_XGetKeyboardMapping__ KeySym_p
#define __TRACE_PROTOARGLIST_XGetKeyboardMapping__ ( Display * display, KeyCode first_keycode, int keycode_count, int * keysyms_per_keycode_return)
#define __TRACE_ARGLIST_XGetKeyboardMapping__ ( display, first_keycode, keycode_count, keysyms_per_keycode_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetKeyboardMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetKeyboardMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetKeyboardMapping__
#define __TRACE_PRINTF_BODY_XGetKeyboardMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetKeyboardMapping, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetKeyboardMapping, KeyCode, first_keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetKeyboardMapping, int, keycode_count) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetKeyboardMapping, int_p, keysyms_per_keycode_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetKeyboardMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetKeyboardMapping, Display_p, display)
__TRACE__(XGetKeyboardMapping)


/*
KeySym XStringToKeysym  // 1 args
    "const char *" "string"
*/
#define __TRACE_RETSTYLE_XStringToKeysym__ TYPED
#define __TRACE_ARGSTYLE_XStringToKeysym__ FIXED
#define __TRACE_SAFERETTYPE_XStringToKeysym__ KeySym
#define __TRACE_PROTOARGLIST_XStringToKeysym__ ( const char * string)
#define __TRACE_ARGLIST_XStringToKeysym__ ( string)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStringToKeysym__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStringToKeysym__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStringToKeysym__
#define __TRACE_PRINTF_BODY_XStringToKeysym__ \
    __TRACE_PRINTF_ARG__(XStringToKeysym, char_p, string)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStringToKeysym__ 
__TRACE__(XStringToKeysym)


/*
long XMaxRequestSize  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XMaxRequestSize__ TYPED
#define __TRACE_ARGSTYLE_XMaxRequestSize__ FIXED
#define __TRACE_SAFERETTYPE_XMaxRequestSize__ long
#define __TRACE_PROTOARGLIST_XMaxRequestSize__ ( Display * display)
#define __TRACE_ARGLIST_XMaxRequestSize__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMaxRequestSize__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMaxRequestSize__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMaxRequestSize__
#define __TRACE_PRINTF_BODY_XMaxRequestSize__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMaxRequestSize, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMaxRequestSize__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMaxRequestSize, Display_p, display)
__TRACE__(XMaxRequestSize)


/*
long XExtendedMaxRequestSize  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XExtendedMaxRequestSize__ TYPED
#define __TRACE_ARGSTYLE_XExtendedMaxRequestSize__ FIXED
#define __TRACE_SAFERETTYPE_XExtendedMaxRequestSize__ long
#define __TRACE_PROTOARGLIST_XExtendedMaxRequestSize__ ( Display * display)
#define __TRACE_ARGLIST_XExtendedMaxRequestSize__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XExtendedMaxRequestSize__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XExtendedMaxRequestSize__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XExtendedMaxRequestSize__
#define __TRACE_PRINTF_BODY_XExtendedMaxRequestSize__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XExtendedMaxRequestSize, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XExtendedMaxRequestSize__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XExtendedMaxRequestSize, Display_p, display)
__TRACE__(XExtendedMaxRequestSize)


/*
char * XResourceManagerString  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XResourceManagerString__ TYPED
#define __TRACE_ARGSTYLE_XResourceManagerString__ FIXED
#define __TRACE_SAFERETTYPE_XResourceManagerString__ char_p
#define __TRACE_PROTOARGLIST_XResourceManagerString__ ( Display * display)
#define __TRACE_ARGLIST_XResourceManagerString__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XResourceManagerString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XResourceManagerString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XResourceManagerString__
#define __TRACE_PRINTF_BODY_XResourceManagerString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XResourceManagerString, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XResourceManagerString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XResourceManagerString, Display_p, display)
__TRACE__(XResourceManagerString)


/*
char * XScreenResourceString  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XScreenResourceString__ TYPED
#define __TRACE_ARGSTYLE_XScreenResourceString__ FIXED
#define __TRACE_SAFERETTYPE_XScreenResourceString__ char_p
#define __TRACE_PROTOARGLIST_XScreenResourceString__ ( Screen * screen)
#define __TRACE_ARGLIST_XScreenResourceString__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XScreenResourceString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XScreenResourceString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XScreenResourceString__
#define __TRACE_PRINTF_BODY_XScreenResourceString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XScreenResourceString, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XScreenResourceString__ 
__TRACE__(XScreenResourceString)


/*
unsigned long XDisplayMotionBufferSize  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDisplayMotionBufferSize__ TYPED
#define __TRACE_ARGSTYLE_XDisplayMotionBufferSize__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayMotionBufferSize__ unsigned_long
#define __TRACE_PROTOARGLIST_XDisplayMotionBufferSize__ ( Display * display)
#define __TRACE_ARGLIST_XDisplayMotionBufferSize__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayMotionBufferSize__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayMotionBufferSize__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayMotionBufferSize__
#define __TRACE_PRINTF_BODY_XDisplayMotionBufferSize__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayMotionBufferSize, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayMotionBufferSize__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayMotionBufferSize, Display_p, display)
__TRACE__(XDisplayMotionBufferSize)


/*
VisualID XVisualIDFromVisual  // 1 args
    "Visual *" "visual"
*/
#define __TRACE_RETSTYLE_XVisualIDFromVisual__ TYPED
#define __TRACE_ARGSTYLE_XVisualIDFromVisual__ FIXED
#define __TRACE_SAFERETTYPE_XVisualIDFromVisual__ VisualID
#define __TRACE_PROTOARGLIST_XVisualIDFromVisual__ ( Visual * visual)
#define __TRACE_ARGLIST_XVisualIDFromVisual__ ( visual)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XVisualIDFromVisual__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XVisualIDFromVisual__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XVisualIDFromVisual__
#define __TRACE_PRINTF_BODY_XVisualIDFromVisual__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XVisualIDFromVisual, Visual_p, visual)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XVisualIDFromVisual__ 
__TRACE__(XVisualIDFromVisual)


/*
Status XInitThreads  // 0 args
*/
#define __TRACE_RETSTYLE_XInitThreads__ TYPED
#define __TRACE_ARGSTYLE_XInitThreads__ FIXED
#define __TRACE_SAFERETTYPE_XInitThreads__ Status
#define __TRACE_PROTOARGLIST_XInitThreads__ ()
#define __TRACE_ARGLIST_XInitThreads__ ()
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInitThreads__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInitThreads__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInitThreads__
#define __TRACE_PRINTF_BODY_XInitThreads__ 
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInitThreads__ 
__TRACE__(XInitThreads)


/*
void XLockDisplay  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XLockDisplay__ VOID
#define __TRACE_ARGSTYLE_XLockDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XLockDisplay__ void
#define __TRACE_PROTOARGLIST_XLockDisplay__ ( Display * display)
#define __TRACE_ARGLIST_XLockDisplay__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLockDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLockDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLockDisplay__
#define __TRACE_PRINTF_BODY_XLockDisplay__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLockDisplay, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLockDisplay__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLockDisplay, Display_p, display)
__TRACE__(XLockDisplay)


/*
void XUnlockDisplay  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XUnlockDisplay__ VOID
#define __TRACE_ARGSTYLE_XUnlockDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XUnlockDisplay__ void
#define __TRACE_PROTOARGLIST_XUnlockDisplay__ ( Display * display)
#define __TRACE_ARGLIST_XUnlockDisplay__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnlockDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnlockDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnlockDisplay__
#define __TRACE_PRINTF_BODY_XUnlockDisplay__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUnlockDisplay, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnlockDisplay__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUnlockDisplay, Display_p, display)
__TRACE__(XUnlockDisplay)


/*
XExtCodes * XInitExtension  // 2 args
    "Display *" "display"
    "const char *" "name"
*/
#define __TRACE_RETSTYLE_XInitExtension__ TYPED
#define __TRACE_ARGSTYLE_XInitExtension__ FIXED
#define __TRACE_SAFERETTYPE_XInitExtension__ XExtCodes_p
#define __TRACE_PROTOARGLIST_XInitExtension__ ( Display * display, const char * name)
#define __TRACE_ARGLIST_XInitExtension__ ( display, name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInitExtension__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInitExtension__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInitExtension__
#define __TRACE_PRINTF_BODY_XInitExtension__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInitExtension, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInitExtension, char_p, name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInitExtension__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XInitExtension, Display_p, display)
__TRACE__(XInitExtension)


/*
XExtCodes * XAddExtension  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XAddExtension__ TYPED
#define __TRACE_ARGSTYLE_XAddExtension__ FIXED
#define __TRACE_SAFERETTYPE_XAddExtension__ XExtCodes_p
#define __TRACE_PROTOARGLIST_XAddExtension__ ( Display * display)
#define __TRACE_ARGLIST_XAddExtension__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddExtension__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddExtension__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddExtension__
#define __TRACE_PRINTF_BODY_XAddExtension__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddExtension, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddExtension__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAddExtension, Display_p, display)
__TRACE__(XAddExtension)


/*
XExtData * XFindOnExtensionList  // 2 args
    "XExtData **" "structure"
    "int" "number"
*/
#define __TRACE_RETSTYLE_XFindOnExtensionList__ TYPED
#define __TRACE_ARGSTYLE_XFindOnExtensionList__ FIXED
#define __TRACE_SAFERETTYPE_XFindOnExtensionList__ XExtData_p
#define __TRACE_PROTOARGLIST_XFindOnExtensionList__ ( XExtData ** structure, int number)
#define __TRACE_ARGLIST_XFindOnExtensionList__ ( structure, number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFindOnExtensionList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFindOnExtensionList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFindOnExtensionList__
#define __TRACE_PRINTF_BODY_XFindOnExtensionList__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFindOnExtensionList, XExtData_pp, structure) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFindOnExtensionList, int, number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFindOnExtensionList__ 
__TRACE__(XFindOnExtensionList)


/*
XExtData ** XEHeadOfExtensionList  // 1 args
    "XEDataObject" "object"
*/
#define __TRACE_RETSTYLE_XEHeadOfExtensionList__ TYPED
#define __TRACE_ARGSTYLE_XEHeadOfExtensionList__ FIXED
#define __TRACE_SAFERETTYPE_XEHeadOfExtensionList__ XExtData_pp
#define __TRACE_PROTOARGLIST_XEHeadOfExtensionList__ ( XEDataObject object)
#define __TRACE_ARGLIST_XEHeadOfExtensionList__ ( object)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XEHeadOfExtensionList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XEHeadOfExtensionList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XEHeadOfExtensionList__
#define __TRACE_PRINTF_BODY_XEHeadOfExtensionList__ \
    __TRACE_PRINTF_ARG__(XEHeadOfExtensionList, XEDataObject, object)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XEHeadOfExtensionList__ 
__TRACE__(XEHeadOfExtensionList)


/*
Window XRootWindow  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XRootWindow__ TYPED
#define __TRACE_ARGSTYLE_XRootWindow__ FIXED
#define __TRACE_SAFERETTYPE_XRootWindow__ Window
#define __TRACE_PROTOARGLIST_XRootWindow__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XRootWindow__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRootWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRootWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRootWindow__
#define __TRACE_PRINTF_BODY_XRootWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRootWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRootWindow, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRootWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRootWindow, Display_p, display)
__TRACE__(XRootWindow)


/*
Window XDefaultRootWindow  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDefaultRootWindow__ TYPED
#define __TRACE_ARGSTYLE_XDefaultRootWindow__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultRootWindow__ Window
#define __TRACE_PROTOARGLIST_XDefaultRootWindow__ ( Display * display)
#define __TRACE_ARGLIST_XDefaultRootWindow__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultRootWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultRootWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultRootWindow__
#define __TRACE_PRINTF_BODY_XDefaultRootWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultRootWindow, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultRootWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultRootWindow, Display_p, display)
__TRACE__(XDefaultRootWindow)


/*
Window XRootWindowOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XRootWindowOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XRootWindowOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XRootWindowOfScreen__ Window
#define __TRACE_PROTOARGLIST_XRootWindowOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XRootWindowOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRootWindowOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRootWindowOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRootWindowOfScreen__
#define __TRACE_PRINTF_BODY_XRootWindowOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRootWindowOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRootWindowOfScreen__ 
__TRACE__(XRootWindowOfScreen)


/*
Visual * XDefaultVisual  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDefaultVisual__ TYPED
#define __TRACE_ARGSTYLE_XDefaultVisual__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultVisual__ Visual_p
#define __TRACE_PROTOARGLIST_XDefaultVisual__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDefaultVisual__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultVisual__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultVisual__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultVisual__
#define __TRACE_PRINTF_BODY_XDefaultVisual__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultVisual, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefaultVisual, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultVisual__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultVisual, Display_p, display)
__TRACE__(XDefaultVisual)


/*
Visual * XDefaultVisualOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDefaultVisualOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XDefaultVisualOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultVisualOfScreen__ Visual_p
#define __TRACE_PROTOARGLIST_XDefaultVisualOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XDefaultVisualOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultVisualOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultVisualOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultVisualOfScreen__
#define __TRACE_PRINTF_BODY_XDefaultVisualOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultVisualOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultVisualOfScreen__ 
__TRACE__(XDefaultVisualOfScreen)


/*
GC XDefaultGC  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDefaultGC__ TYPED
#define __TRACE_ARGSTYLE_XDefaultGC__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultGC__ GC
#define __TRACE_PROTOARGLIST_XDefaultGC__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDefaultGC__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultGC__
#define __TRACE_PRINTF_BODY_XDefaultGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefaultGC, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultGC, Display_p, display)
__TRACE__(XDefaultGC)


/*
GC XDefaultGCOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDefaultGCOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XDefaultGCOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultGCOfScreen__ GC
#define __TRACE_PROTOARGLIST_XDefaultGCOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XDefaultGCOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultGCOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultGCOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultGCOfScreen__
#define __TRACE_PRINTF_BODY_XDefaultGCOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultGCOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultGCOfScreen__ 
__TRACE__(XDefaultGCOfScreen)


/*
unsigned long XBlackPixel  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XBlackPixel__ TYPED
#define __TRACE_ARGSTYLE_XBlackPixel__ FIXED
#define __TRACE_SAFERETTYPE_XBlackPixel__ unsigned_long
#define __TRACE_PROTOARGLIST_XBlackPixel__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XBlackPixel__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBlackPixel__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBlackPixel__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBlackPixel__
#define __TRACE_PRINTF_BODY_XBlackPixel__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBlackPixel, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XBlackPixel, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBlackPixel__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XBlackPixel, Display_p, display)
__TRACE__(XBlackPixel)


/*
unsigned long XWhitePixel  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XWhitePixel__ TYPED
#define __TRACE_ARGSTYLE_XWhitePixel__ FIXED
#define __TRACE_SAFERETTYPE_XWhitePixel__ unsigned_long
#define __TRACE_PROTOARGLIST_XWhitePixel__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XWhitePixel__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWhitePixel__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWhitePixel__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWhitePixel__
#define __TRACE_PRINTF_BODY_XWhitePixel__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWhitePixel, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWhitePixel, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWhitePixel__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XWhitePixel, Display_p, display)
__TRACE__(XWhitePixel)


/*
unsigned long XAllPlanes  // 0 args
*/
#define __TRACE_RETSTYLE_XAllPlanes__ TYPED
#define __TRACE_ARGSTYLE_XAllPlanes__ FIXED
#define __TRACE_SAFERETTYPE_XAllPlanes__ unsigned_long
#define __TRACE_PROTOARGLIST_XAllPlanes__ ()
#define __TRACE_ARGLIST_XAllPlanes__ ()
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllPlanes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllPlanes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllPlanes__
#define __TRACE_PRINTF_BODY_XAllPlanes__ 
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllPlanes__ 
__TRACE__(XAllPlanes)


/*
unsigned long XBlackPixelOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XBlackPixelOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XBlackPixelOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XBlackPixelOfScreen__ unsigned_long
#define __TRACE_PROTOARGLIST_XBlackPixelOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XBlackPixelOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBlackPixelOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBlackPixelOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBlackPixelOfScreen__
#define __TRACE_PRINTF_BODY_XBlackPixelOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBlackPixelOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBlackPixelOfScreen__ 
__TRACE__(XBlackPixelOfScreen)


/*
unsigned long XWhitePixelOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XWhitePixelOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XWhitePixelOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XWhitePixelOfScreen__ unsigned_long
#define __TRACE_PROTOARGLIST_XWhitePixelOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XWhitePixelOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWhitePixelOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWhitePixelOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWhitePixelOfScreen__
#define __TRACE_PRINTF_BODY_XWhitePixelOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWhitePixelOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWhitePixelOfScreen__ 
__TRACE__(XWhitePixelOfScreen)


/*
unsigned long XNextRequest  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XNextRequest__ TYPED
#define __TRACE_ARGSTYLE_XNextRequest__ FIXED
#define __TRACE_SAFERETTYPE_XNextRequest__ unsigned_long
#define __TRACE_PROTOARGLIST_XNextRequest__ ( Display * display)
#define __TRACE_ARGLIST_XNextRequest__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XNextRequest__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XNextRequest__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XNextRequest__
#define __TRACE_PRINTF_BODY_XNextRequest__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XNextRequest, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XNextRequest__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XNextRequest, Display_p, display)
__TRACE__(XNextRequest)


/*
unsigned long XLastKnownRequestProcessed  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XLastKnownRequestProcessed__ TYPED
#define __TRACE_ARGSTYLE_XLastKnownRequestProcessed__ FIXED
#define __TRACE_SAFERETTYPE_XLastKnownRequestProcessed__ unsigned_long
#define __TRACE_PROTOARGLIST_XLastKnownRequestProcessed__ ( Display * display)
#define __TRACE_ARGLIST_XLastKnownRequestProcessed__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLastKnownRequestProcessed__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLastKnownRequestProcessed__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLastKnownRequestProcessed__
#define __TRACE_PRINTF_BODY_XLastKnownRequestProcessed__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLastKnownRequestProcessed, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLastKnownRequestProcessed__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLastKnownRequestProcessed, Display_p, display)
__TRACE__(XLastKnownRequestProcessed)


/*
char * XServerVendor  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XServerVendor__ TYPED
#define __TRACE_ARGSTYLE_XServerVendor__ FIXED
#define __TRACE_SAFERETTYPE_XServerVendor__ char_p
#define __TRACE_PROTOARGLIST_XServerVendor__ ( Display * display)
#define __TRACE_ARGLIST_XServerVendor__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XServerVendor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XServerVendor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XServerVendor__
#define __TRACE_PRINTF_BODY_XServerVendor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XServerVendor, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XServerVendor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XServerVendor, Display_p, display)
__TRACE__(XServerVendor)


/*
char * XDisplayString  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDisplayString__ TYPED
#define __TRACE_ARGSTYLE_XDisplayString__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayString__ char_p
#define __TRACE_PROTOARGLIST_XDisplayString__ ( Display * display)
#define __TRACE_ARGLIST_XDisplayString__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayString__
#define __TRACE_PRINTF_BODY_XDisplayString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayString, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayString, Display_p, display)
__TRACE__(XDisplayString)


/*
Colormap XDefaultColormap  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDefaultColormap__ TYPED
#define __TRACE_ARGSTYLE_XDefaultColormap__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultColormap__ Colormap
#define __TRACE_PROTOARGLIST_XDefaultColormap__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDefaultColormap__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultColormap__
#define __TRACE_PRINTF_BODY_XDefaultColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefaultColormap, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultColormap, Display_p, display)
__TRACE__(XDefaultColormap)


/*
Colormap XDefaultColormapOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDefaultColormapOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XDefaultColormapOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultColormapOfScreen__ Colormap
#define __TRACE_PROTOARGLIST_XDefaultColormapOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XDefaultColormapOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultColormapOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultColormapOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultColormapOfScreen__
#define __TRACE_PRINTF_BODY_XDefaultColormapOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultColormapOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultColormapOfScreen__ 
__TRACE__(XDefaultColormapOfScreen)


/*
Display * XDisplayOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDisplayOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XDisplayOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayOfScreen__ Display_p
#define __TRACE_PROTOARGLIST_XDisplayOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XDisplayOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayOfScreen__
#define __TRACE_PRINTF_BODY_XDisplayOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayOfScreen__ 
__TRACE__(XDisplayOfScreen)


/*
Screen * XScreenOfDisplay  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XScreenOfDisplay__ TYPED
#define __TRACE_ARGSTYLE_XScreenOfDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XScreenOfDisplay__ Screen_p
#define __TRACE_PROTOARGLIST_XScreenOfDisplay__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XScreenOfDisplay__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XScreenOfDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XScreenOfDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XScreenOfDisplay__
#define __TRACE_PRINTF_BODY_XScreenOfDisplay__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XScreenOfDisplay, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XScreenOfDisplay, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XScreenOfDisplay__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XScreenOfDisplay, Display_p, display)
__TRACE__(XScreenOfDisplay)


/*
Screen * XDefaultScreenOfDisplay  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDefaultScreenOfDisplay__ TYPED
#define __TRACE_ARGSTYLE_XDefaultScreenOfDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultScreenOfDisplay__ Screen_p
#define __TRACE_PROTOARGLIST_XDefaultScreenOfDisplay__ ( Display * display)
#define __TRACE_ARGLIST_XDefaultScreenOfDisplay__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultScreenOfDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultScreenOfDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultScreenOfDisplay__
#define __TRACE_PRINTF_BODY_XDefaultScreenOfDisplay__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultScreenOfDisplay, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultScreenOfDisplay__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultScreenOfDisplay, Display_p, display)
__TRACE__(XDefaultScreenOfDisplay)


/*
long XEventMaskOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XEventMaskOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XEventMaskOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XEventMaskOfScreen__ long
#define __TRACE_PROTOARGLIST_XEventMaskOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XEventMaskOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XEventMaskOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XEventMaskOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XEventMaskOfScreen__
#define __TRACE_PRINTF_BODY_XEventMaskOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XEventMaskOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XEventMaskOfScreen__ 
__TRACE__(XEventMaskOfScreen)


/*
int XScreenNumberOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XScreenNumberOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XScreenNumberOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XScreenNumberOfScreen__ int
#define __TRACE_PROTOARGLIST_XScreenNumberOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XScreenNumberOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XScreenNumberOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XScreenNumberOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XScreenNumberOfScreen__
#define __TRACE_PRINTF_BODY_XScreenNumberOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XScreenNumberOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XScreenNumberOfScreen__ 
__TRACE__(XScreenNumberOfScreen)


/*
XPixmapFormatValues * XListPixmapFormats  // 2 args
    "Display *" "display"
    "int *" "count_return"
*/
#define __TRACE_RETSTYLE_XListPixmapFormats__ TYPED
#define __TRACE_ARGSTYLE_XListPixmapFormats__ FIXED
#define __TRACE_SAFERETTYPE_XListPixmapFormats__ XPixmapFormatValues_p
#define __TRACE_PROTOARGLIST_XListPixmapFormats__ ( Display * display, int * count_return)
#define __TRACE_ARGLIST_XListPixmapFormats__ ( display, count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListPixmapFormats__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListPixmapFormats__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListPixmapFormats__
#define __TRACE_PRINTF_BODY_XListPixmapFormats__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListPixmapFormats, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListPixmapFormats, int_p, count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListPixmapFormats__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListPixmapFormats, Display_p, display)
__TRACE__(XListPixmapFormats)


/*
int * XListDepths  // 3 args
    "Display *" "display"
    "int" "screen_number"
    "int *" "count_return"
*/
#define __TRACE_RETSTYLE_XListDepths__ TYPED
#define __TRACE_ARGSTYLE_XListDepths__ FIXED
#define __TRACE_SAFERETTYPE_XListDepths__ int_p
#define __TRACE_PROTOARGLIST_XListDepths__ ( Display * display, int screen_number, int * count_return)
#define __TRACE_ARGLIST_XListDepths__ ( display, screen_number, count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XListDepths__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XListDepths__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XListDepths__
#define __TRACE_PRINTF_BODY_XListDepths__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XListDepths, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListDepths, int, screen_number) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XListDepths, int_p, count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XListDepths__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XListDepths, Display_p, display)
__TRACE__(XListDepths)


/*
Status XReconfigureWMWindow  // 5 args
    "Display *" "display"
    "Window" "w"
    "int" "screen_number"
    "unsigned int" "mask"
    "XWindowChanges *" "changes"
*/
#define __TRACE_RETSTYLE_XReconfigureWMWindow__ TYPED
#define __TRACE_ARGSTYLE_XReconfigureWMWindow__ FIXED
#define __TRACE_SAFERETTYPE_XReconfigureWMWindow__ Status
#define __TRACE_PROTOARGLIST_XReconfigureWMWindow__ ( Display * display, Window w, int screen_number, unsigned int mask, XWindowChanges * changes)
#define __TRACE_ARGLIST_XReconfigureWMWindow__ ( display, w, screen_number, mask, changes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XReconfigureWMWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XReconfigureWMWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XReconfigureWMWindow__
#define __TRACE_PRINTF_BODY_XReconfigureWMWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XReconfigureWMWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReconfigureWMWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReconfigureWMWindow, int, screen_number) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReconfigureWMWindow, unsigned_int, mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReconfigureWMWindow, XWindowChanges_p, changes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XReconfigureWMWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XReconfigureWMWindow, Display_p, display)
__TRACE__(XReconfigureWMWindow)


/*
Status XGetWMProtocols  // 4 args
    "Display *" "display"
    "Window" "w"
    "Atom **" "protocols_return"
    "int *" "count_return"
*/
#define __TRACE_RETSTYLE_XGetWMProtocols__ TYPED
#define __TRACE_ARGSTYLE_XGetWMProtocols__ FIXED
#define __TRACE_SAFERETTYPE_XGetWMProtocols__ Status
#define __TRACE_PROTOARGLIST_XGetWMProtocols__ ( Display * display, Window w, Atom ** protocols_return, int * count_return)
#define __TRACE_ARGLIST_XGetWMProtocols__ ( display, w, protocols_return, count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetWMProtocols__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetWMProtocols__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetWMProtocols__
#define __TRACE_PRINTF_BODY_XGetWMProtocols__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetWMProtocols, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMProtocols, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMProtocols, Atom_pp, protocols_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMProtocols, int_p, count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetWMProtocols__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetWMProtocols, Display_p, display)
__TRACE__(XGetWMProtocols)


/*
Status XSetWMProtocols  // 4 args
    "Display *" "display"
    "Window" "w"
    "Atom *" "protocols"
    "int" "count"
*/
#define __TRACE_RETSTYLE_XSetWMProtocols__ TYPED
#define __TRACE_ARGSTYLE_XSetWMProtocols__ FIXED
#define __TRACE_SAFERETTYPE_XSetWMProtocols__ Status
#define __TRACE_PROTOARGLIST_XSetWMProtocols__ ( Display * display, Window w, Atom * protocols, int count)
#define __TRACE_ARGLIST_XSetWMProtocols__ ( display, w, protocols, count)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWMProtocols__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWMProtocols__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWMProtocols__
#define __TRACE_PRINTF_BODY_XSetWMProtocols__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWMProtocols, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMProtocols, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMProtocols, Atom_p, protocols) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMProtocols, int, count)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWMProtocols__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWMProtocols, Display_p, display)
__TRACE__(XSetWMProtocols)


/*
Status XIconifyWindow  // 3 args
    "Display *" "display"
    "Window" "w"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XIconifyWindow__ TYPED
#define __TRACE_ARGSTYLE_XIconifyWindow__ FIXED
#define __TRACE_SAFERETTYPE_XIconifyWindow__ Status
#define __TRACE_PROTOARGLIST_XIconifyWindow__ ( Display * display, Window w, int screen_number)
#define __TRACE_ARGLIST_XIconifyWindow__ ( display, w, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XIconifyWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XIconifyWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XIconifyWindow__
#define __TRACE_PRINTF_BODY_XIconifyWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XIconifyWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XIconifyWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XIconifyWindow, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XIconifyWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XIconifyWindow, Display_p, display)
__TRACE__(XIconifyWindow)


/*
Status XWithdrawWindow  // 3 args
    "Display *" "display"
    "Window" "w"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XWithdrawWindow__ TYPED
#define __TRACE_ARGSTYLE_XWithdrawWindow__ FIXED
#define __TRACE_SAFERETTYPE_XWithdrawWindow__ Status
#define __TRACE_PROTOARGLIST_XWithdrawWindow__ ( Display * display, Window w, int screen_number)
#define __TRACE_ARGLIST_XWithdrawWindow__ ( display, w, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWithdrawWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWithdrawWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWithdrawWindow__
#define __TRACE_PRINTF_BODY_XWithdrawWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWithdrawWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWithdrawWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWithdrawWindow, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWithdrawWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XWithdrawWindow, Display_p, display)
__TRACE__(XWithdrawWindow)


/*
Status XGetCommand  // 4 args
    "Display *" "display"
    "Window" "w"
    "char ***" "argv_return"
    "int *" "argc_return"
*/
#define __TRACE_RETSTYLE_XGetCommand__ TYPED
#define __TRACE_ARGSTYLE_XGetCommand__ FIXED
#define __TRACE_SAFERETTYPE_XGetCommand__ Status
#define __TRACE_PROTOARGLIST_XGetCommand__ ( Display * display, Window w, char *** argv_return, int * argc_return)
#define __TRACE_ARGLIST_XGetCommand__ ( display, w, argv_return, argc_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetCommand__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetCommand__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetCommand__
#define __TRACE_PRINTF_BODY_XGetCommand__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetCommand, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetCommand, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetCommand, char_ppp, argv_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetCommand, int_p, argc_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetCommand__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetCommand, Display_p, display)
__TRACE__(XGetCommand)


/*
Status XGetWMColormapWindows  // 4 args
    "Display *" "display"
    "Window" "w"
    "Window **" "windows_return"
    "int *" "count_return"
*/
#define __TRACE_RETSTYLE_XGetWMColormapWindows__ TYPED
#define __TRACE_ARGSTYLE_XGetWMColormapWindows__ FIXED
#define __TRACE_SAFERETTYPE_XGetWMColormapWindows__ Status
#define __TRACE_PROTOARGLIST_XGetWMColormapWindows__ ( Display * display, Window w, Window ** windows_return, int * count_return)
#define __TRACE_ARGLIST_XGetWMColormapWindows__ ( display, w, windows_return, count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetWMColormapWindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetWMColormapWindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetWMColormapWindows__
#define __TRACE_PRINTF_BODY_XGetWMColormapWindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetWMColormapWindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMColormapWindows, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMColormapWindows, Window_pp, windows_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWMColormapWindows, int_p, count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetWMColormapWindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetWMColormapWindows, Display_p, display)
__TRACE__(XGetWMColormapWindows)


/*
Status XSetWMColormapWindows  // 4 args
    "Display *" "display"
    "Window" "w"
    "Window *" "colormap_windows"
    "int" "count"
*/
#define __TRACE_RETSTYLE_XSetWMColormapWindows__ TYPED
#define __TRACE_ARGSTYLE_XSetWMColormapWindows__ FIXED
#define __TRACE_SAFERETTYPE_XSetWMColormapWindows__ Status
#define __TRACE_PROTOARGLIST_XSetWMColormapWindows__ ( Display * display, Window w, Window * colormap_windows, int count)
#define __TRACE_ARGLIST_XSetWMColormapWindows__ ( display, w, colormap_windows, count)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWMColormapWindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWMColormapWindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWMColormapWindows__
#define __TRACE_PRINTF_BODY_XSetWMColormapWindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWMColormapWindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMColormapWindows, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMColormapWindows, Window_p, colormap_windows) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWMColormapWindows, int, count)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWMColormapWindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWMColormapWindows, Display_p, display)
__TRACE__(XSetWMColormapWindows)


/*
void XFreeStringList  // 1 args
    "char **" "list"
*/
#define __TRACE_RETSTYLE_XFreeStringList__ VOID
#define __TRACE_ARGSTYLE_XFreeStringList__ FIXED
#define __TRACE_SAFERETTYPE_XFreeStringList__ void
#define __TRACE_PROTOARGLIST_XFreeStringList__ ( char ** list)
#define __TRACE_ARGLIST_XFreeStringList__ ( list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeStringList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeStringList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeStringList__
#define __TRACE_PRINTF_BODY_XFreeStringList__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeStringList, char_pp, list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeStringList__ 
__TRACE__(XFreeStringList)


/*
int XSetTransientForHint  // 3 args
    "Display *" "display"
    "Window" "w"
    "Window" "prop_window"
*/
#define __TRACE_RETSTYLE_XSetTransientForHint__ TYPED
#define __TRACE_ARGSTYLE_XSetTransientForHint__ FIXED
#define __TRACE_SAFERETTYPE_XSetTransientForHint__ int
#define __TRACE_PROTOARGLIST_XSetTransientForHint__ ( Display * display, Window w, Window prop_window)
#define __TRACE_ARGLIST_XSetTransientForHint__ ( display, w, prop_window)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetTransientForHint__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetTransientForHint__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetTransientForHint__
#define __TRACE_PRINTF_BODY_XSetTransientForHint__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetTransientForHint, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTransientForHint, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTransientForHint, Window, prop_window)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetTransientForHint__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetTransientForHint, Display_p, display)
__TRACE__(XSetTransientForHint)


/*
int XActivateScreenSaver  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XActivateScreenSaver__ TYPED
#define __TRACE_ARGSTYLE_XActivateScreenSaver__ FIXED
#define __TRACE_SAFERETTYPE_XActivateScreenSaver__ int
#define __TRACE_PROTOARGLIST_XActivateScreenSaver__ ( Display * display)
#define __TRACE_ARGLIST_XActivateScreenSaver__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XActivateScreenSaver__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XActivateScreenSaver__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XActivateScreenSaver__
#define __TRACE_PRINTF_BODY_XActivateScreenSaver__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XActivateScreenSaver, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XActivateScreenSaver__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XActivateScreenSaver, Display_p, display)
__TRACE__(XActivateScreenSaver)


/*
int XAddHost  // 2 args
    "Display *" "display"
    "XHostAddress *" "host"
*/
#define __TRACE_RETSTYLE_XAddHost__ TYPED
#define __TRACE_ARGSTYLE_XAddHost__ FIXED
#define __TRACE_SAFERETTYPE_XAddHost__ int
#define __TRACE_PROTOARGLIST_XAddHost__ ( Display * display, XHostAddress * host)
#define __TRACE_ARGLIST_XAddHost__ ( display, host)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddHost__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddHost__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddHost__
#define __TRACE_PRINTF_BODY_XAddHost__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddHost, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddHost, XHostAddress_p, host)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddHost__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAddHost, Display_p, display)
__TRACE__(XAddHost)


/*
int XAddHosts  // 3 args
    "Display *" "display"
    "XHostAddress *" "hosts"
    "int" "num_hosts"
*/
#define __TRACE_RETSTYLE_XAddHosts__ TYPED
#define __TRACE_ARGSTYLE_XAddHosts__ FIXED
#define __TRACE_SAFERETTYPE_XAddHosts__ int
#define __TRACE_PROTOARGLIST_XAddHosts__ ( Display * display, XHostAddress * hosts, int num_hosts)
#define __TRACE_ARGLIST_XAddHosts__ ( display, hosts, num_hosts)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddHosts__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddHosts__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddHosts__
#define __TRACE_PRINTF_BODY_XAddHosts__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddHosts, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddHosts, XHostAddress_p, hosts) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddHosts, int, num_hosts)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddHosts__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAddHosts, Display_p, display)
__TRACE__(XAddHosts)


/*
int XAddToExtensionList  // 2 args
    "struct _XExtData **" "structure"
    "XExtData *" "ext_data"
*/
#define __TRACE_RETSTYLE_XAddToExtensionList__ TYPED
#define __TRACE_ARGSTYLE_XAddToExtensionList__ FIXED
#define __TRACE_SAFERETTYPE_XAddToExtensionList__ int
#define __TRACE_PROTOARGLIST_XAddToExtensionList__ ( struct _XExtData ** structure, XExtData * ext_data)
#define __TRACE_ARGLIST_XAddToExtensionList__ ( structure, ext_data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddToExtensionList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddToExtensionList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddToExtensionList__
#define __TRACE_PRINTF_BODY_XAddToExtensionList__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddToExtensionList, struct__XExtData_pp, structure) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddToExtensionList, XExtData_p, ext_data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddToExtensionList__ 
__TRACE__(XAddToExtensionList)


/*
int XAddToSaveSet  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XAddToSaveSet__ TYPED
#define __TRACE_ARGSTYLE_XAddToSaveSet__ FIXED
#define __TRACE_SAFERETTYPE_XAddToSaveSet__ int
#define __TRACE_PROTOARGLIST_XAddToSaveSet__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XAddToSaveSet__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddToSaveSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddToSaveSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddToSaveSet__
#define __TRACE_PRINTF_BODY_XAddToSaveSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddToSaveSet, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddToSaveSet, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddToSaveSet__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAddToSaveSet, Display_p, display)
__TRACE__(XAddToSaveSet)


/*
Status XAllocColor  // 3 args
    "Display *" "display"
    "Colormap" "colormap"
    "XColor *" "screen_in_out"
*/
#define __TRACE_RETSTYLE_XAllocColor__ TYPED
#define __TRACE_ARGSTYLE_XAllocColor__ FIXED
#define __TRACE_SAFERETTYPE_XAllocColor__ Status
#define __TRACE_PROTOARGLIST_XAllocColor__ ( Display * display, Colormap colormap, XColor * screen_in_out)
#define __TRACE_ARGLIST_XAllocColor__ ( display, colormap, screen_in_out)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllocColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllocColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllocColor__
#define __TRACE_PRINTF_BODY_XAllocColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAllocColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColor, XColor_p, screen_in_out)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllocColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAllocColor, Display_p, display)
__TRACE__(XAllocColor)


/*
Status XAllocColorCells  // 7 args
    "Display *" "display"
    "Colormap" "colormap"
    "Bool" "contig"
    "unsigned long *" "plane_masks_return"
    "unsigned int" "nplanes"
    "unsigned long *" "pixels_return"
    "unsigned int" "npixels"
*/
#define __TRACE_RETSTYLE_XAllocColorCells__ TYPED
#define __TRACE_ARGSTYLE_XAllocColorCells__ FIXED
#define __TRACE_SAFERETTYPE_XAllocColorCells__ Status
#define __TRACE_PROTOARGLIST_XAllocColorCells__ ( Display * display, Colormap colormap, Bool contig, unsigned long * plane_masks_return, unsigned int nplanes, unsigned long * pixels_return, unsigned int npixels)
#define __TRACE_ARGLIST_XAllocColorCells__ ( display, colormap, contig, plane_masks_return, nplanes, pixels_return, npixels)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllocColorCells__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllocColorCells__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllocColorCells__
#define __TRACE_PRINTF_BODY_XAllocColorCells__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAllocColorCells, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, Bool, contig) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, unsigned_long_p, plane_masks_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, unsigned_int, nplanes) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, unsigned_long_p, pixels_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorCells, unsigned_int, npixels)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllocColorCells__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAllocColorCells, Display_p, display)
__TRACE__(XAllocColorCells)


/*
Status XAllocColorPlanes  // 11 args
    "Display *" "display"
    "Colormap" "colormap"
    "Bool" "contig"
    "unsigned long *" "pixels_return"
    "int" "ncolors"
    "int" "nreds"
    "int" "ngreens"
    "int" "nblues"
    "unsigned long *" "rmask_return"
    "unsigned long *" "gmask_return"
    "unsigned long *" "bmask_return"
*/
#define __TRACE_RETSTYLE_XAllocColorPlanes__ TYPED
#define __TRACE_ARGSTYLE_XAllocColorPlanes__ FIXED
#define __TRACE_SAFERETTYPE_XAllocColorPlanes__ Status
#define __TRACE_PROTOARGLIST_XAllocColorPlanes__ ( Display * display, Colormap colormap, Bool contig, unsigned long * pixels_return, int ncolors, int nreds, int ngreens, int nblues, unsigned long * rmask_return, unsigned long * gmask_return, unsigned long * bmask_return)
#define __TRACE_ARGLIST_XAllocColorPlanes__ ( display, colormap, contig, pixels_return, ncolors, nreds, ngreens, nblues, rmask_return, gmask_return, bmask_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllocColorPlanes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllocColorPlanes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllocColorPlanes__
#define __TRACE_PRINTF_BODY_XAllocColorPlanes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, Bool, contig) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, unsigned_long_p, pixels_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, int, ncolors) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, int, nreds) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, int, ngreens) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, int, nblues) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, unsigned_long_p, rmask_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, unsigned_long_p, gmask_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocColorPlanes, unsigned_long_p, bmask_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllocColorPlanes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAllocColorPlanes, Display_p, display)
__TRACE__(XAllocColorPlanes)


/*
Status XAllocNamedColor  // 5 args
    "Display *" "display"
    "Colormap" "colormap"
    "const char *" "color_name"
    "XColor *" "screen_def_return"
    "XColor *" "exact_def_return"
*/
#define __TRACE_RETSTYLE_XAllocNamedColor__ TYPED
#define __TRACE_ARGSTYLE_XAllocNamedColor__ FIXED
#define __TRACE_SAFERETTYPE_XAllocNamedColor__ Status
#define __TRACE_PROTOARGLIST_XAllocNamedColor__ ( Display * display, Colormap colormap, const char * color_name, XColor * screen_def_return, XColor * exact_def_return)
#define __TRACE_ARGLIST_XAllocNamedColor__ ( display, colormap, color_name, screen_def_return, exact_def_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllocNamedColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllocNamedColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllocNamedColor__
#define __TRACE_PRINTF_BODY_XAllocNamedColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAllocNamedColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocNamedColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocNamedColor, char_p, color_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocNamedColor, XColor_p, screen_def_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllocNamedColor, XColor_p, exact_def_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllocNamedColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAllocNamedColor, Display_p, display)
__TRACE__(XAllocNamedColor)


/*
int XAllowEvents  // 3 args
    "Display *" "display"
    "int" "event_mode"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XAllowEvents__ TYPED
#define __TRACE_ARGSTYLE_XAllowEvents__ FIXED
#define __TRACE_SAFERETTYPE_XAllowEvents__ int
#define __TRACE_PROTOARGLIST_XAllowEvents__ ( Display * display, int event_mode, Time time)
#define __TRACE_ARGLIST_XAllowEvents__ ( display, event_mode, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAllowEvents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAllowEvents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAllowEvents__
#define __TRACE_PRINTF_BODY_XAllowEvents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAllowEvents, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllowEvents, int, event_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAllowEvents, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAllowEvents__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAllowEvents, Display_p, display)
__TRACE__(XAllowEvents)


/*
int XAutoRepeatOff  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XAutoRepeatOff__ TYPED
#define __TRACE_ARGSTYLE_XAutoRepeatOff__ FIXED
#define __TRACE_SAFERETTYPE_XAutoRepeatOff__ int
#define __TRACE_PROTOARGLIST_XAutoRepeatOff__ ( Display * display)
#define __TRACE_ARGLIST_XAutoRepeatOff__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAutoRepeatOff__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAutoRepeatOff__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAutoRepeatOff__
#define __TRACE_PRINTF_BODY_XAutoRepeatOff__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAutoRepeatOff, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAutoRepeatOff__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAutoRepeatOff, Display_p, display)
__TRACE__(XAutoRepeatOff)


/*
int XAutoRepeatOn  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XAutoRepeatOn__ TYPED
#define __TRACE_ARGSTYLE_XAutoRepeatOn__ FIXED
#define __TRACE_SAFERETTYPE_XAutoRepeatOn__ int
#define __TRACE_PROTOARGLIST_XAutoRepeatOn__ ( Display * display)
#define __TRACE_ARGLIST_XAutoRepeatOn__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAutoRepeatOn__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAutoRepeatOn__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAutoRepeatOn__
#define __TRACE_PRINTF_BODY_XAutoRepeatOn__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAutoRepeatOn, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAutoRepeatOn__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAutoRepeatOn, Display_p, display)
__TRACE__(XAutoRepeatOn)


/*
int XBell  // 2 args
    "Display *" "display"
    "int" "percent"
*/
#define __TRACE_RETSTYLE_XBell__ TYPED
#define __TRACE_ARGSTYLE_XBell__ FIXED
#define __TRACE_SAFERETTYPE_XBell__ int
#define __TRACE_PROTOARGLIST_XBell__ ( Display * display, int percent)
#define __TRACE_ARGLIST_XBell__ ( display, percent)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBell__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBell__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBell__
#define __TRACE_PRINTF_BODY_XBell__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBell, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XBell, int, percent)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBell__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XBell, Display_p, display)
__TRACE__(XBell)


/*
int XBitmapBitOrder  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XBitmapBitOrder__ TYPED
#define __TRACE_ARGSTYLE_XBitmapBitOrder__ FIXED
#define __TRACE_SAFERETTYPE_XBitmapBitOrder__ int
#define __TRACE_PROTOARGLIST_XBitmapBitOrder__ ( Display * display)
#define __TRACE_ARGLIST_XBitmapBitOrder__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBitmapBitOrder__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBitmapBitOrder__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBitmapBitOrder__
#define __TRACE_PRINTF_BODY_XBitmapBitOrder__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBitmapBitOrder, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBitmapBitOrder__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XBitmapBitOrder, Display_p, display)
__TRACE__(XBitmapBitOrder)


/*
int XBitmapPad  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XBitmapPad__ TYPED
#define __TRACE_ARGSTYLE_XBitmapPad__ FIXED
#define __TRACE_SAFERETTYPE_XBitmapPad__ int
#define __TRACE_PROTOARGLIST_XBitmapPad__ ( Display * display)
#define __TRACE_ARGLIST_XBitmapPad__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBitmapPad__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBitmapPad__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBitmapPad__
#define __TRACE_PRINTF_BODY_XBitmapPad__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBitmapPad, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBitmapPad__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XBitmapPad, Display_p, display)
__TRACE__(XBitmapPad)


/*
int XBitmapUnit  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XBitmapUnit__ TYPED
#define __TRACE_ARGSTYLE_XBitmapUnit__ FIXED
#define __TRACE_SAFERETTYPE_XBitmapUnit__ int
#define __TRACE_PROTOARGLIST_XBitmapUnit__ ( Display * display)
#define __TRACE_ARGLIST_XBitmapUnit__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBitmapUnit__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBitmapUnit__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBitmapUnit__
#define __TRACE_PRINTF_BODY_XBitmapUnit__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XBitmapUnit, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBitmapUnit__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XBitmapUnit, Display_p, display)
__TRACE__(XBitmapUnit)


/*
int XCellsOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XCellsOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XCellsOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XCellsOfScreen__ int
#define __TRACE_PROTOARGLIST_XCellsOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XCellsOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCellsOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCellsOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCellsOfScreen__
#define __TRACE_PRINTF_BODY_XCellsOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCellsOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCellsOfScreen__ 
__TRACE__(XCellsOfScreen)


/*
int XChangeActivePointerGrab  // 4 args
    "Display *" "display"
    "unsigned int" "event_mask"
    "Cursor" "cursor"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XChangeActivePointerGrab__ TYPED
#define __TRACE_ARGSTYLE_XChangeActivePointerGrab__ FIXED
#define __TRACE_SAFERETTYPE_XChangeActivePointerGrab__ int
#define __TRACE_PROTOARGLIST_XChangeActivePointerGrab__ ( Display * display, unsigned int event_mask, Cursor cursor, Time time)
#define __TRACE_ARGLIST_XChangeActivePointerGrab__ ( display, event_mask, cursor, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeActivePointerGrab__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeActivePointerGrab__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeActivePointerGrab__
#define __TRACE_PRINTF_BODY_XChangeActivePointerGrab__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeActivePointerGrab, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeActivePointerGrab, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeActivePointerGrab, Cursor, cursor) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeActivePointerGrab, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeActivePointerGrab__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeActivePointerGrab, Display_p, display)
__TRACE__(XChangeActivePointerGrab)


/*
int XChangeGC  // 4 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "valuemask"
    "XGCValues *" "values"
*/
#define __TRACE_RETSTYLE_XChangeGC__ TYPED
#define __TRACE_ARGSTYLE_XChangeGC__ FIXED
#define __TRACE_SAFERETTYPE_XChangeGC__ int
#define __TRACE_PROTOARGLIST_XChangeGC__ ( Display * display, GC gc, unsigned long valuemask, XGCValues * values)
#define __TRACE_ARGLIST_XChangeGC__ ( display, gc, valuemask, values)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeGC__
#define __TRACE_PRINTF_BODY_XChangeGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeGC, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeGC, unsigned_long_GCComponent, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeGC, XGCValues_p, values)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeGC, Display_p, display)
__TRACE__(XChangeGC)


/*
int XChangeKeyboardControl  // 3 args
    "Display *" "display"
    "unsigned long" "value_mask"
    "XKeyboardControl *" "values"
*/
#define __TRACE_RETSTYLE_XChangeKeyboardControl__ TYPED
#define __TRACE_ARGSTYLE_XChangeKeyboardControl__ FIXED
#define __TRACE_SAFERETTYPE_XChangeKeyboardControl__ int
#define __TRACE_PROTOARGLIST_XChangeKeyboardControl__ ( Display * display, unsigned long value_mask, XKeyboardControl * values)
#define __TRACE_ARGLIST_XChangeKeyboardControl__ ( display, value_mask, values)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeKeyboardControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeKeyboardControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeKeyboardControl__
#define __TRACE_PRINTF_BODY_XChangeKeyboardControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeKeyboardControl, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardControl, unsigned_long_KeyboardControlMask, value_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardControl, XKeyboardControl_p, values)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeKeyboardControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeKeyboardControl, Display_p, display)
__TRACE__(XChangeKeyboardControl)


/*
int XChangeKeyboardMapping  // 5 args
    "Display *" "display"
    "int" "first_keycode"
    "int" "keysyms_per_keycode"
    "KeySym *" "keysyms"
    "int" "num_codes"
*/
#define __TRACE_RETSTYLE_XChangeKeyboardMapping__ TYPED
#define __TRACE_ARGSTYLE_XChangeKeyboardMapping__ FIXED
#define __TRACE_SAFERETTYPE_XChangeKeyboardMapping__ int
#define __TRACE_PROTOARGLIST_XChangeKeyboardMapping__ ( Display * display, int first_keycode, int keysyms_per_keycode, KeySym * keysyms, int num_codes)
#define __TRACE_ARGLIST_XChangeKeyboardMapping__ ( display, first_keycode, keysyms_per_keycode, keysyms, num_codes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeKeyboardMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeKeyboardMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeKeyboardMapping__
#define __TRACE_PRINTF_BODY_XChangeKeyboardMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeKeyboardMapping, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardMapping, int, first_keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardMapping, int, keysyms_per_keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardMapping, KeySym_p, keysyms) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeKeyboardMapping, int, num_codes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeKeyboardMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeKeyboardMapping, Display_p, display)
__TRACE__(XChangeKeyboardMapping)


/*
int XChangePointerControl  // 6 args
    "Display *" "display"
    "Bool" "do_accel"
    "Bool" "do_threshold"
    "int" "accel_numerator"
    "int" "accel_denominator"
    "int" "threshold"
*/
#define __TRACE_RETSTYLE_XChangePointerControl__ TYPED
#define __TRACE_ARGSTYLE_XChangePointerControl__ FIXED
#define __TRACE_SAFERETTYPE_XChangePointerControl__ int
#define __TRACE_PROTOARGLIST_XChangePointerControl__ ( Display * display, Bool do_accel, Bool do_threshold, int accel_numerator, int accel_denominator, int threshold)
#define __TRACE_ARGLIST_XChangePointerControl__ ( display, do_accel, do_threshold, accel_numerator, accel_denominator, threshold)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangePointerControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangePointerControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangePointerControl__
#define __TRACE_PRINTF_BODY_XChangePointerControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangePointerControl, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangePointerControl, Bool, do_accel) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangePointerControl, Bool, do_threshold) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangePointerControl, int, accel_numerator) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangePointerControl, int, accel_denominator) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangePointerControl, int, threshold)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangePointerControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangePointerControl, Display_p, display)
__TRACE__(XChangePointerControl)


/*
int XChangeProperty  // 8 args
    "Display *" "display"
    "Window" "w"
    "Atom" "property"
    "Atom" "type"
    "int" "format"
    "int" "mode"
    "const unsigned char *" "data"
    "int" "nelements"
*/
#define __TRACE_RETSTYLE_XChangeProperty__ TYPED
#define __TRACE_ARGSTYLE_XChangeProperty__ FIXED
#define __TRACE_SAFERETTYPE_XChangeProperty__ int
#define __TRACE_PROTOARGLIST_XChangeProperty__ ( Display * display, Window w, Atom property, Atom type, int format, int mode, const unsigned char * data, int nelements)
#define __TRACE_ARGLIST_XChangeProperty__ ( display, w, property, type, format, mode, data, nelements)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeProperty__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeProperty__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeProperty__
#define __TRACE_PRINTF_BODY_XChangeProperty__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeProperty, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, Atom, property) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, Atom, type) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, int, format) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, int_PropertyMode, mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, unsigned_char_p, data) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeProperty, int, nelements)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeProperty__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeProperty, Display_p, display)
__TRACE__(XChangeProperty)


/*
int XChangeSaveSet  // 3 args
    "Display *" "display"
    "Window" "w"
    "int" "change_mode"
*/
#define __TRACE_RETSTYLE_XChangeSaveSet__ TYPED
#define __TRACE_ARGSTYLE_XChangeSaveSet__ FIXED
#define __TRACE_SAFERETTYPE_XChangeSaveSet__ int
#define __TRACE_PROTOARGLIST_XChangeSaveSet__ ( Display * display, Window w, int change_mode)
#define __TRACE_ARGLIST_XChangeSaveSet__ ( display, w, change_mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeSaveSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeSaveSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeSaveSet__
#define __TRACE_PRINTF_BODY_XChangeSaveSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeSaveSet, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeSaveSet, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeSaveSet, int_SetMode, change_mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeSaveSet__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeSaveSet, Display_p, display)
__TRACE__(XChangeSaveSet)


/*
int XChangeWindowAttributes  // 4 args
    "Display *" "display"
    "Window" "w"
    "unsigned long" "valuemask"
    "XSetWindowAttributes *" "attributes"
*/
#define __TRACE_RETSTYLE_XChangeWindowAttributes__ TYPED
#define __TRACE_ARGSTYLE_XChangeWindowAttributes__ FIXED
#define __TRACE_SAFERETTYPE_XChangeWindowAttributes__ int
#define __TRACE_PROTOARGLIST_XChangeWindowAttributes__ ( Display * display, Window w, unsigned long valuemask, XSetWindowAttributes * attributes)
#define __TRACE_ARGLIST_XChangeWindowAttributes__ ( display, w, valuemask, attributes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XChangeWindowAttributes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XChangeWindowAttributes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XChangeWindowAttributes__
#define __TRACE_PRINTF_BODY_XChangeWindowAttributes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XChangeWindowAttributes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeWindowAttributes, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeWindowAttributes, unsigned_long_WindowAttributes, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XChangeWindowAttributes, XSetWindowAttributes_p, attributes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XChangeWindowAttributes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XChangeWindowAttributes, Display_p, display)
__TRACE__(XChangeWindowAttributes)


/*
Bool XCheckIfEvent  // 4 args
    "Display *" "display"
    "XEvent *" "event_return"
    "Bool (*) ( Display * , XEvent * , XPointer )" "predicate"
    "XPointer" "arg"
*/
#define __TRACE_RETSTYLE_XCheckIfEvent__ TYPED
#define __TRACE_ARGSTYLE_XCheckIfEvent__ FIXED
#define __TRACE_SAFERETTYPE_XCheckIfEvent__ Bool
#define __TRACE_PROTOARGLIST_XCheckIfEvent__ ( Display * display, XEvent * event_return, Bool (*predicate) ( Display * , XEvent * , XPointer ), XPointer arg)
#define __TRACE_ARGLIST_XCheckIfEvent__ ( display, event_return, predicate, arg)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCheckIfEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCheckIfEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCheckIfEvent__
#define __TRACE_PRINTF_BODY_XCheckIfEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCheckIfEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckIfEvent, XEvent_p, event_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckIfEvent, Bool__p____Display_p___XEvent_p___XPointer__, predicate) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckIfEvent, XPointer, arg)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCheckIfEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCheckIfEvent, Display_p, display)
__TRACE__(XCheckIfEvent)


/*
Bool XCheckMaskEvent  // 3 args
    "Display *" "display"
    "long" "event_mask"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XCheckMaskEvent__ TYPED
#define __TRACE_ARGSTYLE_XCheckMaskEvent__ FIXED
#define __TRACE_SAFERETTYPE_XCheckMaskEvent__ Bool
#define __TRACE_PROTOARGLIST_XCheckMaskEvent__ ( Display * display, long event_mask, XEvent * event_return)
#define __TRACE_ARGLIST_XCheckMaskEvent__ ( display, event_mask, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCheckMaskEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCheckMaskEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCheckMaskEvent__
#define __TRACE_PRINTF_BODY_XCheckMaskEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCheckMaskEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckMaskEvent, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckMaskEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCheckMaskEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCheckMaskEvent, Display_p, display)
__TRACE__(XCheckMaskEvent)


/*
Bool XCheckTypedEvent  // 3 args
    "Display *" "display"
    "int" "event_type"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XCheckTypedEvent__ TYPED
#define __TRACE_ARGSTYLE_XCheckTypedEvent__ FIXED
#define __TRACE_SAFERETTYPE_XCheckTypedEvent__ Bool
#define __TRACE_PROTOARGLIST_XCheckTypedEvent__ ( Display * display, int event_type, XEvent * event_return)
#define __TRACE_ARGLIST_XCheckTypedEvent__ ( display, event_type, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCheckTypedEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCheckTypedEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCheckTypedEvent__
#define __TRACE_PRINTF_BODY_XCheckTypedEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCheckTypedEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckTypedEvent, int, event_type) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckTypedEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCheckTypedEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCheckTypedEvent, Display_p, display)
__TRACE__(XCheckTypedEvent)


/*
Bool XCheckTypedWindowEvent  // 4 args
    "Display *" "display"
    "Window" "w"
    "int" "event_type"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XCheckTypedWindowEvent__ TYPED
#define __TRACE_ARGSTYLE_XCheckTypedWindowEvent__ FIXED
#define __TRACE_SAFERETTYPE_XCheckTypedWindowEvent__ Bool
#define __TRACE_PROTOARGLIST_XCheckTypedWindowEvent__ ( Display * display, Window w, int event_type, XEvent * event_return)
#define __TRACE_ARGLIST_XCheckTypedWindowEvent__ ( display, w, event_type, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCheckTypedWindowEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCheckTypedWindowEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCheckTypedWindowEvent__
#define __TRACE_PRINTF_BODY_XCheckTypedWindowEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCheckTypedWindowEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckTypedWindowEvent, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckTypedWindowEvent, int, event_type) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckTypedWindowEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCheckTypedWindowEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCheckTypedWindowEvent, Display_p, display)
__TRACE__(XCheckTypedWindowEvent)


/*
Bool XCheckWindowEvent  // 4 args
    "Display *" "display"
    "Window" "w"
    "long" "event_mask"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XCheckWindowEvent__ TYPED
#define __TRACE_ARGSTYLE_XCheckWindowEvent__ FIXED
#define __TRACE_SAFERETTYPE_XCheckWindowEvent__ Bool
#define __TRACE_PROTOARGLIST_XCheckWindowEvent__ ( Display * display, Window w, long event_mask, XEvent * event_return)
#define __TRACE_ARGLIST_XCheckWindowEvent__ ( display, w, event_mask, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCheckWindowEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCheckWindowEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCheckWindowEvent__
#define __TRACE_PRINTF_BODY_XCheckWindowEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCheckWindowEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckWindowEvent, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckWindowEvent, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCheckWindowEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCheckWindowEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCheckWindowEvent, Display_p, display)
__TRACE__(XCheckWindowEvent)


/*
int XCirculateSubwindows  // 3 args
    "Display *" "display"
    "Window" "w"
    "int" "direction"
*/
#define __TRACE_RETSTYLE_XCirculateSubwindows__ TYPED
#define __TRACE_ARGSTYLE_XCirculateSubwindows__ FIXED
#define __TRACE_SAFERETTYPE_XCirculateSubwindows__ int
#define __TRACE_PROTOARGLIST_XCirculateSubwindows__ ( Display * display, Window w, int direction)
#define __TRACE_ARGLIST_XCirculateSubwindows__ ( display, w, direction)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCirculateSubwindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCirculateSubwindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCirculateSubwindows__
#define __TRACE_PRINTF_BODY_XCirculateSubwindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCirculateSubwindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCirculateSubwindows, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCirculateSubwindows, int_CirculationDirection, direction)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCirculateSubwindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCirculateSubwindows, Display_p, display)
__TRACE__(XCirculateSubwindows)


/*
int XCirculateSubwindowsDown  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XCirculateSubwindowsDown__ TYPED
#define __TRACE_ARGSTYLE_XCirculateSubwindowsDown__ FIXED
#define __TRACE_SAFERETTYPE_XCirculateSubwindowsDown__ int
#define __TRACE_PROTOARGLIST_XCirculateSubwindowsDown__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XCirculateSubwindowsDown__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCirculateSubwindowsDown__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCirculateSubwindowsDown__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCirculateSubwindowsDown__
#define __TRACE_PRINTF_BODY_XCirculateSubwindowsDown__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCirculateSubwindowsDown, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCirculateSubwindowsDown, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCirculateSubwindowsDown__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCirculateSubwindowsDown, Display_p, display)
__TRACE__(XCirculateSubwindowsDown)


/*
int XCirculateSubwindowsUp  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XCirculateSubwindowsUp__ TYPED
#define __TRACE_ARGSTYLE_XCirculateSubwindowsUp__ FIXED
#define __TRACE_SAFERETTYPE_XCirculateSubwindowsUp__ int
#define __TRACE_PROTOARGLIST_XCirculateSubwindowsUp__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XCirculateSubwindowsUp__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCirculateSubwindowsUp__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCirculateSubwindowsUp__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCirculateSubwindowsUp__
#define __TRACE_PRINTF_BODY_XCirculateSubwindowsUp__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCirculateSubwindowsUp, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCirculateSubwindowsUp, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCirculateSubwindowsUp__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCirculateSubwindowsUp, Display_p, display)
__TRACE__(XCirculateSubwindowsUp)


/*
int XClearArea  // 7 args
    "Display *" "display"
    "Window" "w"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "Bool" "exposures"
*/
#define __TRACE_RETSTYLE_XClearArea__ TYPED
#define __TRACE_ARGSTYLE_XClearArea__ FIXED
#define __TRACE_SAFERETTYPE_XClearArea__ int
#define __TRACE_PROTOARGLIST_XClearArea__ ( Display * display, Window w, int x, int y, unsigned int width, unsigned int height, Bool exposures)
#define __TRACE_ARGLIST_XClearArea__ ( display, w, x, y, width, height, exposures)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XClearArea__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XClearArea__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XClearArea__
#define __TRACE_PRINTF_BODY_XClearArea__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XClearArea, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearArea, Bool, exposures)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XClearArea__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XClearArea, Display_p, display)
__TRACE__(XClearArea)


/*
int XClearWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XClearWindow__ TYPED
#define __TRACE_ARGSTYLE_XClearWindow__ FIXED
#define __TRACE_SAFERETTYPE_XClearWindow__ int
#define __TRACE_PROTOARGLIST_XClearWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XClearWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XClearWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XClearWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XClearWindow__
#define __TRACE_PRINTF_BODY_XClearWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XClearWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XClearWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XClearWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XClearWindow, Display_p, display)
__TRACE__(XClearWindow)


/*
int XCloseDisplay  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XCloseDisplay__ TYPED
#define __TRACE_ARGSTYLE_XCloseDisplay__ FIXED
#define __TRACE_SAFERETTYPE_XCloseDisplay__ int
#define __TRACE_PROTOARGLIST_XCloseDisplay__ ( Display * display)
#define __TRACE_ARGLIST_XCloseDisplay__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCloseDisplay__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCloseDisplay__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCloseDisplay__
#define __TRACE_PRINTF_BODY_XCloseDisplay__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCloseDisplay, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCloseDisplay__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCloseDisplay, Display_p, display)
__TRACE__(XCloseDisplay)


/*
int XConfigureWindow  // 4 args
    "Display *" "display"
    "Window" "w"
    "unsigned int" "value_mask"
    "XWindowChanges *" "values"
*/
#define __TRACE_RETSTYLE_XConfigureWindow__ TYPED
#define __TRACE_ARGSTYLE_XConfigureWindow__ FIXED
#define __TRACE_SAFERETTYPE_XConfigureWindow__ int
#define __TRACE_PROTOARGLIST_XConfigureWindow__ ( Display * display, Window w, unsigned int value_mask, XWindowChanges * values)
#define __TRACE_ARGLIST_XConfigureWindow__ ( display, w, value_mask, values)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XConfigureWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XConfigureWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XConfigureWindow__
#define __TRACE_PRINTF_BODY_XConfigureWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XConfigureWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConfigureWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConfigureWindow, unsigned_int_ConfigureWindow, value_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConfigureWindow, XWindowChanges_p, values)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XConfigureWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XConfigureWindow, Display_p, display)
__TRACE__(XConfigureWindow)


/*
int XConnectionNumber  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XConnectionNumber__ TYPED
#define __TRACE_ARGSTYLE_XConnectionNumber__ FIXED
#define __TRACE_SAFERETTYPE_XConnectionNumber__ int
#define __TRACE_PROTOARGLIST_XConnectionNumber__ ( Display * display)
#define __TRACE_ARGLIST_XConnectionNumber__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XConnectionNumber__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XConnectionNumber__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XConnectionNumber__
#define __TRACE_PRINTF_BODY_XConnectionNumber__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XConnectionNumber, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XConnectionNumber__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XConnectionNumber, Display_p, display)
__TRACE__(XConnectionNumber)


/*
int XConvertSelection  // 6 args
    "Display *" "display"
    "Atom" "selection"
    "Atom" "target"
    "Atom" "property"
    "Window" "requestor"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XConvertSelection__ TYPED
#define __TRACE_ARGSTYLE_XConvertSelection__ FIXED
#define __TRACE_SAFERETTYPE_XConvertSelection__ int
#define __TRACE_PROTOARGLIST_XConvertSelection__ ( Display * display, Atom selection, Atom target, Atom property, Window requestor, Time time)
#define __TRACE_ARGLIST_XConvertSelection__ ( display, selection, target, property, requestor, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XConvertSelection__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XConvertSelection__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XConvertSelection__
#define __TRACE_PRINTF_BODY_XConvertSelection__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XConvertSelection, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConvertSelection, Atom, selection) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConvertSelection, Atom, target) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConvertSelection, Atom, property) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConvertSelection, Window, requestor) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XConvertSelection, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XConvertSelection__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XConvertSelection, Display_p, display)
__TRACE__(XConvertSelection)


/*
int XCopyArea  // 10 args
    "Display *" "display"
    "Drawable" "src"
    "Drawable" "dest"
    "GC" "gc"
    "int" "src_x"
    "int" "src_y"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "dest_x"
    "int" "dest_y"
*/
#define __TRACE_RETSTYLE_XCopyArea__ TYPED
#define __TRACE_ARGSTYLE_XCopyArea__ FIXED
#define __TRACE_SAFERETTYPE_XCopyArea__ int
#define __TRACE_PROTOARGLIST_XCopyArea__ ( Display * display, Drawable src, Drawable dest, GC gc, int src_x, int src_y, unsigned int width, unsigned int height, int dest_x, int dest_y)
#define __TRACE_ARGLIST_XCopyArea__ ( display, src, dest, gc, src_x, src_y, width, height, dest_x, dest_y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCopyArea__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCopyArea__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCopyArea__
#define __TRACE_PRINTF_BODY_XCopyArea__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCopyArea, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, Drawable, src) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, Drawable, dest) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, int, src_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, int, src_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, int, dest_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyArea, int, dest_y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCopyArea__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCopyArea, Display_p, display)
__TRACE__(XCopyArea)


/*
int XCopyGC  // 4 args
    "Display *" "display"
    "GC" "src"
    "unsigned long" "valuemask"
    "GC" "dest"
*/
#define __TRACE_RETSTYLE_XCopyGC__ TYPED
#define __TRACE_ARGSTYLE_XCopyGC__ FIXED
#define __TRACE_SAFERETTYPE_XCopyGC__ int
#define __TRACE_PROTOARGLIST_XCopyGC__ ( Display * display, GC src, unsigned long valuemask, GC dest)
#define __TRACE_ARGLIST_XCopyGC__ ( display, src, valuemask, dest)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCopyGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCopyGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCopyGC__
#define __TRACE_PRINTF_BODY_XCopyGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCopyGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyGC, GC, src) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyGC, unsigned_long_GCComponent, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyGC, GC, dest)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCopyGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCopyGC, Display_p, display)
__TRACE__(XCopyGC)


/*
int XCopyPlane  // 11 args
    "Display *" "display"
    "Drawable" "src"
    "Drawable" "dest"
    "GC" "gc"
    "int" "src_x"
    "int" "src_y"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "dest_x"
    "int" "dest_y"
    "unsigned long" "plane"
*/
#define __TRACE_RETSTYLE_XCopyPlane__ TYPED
#define __TRACE_ARGSTYLE_XCopyPlane__ FIXED
#define __TRACE_SAFERETTYPE_XCopyPlane__ int
#define __TRACE_PROTOARGLIST_XCopyPlane__ ( Display * display, Drawable src, Drawable dest, GC gc, int src_x, int src_y, unsigned int width, unsigned int height, int dest_x, int dest_y, unsigned long plane)
#define __TRACE_ARGLIST_XCopyPlane__ ( display, src, dest, gc, src_x, src_y, width, height, dest_x, dest_y, plane)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCopyPlane__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCopyPlane__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCopyPlane__
#define __TRACE_PRINTF_BODY_XCopyPlane__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCopyPlane, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, Drawable, src) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, Drawable, dest) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, int, src_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, int, src_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, int, dest_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, int, dest_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCopyPlane, unsigned_long, plane)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCopyPlane__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCopyPlane, Display_p, display)
__TRACE__(XCopyPlane)


/*
int XDefaultDepth  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDefaultDepth__ TYPED
#define __TRACE_ARGSTYLE_XDefaultDepth__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultDepth__ int
#define __TRACE_PROTOARGLIST_XDefaultDepth__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDefaultDepth__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultDepth__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultDepth__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultDepth__
#define __TRACE_PRINTF_BODY_XDefaultDepth__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultDepth, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefaultDepth, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultDepth__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultDepth, Display_p, display)
__TRACE__(XDefaultDepth)


/*
int XDefaultDepthOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDefaultDepthOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XDefaultDepthOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultDepthOfScreen__ int
#define __TRACE_PROTOARGLIST_XDefaultDepthOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XDefaultDepthOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultDepthOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultDepthOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultDepthOfScreen__
#define __TRACE_PRINTF_BODY_XDefaultDepthOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultDepthOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultDepthOfScreen__ 
__TRACE__(XDefaultDepthOfScreen)


/*
int XDefaultScreen  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDefaultScreen__ TYPED
#define __TRACE_ARGSTYLE_XDefaultScreen__ FIXED
#define __TRACE_SAFERETTYPE_XDefaultScreen__ int
#define __TRACE_PROTOARGLIST_XDefaultScreen__ ( Display * display)
#define __TRACE_ARGLIST_XDefaultScreen__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefaultScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefaultScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefaultScreen__
#define __TRACE_PRINTF_BODY_XDefaultScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefaultScreen, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefaultScreen__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefaultScreen, Display_p, display)
__TRACE__(XDefaultScreen)


/*
int XDefineCursor  // 3 args
    "Display *" "display"
    "Window" "w"
    "Cursor" "cursor"
*/
#define __TRACE_RETSTYLE_XDefineCursor__ TYPED
#define __TRACE_ARGSTYLE_XDefineCursor__ FIXED
#define __TRACE_SAFERETTYPE_XDefineCursor__ int
#define __TRACE_PROTOARGLIST_XDefineCursor__ ( Display * display, Window w, Cursor cursor)
#define __TRACE_ARGLIST_XDefineCursor__ ( display, w, cursor)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDefineCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDefineCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDefineCursor__
#define __TRACE_PRINTF_BODY_XDefineCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDefineCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefineCursor, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDefineCursor, Cursor, cursor)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDefineCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDefineCursor, Display_p, display)
__TRACE__(XDefineCursor)


/*
int XDeleteProperty  // 3 args
    "Display *" "display"
    "Window" "w"
    "Atom" "property"
*/
#define __TRACE_RETSTYLE_XDeleteProperty__ TYPED
#define __TRACE_ARGSTYLE_XDeleteProperty__ FIXED
#define __TRACE_SAFERETTYPE_XDeleteProperty__ int
#define __TRACE_PROTOARGLIST_XDeleteProperty__ ( Display * display, Window w, Atom property)
#define __TRACE_ARGLIST_XDeleteProperty__ ( display, w, property)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDeleteProperty__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDeleteProperty__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDeleteProperty__
#define __TRACE_PRINTF_BODY_XDeleteProperty__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDeleteProperty, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDeleteProperty, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDeleteProperty, Atom, property)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDeleteProperty__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDeleteProperty, Display_p, display)
__TRACE__(XDeleteProperty)


/*
int XDestroyWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XDestroyWindow__ TYPED
#define __TRACE_ARGSTYLE_XDestroyWindow__ FIXED
#define __TRACE_SAFERETTYPE_XDestroyWindow__ int
#define __TRACE_PROTOARGLIST_XDestroyWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XDestroyWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDestroyWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDestroyWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDestroyWindow__
#define __TRACE_PRINTF_BODY_XDestroyWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDestroyWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDestroyWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDestroyWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDestroyWindow, Display_p, display)
__TRACE__(XDestroyWindow)


/*
int XDestroySubwindows  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XDestroySubwindows__ TYPED
#define __TRACE_ARGSTYLE_XDestroySubwindows__ FIXED
#define __TRACE_SAFERETTYPE_XDestroySubwindows__ int
#define __TRACE_PROTOARGLIST_XDestroySubwindows__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XDestroySubwindows__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDestroySubwindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDestroySubwindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDestroySubwindows__
#define __TRACE_PRINTF_BODY_XDestroySubwindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDestroySubwindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDestroySubwindows, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDestroySubwindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDestroySubwindows, Display_p, display)
__TRACE__(XDestroySubwindows)


/*
int XDoesBackingStore  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDoesBackingStore__ TYPED
#define __TRACE_ARGSTYLE_XDoesBackingStore__ FIXED
#define __TRACE_SAFERETTYPE_XDoesBackingStore__ int
#define __TRACE_PROTOARGLIST_XDoesBackingStore__ ( Screen * screen)
#define __TRACE_ARGLIST_XDoesBackingStore__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDoesBackingStore__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDoesBackingStore__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDoesBackingStore__
#define __TRACE_PRINTF_BODY_XDoesBackingStore__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDoesBackingStore, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDoesBackingStore__ 
__TRACE__(XDoesBackingStore)


/*
Bool XDoesSaveUnders  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XDoesSaveUnders__ TYPED
#define __TRACE_ARGSTYLE_XDoesSaveUnders__ FIXED
#define __TRACE_SAFERETTYPE_XDoesSaveUnders__ Bool
#define __TRACE_PROTOARGLIST_XDoesSaveUnders__ ( Screen * screen)
#define __TRACE_ARGLIST_XDoesSaveUnders__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDoesSaveUnders__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDoesSaveUnders__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDoesSaveUnders__
#define __TRACE_PRINTF_BODY_XDoesSaveUnders__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDoesSaveUnders, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDoesSaveUnders__ 
__TRACE__(XDoesSaveUnders)


/*
int XDisableAccessControl  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XDisableAccessControl__ TYPED
#define __TRACE_ARGSTYLE_XDisableAccessControl__ FIXED
#define __TRACE_SAFERETTYPE_XDisableAccessControl__ int
#define __TRACE_PROTOARGLIST_XDisableAccessControl__ ( Display * display)
#define __TRACE_ARGLIST_XDisableAccessControl__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisableAccessControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisableAccessControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisableAccessControl__
#define __TRACE_PRINTF_BODY_XDisableAccessControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisableAccessControl, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisableAccessControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisableAccessControl, Display_p, display)
__TRACE__(XDisableAccessControl)


/*
int XDisplayCells  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayCells__ TYPED
#define __TRACE_ARGSTYLE_XDisplayCells__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayCells__ int
#define __TRACE_PROTOARGLIST_XDisplayCells__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayCells__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayCells__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayCells__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayCells__
#define __TRACE_PRINTF_BODY_XDisplayCells__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayCells, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayCells, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayCells__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayCells, Display_p, display)
__TRACE__(XDisplayCells)


/*
int XDisplayHeight  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayHeight__ TYPED
#define __TRACE_ARGSTYLE_XDisplayHeight__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayHeight__ int
#define __TRACE_PROTOARGLIST_XDisplayHeight__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayHeight__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayHeight__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayHeight__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayHeight__
#define __TRACE_PRINTF_BODY_XDisplayHeight__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayHeight, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayHeight, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayHeight__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayHeight, Display_p, display)
__TRACE__(XDisplayHeight)


/*
int XDisplayHeightMM  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayHeightMM__ TYPED
#define __TRACE_ARGSTYLE_XDisplayHeightMM__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayHeightMM__ int
#define __TRACE_PROTOARGLIST_XDisplayHeightMM__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayHeightMM__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayHeightMM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayHeightMM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayHeightMM__
#define __TRACE_PRINTF_BODY_XDisplayHeightMM__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayHeightMM, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayHeightMM, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayHeightMM__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayHeightMM, Display_p, display)
__TRACE__(XDisplayHeightMM)


/*
int XDisplayKeycodes  // 3 args
    "Display *" "display"
    "int *" "min_keycodes_return"
    "int *" "max_keycodes_return"
*/
#define __TRACE_RETSTYLE_XDisplayKeycodes__ TYPED
#define __TRACE_ARGSTYLE_XDisplayKeycodes__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayKeycodes__ int
#define __TRACE_PROTOARGLIST_XDisplayKeycodes__ ( Display * display, int * min_keycodes_return, int * max_keycodes_return)
#define __TRACE_ARGLIST_XDisplayKeycodes__ ( display, min_keycodes_return, max_keycodes_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayKeycodes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayKeycodes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayKeycodes__
#define __TRACE_PRINTF_BODY_XDisplayKeycodes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayKeycodes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayKeycodes, int_p, min_keycodes_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayKeycodes, int_p, max_keycodes_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayKeycodes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayKeycodes, Display_p, display)
__TRACE__(XDisplayKeycodes)


/*
int XDisplayPlanes  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayPlanes__ TYPED
#define __TRACE_ARGSTYLE_XDisplayPlanes__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayPlanes__ int
#define __TRACE_PROTOARGLIST_XDisplayPlanes__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayPlanes__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayPlanes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayPlanes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayPlanes__
#define __TRACE_PRINTF_BODY_XDisplayPlanes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayPlanes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayPlanes, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayPlanes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayPlanes, Display_p, display)
__TRACE__(XDisplayPlanes)


/*
int XDisplayWidth  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayWidth__ TYPED
#define __TRACE_ARGSTYLE_XDisplayWidth__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayWidth__ int
#define __TRACE_PROTOARGLIST_XDisplayWidth__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayWidth__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayWidth__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayWidth__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayWidth__
#define __TRACE_PRINTF_BODY_XDisplayWidth__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayWidth, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayWidth, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayWidth__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayWidth, Display_p, display)
__TRACE__(XDisplayWidth)


/*
int XDisplayWidthMM  // 2 args
    "Display *" "display"
    "int" "screen_number"
*/
#define __TRACE_RETSTYLE_XDisplayWidthMM__ TYPED
#define __TRACE_ARGSTYLE_XDisplayWidthMM__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayWidthMM__ int
#define __TRACE_PROTOARGLIST_XDisplayWidthMM__ ( Display * display, int screen_number)
#define __TRACE_ARGLIST_XDisplayWidthMM__ ( display, screen_number)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayWidthMM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayWidthMM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayWidthMM__
#define __TRACE_PRINTF_BODY_XDisplayWidthMM__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDisplayWidthMM, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDisplayWidthMM, int, screen_number)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayWidthMM__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDisplayWidthMM, Display_p, display)
__TRACE__(XDisplayWidthMM)


/*
int XDrawArc  // 9 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "angle1"
    "int" "angle2"
*/
#define __TRACE_RETSTYLE_XDrawArc__ TYPED
#define __TRACE_ARGSTYLE_XDrawArc__ FIXED
#define __TRACE_SAFERETTYPE_XDrawArc__ int
#define __TRACE_PROTOARGLIST_XDrawArc__ ( Display * display, Drawable d, GC gc, int x, int y, unsigned int width, unsigned int height, int angle1, int angle2)
#define __TRACE_ARGLIST_XDrawArc__ ( display, d, gc, x, y, width, height, angle1, angle2)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawArc__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawArc__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawArc__
#define __TRACE_PRINTF_BODY_XDrawArc__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawArc, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, int, angle1) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArc, int, angle2)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawArc__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawArc, Display_p, display)
__TRACE__(XDrawArc)


/*
int XDrawArcs  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XArc *" "arcs"
    "int" "narcs"
*/
#define __TRACE_RETSTYLE_XDrawArcs__ TYPED
#define __TRACE_ARGSTYLE_XDrawArcs__ FIXED
#define __TRACE_SAFERETTYPE_XDrawArcs__ int
#define __TRACE_PROTOARGLIST_XDrawArcs__ ( Display * display, Drawable d, GC gc, XArc * arcs, int narcs)
#define __TRACE_ARGLIST_XDrawArcs__ ( display, d, gc, arcs, narcs)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawArcs__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawArcs__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawArcs__
#define __TRACE_PRINTF_BODY_XDrawArcs__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawArcs, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArcs, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArcs, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArcs, XArc_p, arcs) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawArcs, int, narcs)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawArcs__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawArcs, Display_p, display)
__TRACE__(XDrawArcs)


/*
int XDrawImageString  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "string"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XDrawImageString__ TYPED
#define __TRACE_ARGSTYLE_XDrawImageString__ FIXED
#define __TRACE_SAFERETTYPE_XDrawImageString__ int
#define __TRACE_PROTOARGLIST_XDrawImageString__ ( Display * display, Drawable d, GC gc, int x, int y, const char * string, int length)
#define __TRACE_ARGLIST_XDrawImageString__ ( display, d, gc, x, y, string, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawImageString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawImageString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawImageString__
#define __TRACE_PRINTF_BODY_XDrawImageString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawImageString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawImageString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawImageString, Display_p, display)
__TRACE__(XDrawImageString)


/*
int XDrawImageString16  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const XChar2b *" "string"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XDrawImageString16__ TYPED
#define __TRACE_ARGSTYLE_XDrawImageString16__ FIXED
#define __TRACE_SAFERETTYPE_XDrawImageString16__ int
#define __TRACE_PROTOARGLIST_XDrawImageString16__ ( Display * display, Drawable d, GC gc, int x, int y, const XChar2b * string, int length)
#define __TRACE_ARGLIST_XDrawImageString16__ ( display, d, gc, x, y, string, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawImageString16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawImageString16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawImageString16__
#define __TRACE_PRINTF_BODY_XDrawImageString16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawImageString16, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, XChar2b_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawImageString16, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawImageString16__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawImageString16, Display_p, display)
__TRACE__(XDrawImageString16)


/*
int XDrawLine  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x1"
    "int" "y1"
    "int" "x2"
    "int" "y2"
*/
#define __TRACE_RETSTYLE_XDrawLine__ TYPED
#define __TRACE_ARGSTYLE_XDrawLine__ FIXED
#define __TRACE_SAFERETTYPE_XDrawLine__ int
#define __TRACE_PROTOARGLIST_XDrawLine__ ( Display * display, Drawable d, GC gc, int x1, int y1, int x2, int y2)
#define __TRACE_ARGLIST_XDrawLine__ ( display, d, gc, x1, y1, x2, y2)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawLine__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawLine__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawLine__
#define __TRACE_PRINTF_BODY_XDrawLine__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawLine, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, int, x1) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, int, y1) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, int, x2) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLine, int, y2)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawLine__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawLine, Display_p, display)
__TRACE__(XDrawLine)


/*
int XDrawLines  // 6 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XPoint *" "points"
    "int" "npoints"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XDrawLines__ TYPED
#define __TRACE_ARGSTYLE_XDrawLines__ FIXED
#define __TRACE_SAFERETTYPE_XDrawLines__ int
#define __TRACE_PROTOARGLIST_XDrawLines__ ( Display * display, Drawable d, GC gc, XPoint * points, int npoints, int mode)
#define __TRACE_ARGLIST_XDrawLines__ ( display, d, gc, points, npoints, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawLines__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawLines__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawLines__
#define __TRACE_PRINTF_BODY_XDrawLines__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawLines, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLines, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLines, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLines, XPoint_p, points) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLines, int, npoints) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawLines, int_CoordinateMode, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawLines__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawLines, Display_p, display)
__TRACE__(XDrawLines)


/*
int XDrawPoint  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
*/
#define __TRACE_RETSTYLE_XDrawPoint__ TYPED
#define __TRACE_ARGSTYLE_XDrawPoint__ FIXED
#define __TRACE_SAFERETTYPE_XDrawPoint__ int
#define __TRACE_PROTOARGLIST_XDrawPoint__ ( Display * display, Drawable d, GC gc, int x, int y)
#define __TRACE_ARGLIST_XDrawPoint__ ( display, d, gc, x, y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawPoint__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawPoint__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawPoint__
#define __TRACE_PRINTF_BODY_XDrawPoint__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawPoint, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoint, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoint, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoint, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoint, int, y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawPoint__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawPoint, Display_p, display)
__TRACE__(XDrawPoint)


/*
int XDrawPoints  // 6 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XPoint *" "points"
    "int" "npoints"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XDrawPoints__ TYPED
#define __TRACE_ARGSTYLE_XDrawPoints__ FIXED
#define __TRACE_SAFERETTYPE_XDrawPoints__ int
#define __TRACE_PROTOARGLIST_XDrawPoints__ ( Display * display, Drawable d, GC gc, XPoint * points, int npoints, int mode)
#define __TRACE_ARGLIST_XDrawPoints__ ( display, d, gc, points, npoints, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawPoints__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawPoints__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawPoints__
#define __TRACE_PRINTF_BODY_XDrawPoints__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawPoints, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoints, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoints, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoints, XPoint_p, points) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoints, int, npoints) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawPoints, int_CoordinateMode, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawPoints__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawPoints, Display_p, display)
__TRACE__(XDrawPoints)


/*
int XDrawRectangle  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XDrawRectangle__ TYPED
#define __TRACE_ARGSTYLE_XDrawRectangle__ FIXED
#define __TRACE_SAFERETTYPE_XDrawRectangle__ int
#define __TRACE_PROTOARGLIST_XDrawRectangle__ ( Display * display, Drawable d, GC gc, int x, int y, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XDrawRectangle__ ( display, d, gc, x, y, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawRectangle__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawRectangle__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawRectangle__
#define __TRACE_PRINTF_BODY_XDrawRectangle__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawRectangle, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangle, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawRectangle__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawRectangle, Display_p, display)
__TRACE__(XDrawRectangle)


/*
int XDrawRectangles  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XRectangle *" "rectangles"
    "int" "nrectangles"
*/
#define __TRACE_RETSTYLE_XDrawRectangles__ TYPED
#define __TRACE_ARGSTYLE_XDrawRectangles__ FIXED
#define __TRACE_SAFERETTYPE_XDrawRectangles__ int
#define __TRACE_PROTOARGLIST_XDrawRectangles__ ( Display * display, Drawable d, GC gc, XRectangle * rectangles, int nrectangles)
#define __TRACE_ARGLIST_XDrawRectangles__ ( display, d, gc, rectangles, nrectangles)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawRectangles__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawRectangles__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawRectangles__
#define __TRACE_PRINTF_BODY_XDrawRectangles__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawRectangles, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangles, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangles, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangles, XRectangle_p, rectangles) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawRectangles, int, nrectangles)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawRectangles__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawRectangles, Display_p, display)
__TRACE__(XDrawRectangles)


/*
int XDrawSegments  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XSegment *" "segments"
    "int" "nsegments"
*/
#define __TRACE_RETSTYLE_XDrawSegments__ TYPED
#define __TRACE_ARGSTYLE_XDrawSegments__ FIXED
#define __TRACE_SAFERETTYPE_XDrawSegments__ int
#define __TRACE_PROTOARGLIST_XDrawSegments__ ( Display * display, Drawable d, GC gc, XSegment * segments, int nsegments)
#define __TRACE_ARGLIST_XDrawSegments__ ( display, d, gc, segments, nsegments)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawSegments__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawSegments__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawSegments__
#define __TRACE_PRINTF_BODY_XDrawSegments__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawSegments, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawSegments, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawSegments, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawSegments, XSegment_p, segments) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawSegments, int, nsegments)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawSegments__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawSegments, Display_p, display)
__TRACE__(XDrawSegments)


/*
int XDrawString  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "string"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XDrawString__ TYPED
#define __TRACE_ARGSTYLE_XDrawString__ FIXED
#define __TRACE_SAFERETTYPE_XDrawString__ int
#define __TRACE_PROTOARGLIST_XDrawString__ ( Display * display, Drawable d, GC gc, int x, int y, const char * string, int length)
#define __TRACE_ARGLIST_XDrawString__ ( display, d, gc, x, y, string, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawString__
#define __TRACE_PRINTF_BODY_XDrawString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawString, Display_p, display)
__TRACE__(XDrawString)


/*
int XDrawString16  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const XChar2b *" "string"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XDrawString16__ TYPED
#define __TRACE_ARGSTYLE_XDrawString16__ FIXED
#define __TRACE_SAFERETTYPE_XDrawString16__ int
#define __TRACE_PROTOARGLIST_XDrawString16__ ( Display * display, Drawable d, GC gc, int x, int y, const XChar2b * string, int length)
#define __TRACE_ARGLIST_XDrawString16__ ( display, d, gc, x, y, string, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawString16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawString16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawString16__
#define __TRACE_PRINTF_BODY_XDrawString16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawString16, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, XChar2b_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawString16, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawString16__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawString16, Display_p, display)
__TRACE__(XDrawString16)


/*
int XDrawText  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "XTextItem *" "items"
    "int" "nitems"
*/
#define __TRACE_RETSTYLE_XDrawText__ TYPED
#define __TRACE_ARGSTYLE_XDrawText__ FIXED
#define __TRACE_SAFERETTYPE_XDrawText__ int
#define __TRACE_PROTOARGLIST_XDrawText__ ( Display * display, Drawable d, GC gc, int x, int y, XTextItem * items, int nitems)
#define __TRACE_ARGLIST_XDrawText__ ( display, d, gc, x, y, items, nitems)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawText__
#define __TRACE_PRINTF_BODY_XDrawText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, XTextItem_p, items) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText, int, nitems)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawText, Display_p, display)
__TRACE__(XDrawText)


/*
int XDrawText16  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "XTextItem16 *" "items"
    "int" "nitems"
*/
#define __TRACE_RETSTYLE_XDrawText16__ TYPED
#define __TRACE_ARGSTYLE_XDrawText16__ FIXED
#define __TRACE_SAFERETTYPE_XDrawText16__ int
#define __TRACE_PROTOARGLIST_XDrawText16__ ( Display * display, Drawable d, GC gc, int x, int y, XTextItem16 * items, int nitems)
#define __TRACE_ARGLIST_XDrawText16__ ( display, d, gc, x, y, items, nitems)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDrawText16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDrawText16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDrawText16__
#define __TRACE_PRINTF_BODY_XDrawText16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XDrawText16, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, XTextItem16_p, items) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XDrawText16, int, nitems)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDrawText16__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XDrawText16, Display_p, display)
__TRACE__(XDrawText16)


/*
int XEnableAccessControl  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XEnableAccessControl__ TYPED
#define __TRACE_ARGSTYLE_XEnableAccessControl__ FIXED
#define __TRACE_SAFERETTYPE_XEnableAccessControl__ int
#define __TRACE_PROTOARGLIST_XEnableAccessControl__ ( Display * display)
#define __TRACE_ARGLIST_XEnableAccessControl__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XEnableAccessControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XEnableAccessControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XEnableAccessControl__
#define __TRACE_PRINTF_BODY_XEnableAccessControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XEnableAccessControl, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XEnableAccessControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XEnableAccessControl, Display_p, display)
__TRACE__(XEnableAccessControl)


/*
int XEventsQueued  // 2 args
    "Display *" "display"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XEventsQueued__ TYPED
#define __TRACE_ARGSTYLE_XEventsQueued__ FIXED
#define __TRACE_SAFERETTYPE_XEventsQueued__ int
#define __TRACE_PROTOARGLIST_XEventsQueued__ ( Display * display, int mode)
#define __TRACE_ARGLIST_XEventsQueued__ ( display, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XEventsQueued__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XEventsQueued__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XEventsQueued__
#define __TRACE_PRINTF_BODY_XEventsQueued__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XEventsQueued, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XEventsQueued, int_QueueMode, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XEventsQueued__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XEventsQueued, Display_p, display)
__TRACE__(XEventsQueued)


/*
Status XFetchName  // 3 args
    "Display *" "display"
    "Window" "w"
    "char **" "window_name_return"
*/
#define __TRACE_RETSTYLE_XFetchName__ TYPED
#define __TRACE_ARGSTYLE_XFetchName__ FIXED
#define __TRACE_SAFERETTYPE_XFetchName__ Status
#define __TRACE_PROTOARGLIST_XFetchName__ ( Display * display, Window w, char ** window_name_return)
#define __TRACE_ARGLIST_XFetchName__ ( display, w, window_name_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFetchName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFetchName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFetchName__
#define __TRACE_PRINTF_BODY_XFetchName__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFetchName, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFetchName, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFetchName, char_pp, window_name_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFetchName__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFetchName, Display_p, display)
__TRACE__(XFetchName)


/*
int XFillArc  // 9 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "angle1"
    "int" "angle2"
*/
#define __TRACE_RETSTYLE_XFillArc__ TYPED
#define __TRACE_ARGSTYLE_XFillArc__ FIXED
#define __TRACE_SAFERETTYPE_XFillArc__ int
#define __TRACE_PROTOARGLIST_XFillArc__ ( Display * display, Drawable d, GC gc, int x, int y, unsigned int width, unsigned int height, int angle1, int angle2)
#define __TRACE_ARGLIST_XFillArc__ ( display, d, gc, x, y, width, height, angle1, angle2)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFillArc__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFillArc__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFillArc__
#define __TRACE_PRINTF_BODY_XFillArc__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFillArc, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, int, angle1) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArc, int, angle2)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFillArc__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFillArc, Display_p, display)
__TRACE__(XFillArc)


/*
int XFillArcs  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XArc *" "arcs"
    "int" "narcs"
*/
#define __TRACE_RETSTYLE_XFillArcs__ TYPED
#define __TRACE_ARGSTYLE_XFillArcs__ FIXED
#define __TRACE_SAFERETTYPE_XFillArcs__ int
#define __TRACE_PROTOARGLIST_XFillArcs__ ( Display * display, Drawable d, GC gc, XArc * arcs, int narcs)
#define __TRACE_ARGLIST_XFillArcs__ ( display, d, gc, arcs, narcs)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFillArcs__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFillArcs__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFillArcs__
#define __TRACE_PRINTF_BODY_XFillArcs__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFillArcs, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArcs, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArcs, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArcs, XArc_p, arcs) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillArcs, int, narcs)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFillArcs__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFillArcs, Display_p, display)
__TRACE__(XFillArcs)


/*
int XFillPolygon  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XPoint *" "points"
    "int" "npoints"
    "int" "shape"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XFillPolygon__ TYPED
#define __TRACE_ARGSTYLE_XFillPolygon__ FIXED
#define __TRACE_SAFERETTYPE_XFillPolygon__ int
#define __TRACE_PROTOARGLIST_XFillPolygon__ ( Display * display, Drawable d, GC gc, XPoint * points, int npoints, int shape, int mode)
#define __TRACE_ARGLIST_XFillPolygon__ ( display, d, gc, points, npoints, shape, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFillPolygon__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFillPolygon__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFillPolygon__
#define __TRACE_PRINTF_BODY_XFillPolygon__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFillPolygon, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, XPoint_p, points) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, int, npoints) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, int_PolygonShape, shape) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillPolygon, int_CoordinateMode, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFillPolygon__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFillPolygon, Display_p, display)
__TRACE__(XFillPolygon)


/*
int XFillRectangle  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XFillRectangle__ TYPED
#define __TRACE_ARGSTYLE_XFillRectangle__ FIXED
#define __TRACE_SAFERETTYPE_XFillRectangle__ int
#define __TRACE_PROTOARGLIST_XFillRectangle__ ( Display * display, Drawable d, GC gc, int x, int y, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XFillRectangle__ ( display, d, gc, x, y, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFillRectangle__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFillRectangle__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFillRectangle__
#define __TRACE_PRINTF_BODY_XFillRectangle__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFillRectangle, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangle, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFillRectangle__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFillRectangle, Display_p, display)
__TRACE__(XFillRectangle)


/*
int XFillRectangles  // 5 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XRectangle *" "rectangles"
    "int" "nrectangles"
*/
#define __TRACE_RETSTYLE_XFillRectangles__ TYPED
#define __TRACE_ARGSTYLE_XFillRectangles__ FIXED
#define __TRACE_SAFERETTYPE_XFillRectangles__ int
#define __TRACE_PROTOARGLIST_XFillRectangles__ ( Display * display, Drawable d, GC gc, XRectangle * rectangles, int nrectangles)
#define __TRACE_ARGLIST_XFillRectangles__ ( display, d, gc, rectangles, nrectangles)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFillRectangles__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFillRectangles__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFillRectangles__
#define __TRACE_PRINTF_BODY_XFillRectangles__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFillRectangles, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangles, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangles, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangles, XRectangle_p, rectangles) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFillRectangles, int, nrectangles)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFillRectangles__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFillRectangles, Display_p, display)
__TRACE__(XFillRectangles)


/*
int XFlush  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XFlush__ TYPED
#define __TRACE_ARGSTYLE_XFlush__ FIXED
#define __TRACE_SAFERETTYPE_XFlush__ int
#define __TRACE_PROTOARGLIST_XFlush__ ( Display * display)
#define __TRACE_ARGLIST_XFlush__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFlush__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFlush__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFlush__
#define __TRACE_PRINTF_BODY_XFlush__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFlush, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFlush__ 
__TRACE__(XFlush)


/*
int XForceScreenSaver  // 2 args
    "Display *" "display"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XForceScreenSaver__ TYPED
#define __TRACE_ARGSTYLE_XForceScreenSaver__ FIXED
#define __TRACE_SAFERETTYPE_XForceScreenSaver__ int
#define __TRACE_PROTOARGLIST_XForceScreenSaver__ ( Display * display, int mode)
#define __TRACE_ARGLIST_XForceScreenSaver__ ( display, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XForceScreenSaver__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XForceScreenSaver__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XForceScreenSaver__
#define __TRACE_PRINTF_BODY_XForceScreenSaver__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XForceScreenSaver, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XForceScreenSaver, int_ForceScreenSaver, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XForceScreenSaver__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XForceScreenSaver, Display_p, display)
__TRACE__(XForceScreenSaver)


/*
int XFree  // 1 args
    "void *" "data"
*/
#define __TRACE_RETSTYLE_XFree__ TYPED
#define __TRACE_ARGSTYLE_XFree__ FIXED
#define __TRACE_SAFERETTYPE_XFree__ int
#define __TRACE_PROTOARGLIST_XFree__ ( void * data)
#define __TRACE_ARGLIST_XFree__ ( data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFree__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFree__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFree__
#define __TRACE_PRINTF_BODY_XFree__ \
    __TRACE_PRINTF_ARG__(XFree, void_p, data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFree__ 
__TRACE__(XFree)


/*
int XFreeColormap  // 2 args
    "Display *" "display"
    "Colormap" "colormap"
*/
#define __TRACE_RETSTYLE_XFreeColormap__ TYPED
#define __TRACE_ARGSTYLE_XFreeColormap__ FIXED
#define __TRACE_SAFERETTYPE_XFreeColormap__ int
#define __TRACE_PROTOARGLIST_XFreeColormap__ ( Display * display, Colormap colormap)
#define __TRACE_ARGLIST_XFreeColormap__ ( display, colormap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeColormap__
#define __TRACE_PRINTF_BODY_XFreeColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeColormap, Colormap, colormap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeColormap, Display_p, display)
__TRACE__(XFreeColormap)


/*
int XFreeColors  // 5 args
    "Display *" "display"
    "Colormap" "colormap"
    "unsigned long *" "pixels"
    "int" "npixels"
    "unsigned long" "planes"
*/
#define __TRACE_RETSTYLE_XFreeColors__ TYPED
#define __TRACE_ARGSTYLE_XFreeColors__ FIXED
#define __TRACE_SAFERETTYPE_XFreeColors__ int
#define __TRACE_PROTOARGLIST_XFreeColors__ ( Display * display, Colormap colormap, unsigned long * pixels, int npixels, unsigned long planes)
#define __TRACE_ARGLIST_XFreeColors__ ( display, colormap, pixels, npixels, planes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeColors__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeColors__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeColors__
#define __TRACE_PRINTF_BODY_XFreeColors__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeColors, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeColors, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeColors, unsigned_long_p, pixels) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeColors, int, npixels) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeColors, unsigned_long, planes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeColors__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeColors, Display_p, display)
__TRACE__(XFreeColors)


/*
int XFreeCursor  // 2 args
    "Display *" "display"
    "Cursor" "cursor"
*/
#define __TRACE_RETSTYLE_XFreeCursor__ TYPED
#define __TRACE_ARGSTYLE_XFreeCursor__ FIXED
#define __TRACE_SAFERETTYPE_XFreeCursor__ int
#define __TRACE_PROTOARGLIST_XFreeCursor__ ( Display * display, Cursor cursor)
#define __TRACE_ARGLIST_XFreeCursor__ ( display, cursor)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeCursor__
#define __TRACE_PRINTF_BODY_XFreeCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeCursor, Cursor, cursor)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeCursor, Display_p, display)
__TRACE__(XFreeCursor)


/*
int XFreeExtensionList  // 1 args
    "char **" "list"
*/
#define __TRACE_RETSTYLE_XFreeExtensionList__ TYPED
#define __TRACE_ARGSTYLE_XFreeExtensionList__ FIXED
#define __TRACE_SAFERETTYPE_XFreeExtensionList__ int
#define __TRACE_PROTOARGLIST_XFreeExtensionList__ ( char ** list)
#define __TRACE_ARGLIST_XFreeExtensionList__ ( list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeExtensionList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeExtensionList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeExtensionList__
#define __TRACE_PRINTF_BODY_XFreeExtensionList__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeExtensionList, char_pp, list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeExtensionList__ 
__TRACE__(XFreeExtensionList)


/*
int XFreeFont  // 2 args
    "Display *" "display"
    "XFontStruct *" "font_struct"
*/
#define __TRACE_RETSTYLE_XFreeFont__ TYPED
#define __TRACE_ARGSTYLE_XFreeFont__ FIXED
#define __TRACE_SAFERETTYPE_XFreeFont__ int
#define __TRACE_PROTOARGLIST_XFreeFont__ ( Display * display, XFontStruct * font_struct)
#define __TRACE_ARGLIST_XFreeFont__ ( display, font_struct)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeFont__
#define __TRACE_PRINTF_BODY_XFreeFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeFont, XFontStruct_p, font_struct)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeFont, Display_p, display)
__TRACE__(XFreeFont)


/*
int XFreeFontInfo  // 3 args
    "char **" "names"
    "XFontStruct *" "free_info"
    "int" "actual_count"
*/
#define __TRACE_RETSTYLE_XFreeFontInfo__ TYPED
#define __TRACE_ARGSTYLE_XFreeFontInfo__ FIXED
#define __TRACE_SAFERETTYPE_XFreeFontInfo__ int
#define __TRACE_PROTOARGLIST_XFreeFontInfo__ ( char ** names, XFontStruct * free_info, int actual_count)
#define __TRACE_ARGLIST_XFreeFontInfo__ ( names, free_info, actual_count)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeFontInfo__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeFontInfo__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeFontInfo__
#define __TRACE_PRINTF_BODY_XFreeFontInfo__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeFontInfo, char_pp, names) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeFontInfo, XFontStruct_p, free_info) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeFontInfo, int, actual_count)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeFontInfo__ 
__TRACE__(XFreeFontInfo)


/*
int XFreeFontNames  // 1 args
    "char **" "list"
*/
#define __TRACE_RETSTYLE_XFreeFontNames__ TYPED
#define __TRACE_ARGSTYLE_XFreeFontNames__ FIXED
#define __TRACE_SAFERETTYPE_XFreeFontNames__ int
#define __TRACE_PROTOARGLIST_XFreeFontNames__ ( char ** list)
#define __TRACE_ARGLIST_XFreeFontNames__ ( list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeFontNames__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeFontNames__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeFontNames__
#define __TRACE_PRINTF_BODY_XFreeFontNames__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeFontNames, char_pp, list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeFontNames__ 
__TRACE__(XFreeFontNames)


/*
int XFreeFontPath  // 1 args
    "char **" "list"
*/
#define __TRACE_RETSTYLE_XFreeFontPath__ TYPED
#define __TRACE_ARGSTYLE_XFreeFontPath__ FIXED
#define __TRACE_SAFERETTYPE_XFreeFontPath__ int
#define __TRACE_PROTOARGLIST_XFreeFontPath__ ( char ** list)
#define __TRACE_ARGLIST_XFreeFontPath__ ( list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeFontPath__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeFontPath__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeFontPath__
#define __TRACE_PRINTF_BODY_XFreeFontPath__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeFontPath, char_pp, list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeFontPath__ 
__TRACE__(XFreeFontPath)


/*
int XFreeGC  // 2 args
    "Display *" "display"
    "GC" "gc"
*/
#define __TRACE_RETSTYLE_XFreeGC__ TYPED
#define __TRACE_ARGSTYLE_XFreeGC__ FIXED
#define __TRACE_SAFERETTYPE_XFreeGC__ int
#define __TRACE_PROTOARGLIST_XFreeGC__ ( Display * display, GC gc)
#define __TRACE_ARGLIST_XFreeGC__ ( display, gc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeGC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeGC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeGC__
#define __TRACE_PRINTF_BODY_XFreeGC__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeGC, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeGC, GC, gc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeGC__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeGC, Display_p, display)
__TRACE__(XFreeGC)


/*
int XFreeModifiermap  // 1 args
    "XModifierKeymap *" "modmap"
*/
#define __TRACE_RETSTYLE_XFreeModifiermap__ TYPED
#define __TRACE_ARGSTYLE_XFreeModifiermap__ FIXED
#define __TRACE_SAFERETTYPE_XFreeModifiermap__ int
#define __TRACE_PROTOARGLIST_XFreeModifiermap__ ( XModifierKeymap * modmap)
#define __TRACE_ARGLIST_XFreeModifiermap__ ( modmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeModifiermap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeModifiermap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeModifiermap__
#define __TRACE_PRINTF_BODY_XFreeModifiermap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeModifiermap, XModifierKeymap_p, modmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeModifiermap__ 
__TRACE__(XFreeModifiermap)


/*
int XFreePixmap  // 2 args
    "Display *" "display"
    "Pixmap" "pixmap"
*/
#define __TRACE_RETSTYLE_XFreePixmap__ TYPED
#define __TRACE_ARGSTYLE_XFreePixmap__ FIXED
#define __TRACE_SAFERETTYPE_XFreePixmap__ int
#define __TRACE_PROTOARGLIST_XFreePixmap__ ( Display * display, Pixmap pixmap)
#define __TRACE_ARGLIST_XFreePixmap__ ( display, pixmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreePixmap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreePixmap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreePixmap__
#define __TRACE_PRINTF_BODY_XFreePixmap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreePixmap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreePixmap, Pixmap, pixmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreePixmap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreePixmap, Display_p, display)
__TRACE__(XFreePixmap)


/*
int XGeometry  // 13 args
    "Display *" "display"
    "int" "screen"
    "const char *" "position"
    "const char *" "default_position"
    "unsigned int" "bwidth"
    "unsigned int" "fwidth"
    "unsigned int" "fheight"
    "int" "xadder"
    "int" "yadder"
    "int *" "x_return"
    "int *" "y_return"
    "int *" "width_return"
    "int *" "height_return"
*/
#define __TRACE_RETSTYLE_XGeometry__ TYPED
#define __TRACE_ARGSTYLE_XGeometry__ FIXED
#define __TRACE_SAFERETTYPE_XGeometry__ int
#define __TRACE_PROTOARGLIST_XGeometry__ ( Display * display, int screen, const char * position, const char * default_position, unsigned int bwidth, unsigned int fwidth, unsigned int fheight, int xadder, int yadder, int * x_return, int * y_return, int * width_return, int * height_return)
#define __TRACE_ARGLIST_XGeometry__ ( display, screen, position, default_position, bwidth, fwidth, fheight, xadder, yadder, x_return, y_return, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGeometry__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGeometry__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGeometry__
#define __TRACE_PRINTF_BODY_XGeometry__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGeometry, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int, screen) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, char_p, position) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, char_p, default_position) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, unsigned_int, bwidth) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, unsigned_int, fwidth) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, unsigned_int, fheight) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int, xadder) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int, yadder) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int_p, x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int_p, y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGeometry, int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGeometry__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGeometry, Display_p, display)
__TRACE__(XGeometry)


/*
int XGetErrorDatabaseText  // 6 args
    "Display *" "display"
    "const char *" "name"
    "const char *" "message"
    "const char *" "default_string"
    "char *" "buffer_return"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XGetErrorDatabaseText__ TYPED
#define __TRACE_ARGSTYLE_XGetErrorDatabaseText__ FIXED
#define __TRACE_SAFERETTYPE_XGetErrorDatabaseText__ int
#define __TRACE_PROTOARGLIST_XGetErrorDatabaseText__ ( Display * display, const char * name, const char * message, const char * default_string, char * buffer_return, int length)
#define __TRACE_ARGLIST_XGetErrorDatabaseText__ ( display, name, message, default_string, buffer_return, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetErrorDatabaseText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetErrorDatabaseText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetErrorDatabaseText__
#define __TRACE_PRINTF_BODY_XGetErrorDatabaseText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, char_p, name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, char_p, message) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, char_p, default_string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, char_p, buffer_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorDatabaseText, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetErrorDatabaseText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetErrorDatabaseText, Display_p, display)
__TRACE__(XGetErrorDatabaseText)


/*
int XGetErrorText  // 4 args
    "Display *" "display"
    "int" "code"
    "char *" "buffer_return"
    "int" "length"
*/
#define __TRACE_RETSTYLE_XGetErrorText__ TYPED
#define __TRACE_ARGSTYLE_XGetErrorText__ FIXED
#define __TRACE_SAFERETTYPE_XGetErrorText__ int
#define __TRACE_PROTOARGLIST_XGetErrorText__ ( Display * display, int code, char * buffer_return, int length)
#define __TRACE_ARGLIST_XGetErrorText__ ( display, code, buffer_return, length)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetErrorText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetErrorText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetErrorText__
#define __TRACE_PRINTF_BODY_XGetErrorText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetErrorText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorText, int, code) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorText, char_p, buffer_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetErrorText, int, length)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetErrorText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetErrorText, Display_p, display)
__TRACE__(XGetErrorText)


/*
Bool XGetFontProperty  // 3 args
    "XFontStruct *" "font_struct"
    "Atom" "atom"
    "unsigned long *" "value_return"
*/
#define __TRACE_RETSTYLE_XGetFontProperty__ TYPED
#define __TRACE_ARGSTYLE_XGetFontProperty__ FIXED
#define __TRACE_SAFERETTYPE_XGetFontProperty__ Bool
#define __TRACE_PROTOARGLIST_XGetFontProperty__ ( XFontStruct * font_struct, Atom atom, unsigned long * value_return)
#define __TRACE_ARGLIST_XGetFontProperty__ ( font_struct, atom, value_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetFontProperty__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetFontProperty__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetFontProperty__
#define __TRACE_PRINTF_BODY_XGetFontProperty__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetFontProperty, XFontStruct_p, font_struct) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetFontProperty, Atom, atom) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetFontProperty, unsigned_long_p, value_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetFontProperty__ 
__TRACE__(XGetFontProperty)


/*
Status XGetGCValues  // 4 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "valuemask"
    "XGCValues *" "values_return"
*/
#define __TRACE_RETSTYLE_XGetGCValues__ TYPED
#define __TRACE_ARGSTYLE_XGetGCValues__ FIXED
#define __TRACE_SAFERETTYPE_XGetGCValues__ Status
#define __TRACE_PROTOARGLIST_XGetGCValues__ ( Display * display, GC gc, unsigned long valuemask, XGCValues * values_return)
#define __TRACE_ARGLIST_XGetGCValues__ ( display, gc, valuemask, values_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetGCValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetGCValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetGCValues__
#define __TRACE_PRINTF_BODY_XGetGCValues__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetGCValues, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGCValues, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGCValues, unsigned_long_GCComponent, valuemask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGCValues, XGCValues_p, values_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetGCValues__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetGCValues, Display_p, display)
__TRACE__(XGetGCValues)


/*
Status XGetGeometry  // 9 args
    "Display *" "display"
    "Drawable" "d"
    "Window *" "root_return"
    "int *" "x_return"
    "int *" "y_return"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
    "unsigned int *" "border_width_return"
    "unsigned int *" "depth_return"
*/
#define __TRACE_RETSTYLE_XGetGeometry__ TYPED
#define __TRACE_ARGSTYLE_XGetGeometry__ FIXED
#define __TRACE_SAFERETTYPE_XGetGeometry__ Status
#define __TRACE_PROTOARGLIST_XGetGeometry__ ( Display * display, Drawable d, Window * root_return, int * x_return, int * y_return, unsigned int * width_return, unsigned int * height_return, unsigned int * border_width_return, unsigned int * depth_return)
#define __TRACE_ARGLIST_XGetGeometry__ ( display, d, root_return, x_return, y_return, width_return, height_return, border_width_return, depth_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetGeometry__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetGeometry__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetGeometry__
#define __TRACE_PRINTF_BODY_XGetGeometry__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetGeometry, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, Window_p, root_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, int_p, x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, int_p, y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, unsigned_int_p, height_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, unsigned_int_p, border_width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetGeometry, unsigned_int_p, depth_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetGeometry__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetGeometry, Display_p, display)
__TRACE__(XGetGeometry)


/*
Status XGetIconName  // 3 args
    "Display *" "display"
    "Window" "w"
    "char **" "icon_name_return"
*/
#define __TRACE_RETSTYLE_XGetIconName__ TYPED
#define __TRACE_ARGSTYLE_XGetIconName__ FIXED
#define __TRACE_SAFERETTYPE_XGetIconName__ Status
#define __TRACE_PROTOARGLIST_XGetIconName__ ( Display * display, Window w, char ** icon_name_return)
#define __TRACE_ARGLIST_XGetIconName__ ( display, w, icon_name_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetIconName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetIconName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetIconName__
#define __TRACE_PRINTF_BODY_XGetIconName__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetIconName, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetIconName, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetIconName, char_pp, icon_name_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetIconName__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetIconName, Display_p, display)
__TRACE__(XGetIconName)


/*
int XGetInputFocus  // 3 args
    "Display *" "display"
    "Window *" "focus_return"
    "int *" "revert_to_return"
*/
#define __TRACE_RETSTYLE_XGetInputFocus__ TYPED
#define __TRACE_ARGSTYLE_XGetInputFocus__ FIXED
#define __TRACE_SAFERETTYPE_XGetInputFocus__ int
#define __TRACE_PROTOARGLIST_XGetInputFocus__ ( Display * display, Window * focus_return, int * revert_to_return)
#define __TRACE_ARGLIST_XGetInputFocus__ ( display, focus_return, revert_to_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetInputFocus__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetInputFocus__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetInputFocus__
#define __TRACE_PRINTF_BODY_XGetInputFocus__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetInputFocus, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetInputFocus, Window_p, focus_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetInputFocus, int_InputFocus_p, revert_to_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetInputFocus__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetInputFocus, Display_p, display)
__TRACE__(XGetInputFocus)


/*
int XGetKeyboardControl  // 2 args
    "Display *" "display"
    "XKeyboardState *" "values_return"
*/
#define __TRACE_RETSTYLE_XGetKeyboardControl__ TYPED
#define __TRACE_ARGSTYLE_XGetKeyboardControl__ FIXED
#define __TRACE_SAFERETTYPE_XGetKeyboardControl__ int
#define __TRACE_PROTOARGLIST_XGetKeyboardControl__ ( Display * display, XKeyboardState * values_return)
#define __TRACE_ARGLIST_XGetKeyboardControl__ ( display, values_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetKeyboardControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetKeyboardControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetKeyboardControl__
#define __TRACE_PRINTF_BODY_XGetKeyboardControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetKeyboardControl, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetKeyboardControl, XKeyboardState_p, values_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetKeyboardControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetKeyboardControl, Display_p, display)
__TRACE__(XGetKeyboardControl)


/*
int XGetPointerControl  // 4 args
    "Display *" "display"
    "int *" "accel_numerator_return"
    "int *" "accel_denominator_return"
    "int *" "threshold_return"
*/
#define __TRACE_RETSTYLE_XGetPointerControl__ TYPED
#define __TRACE_ARGSTYLE_XGetPointerControl__ FIXED
#define __TRACE_SAFERETTYPE_XGetPointerControl__ int
#define __TRACE_PROTOARGLIST_XGetPointerControl__ ( Display * display, int * accel_numerator_return, int * accel_denominator_return, int * threshold_return)
#define __TRACE_ARGLIST_XGetPointerControl__ ( display, accel_numerator_return, accel_denominator_return, threshold_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetPointerControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetPointerControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetPointerControl__
#define __TRACE_PRINTF_BODY_XGetPointerControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetPointerControl, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetPointerControl, int_p, accel_numerator_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetPointerControl, int_p, accel_denominator_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetPointerControl, int_p, threshold_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetPointerControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetPointerControl, Display_p, display)
__TRACE__(XGetPointerControl)


/*
int XGetPointerMapping  // 3 args
    "Display *" "display"
    "unsigned char *" "map_return"
    "int" "nmap"
*/
#define __TRACE_RETSTYLE_XGetPointerMapping__ TYPED
#define __TRACE_ARGSTYLE_XGetPointerMapping__ FIXED
#define __TRACE_SAFERETTYPE_XGetPointerMapping__ int
#define __TRACE_PROTOARGLIST_XGetPointerMapping__ ( Display * display, unsigned char * map_return, int nmap)
#define __TRACE_ARGLIST_XGetPointerMapping__ ( display, map_return, nmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetPointerMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetPointerMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetPointerMapping__
#define __TRACE_PRINTF_BODY_XGetPointerMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetPointerMapping, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetPointerMapping, unsigned_char_p, map_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetPointerMapping, int, nmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetPointerMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetPointerMapping, Display_p, display)
__TRACE__(XGetPointerMapping)


/*
int XGetScreenSaver  // 5 args
    "Display *" "display"
    "int *" "timeout_return"
    "int *" "interval_return"
    "int *" "prefer_blanking_return"
    "int *" "allow_exposures_return"
*/
#define __TRACE_RETSTYLE_XGetScreenSaver__ TYPED
#define __TRACE_ARGSTYLE_XGetScreenSaver__ FIXED
#define __TRACE_SAFERETTYPE_XGetScreenSaver__ int
#define __TRACE_PROTOARGLIST_XGetScreenSaver__ ( Display * display, int * timeout_return, int * interval_return, int * prefer_blanking_return, int * allow_exposures_return)
#define __TRACE_ARGLIST_XGetScreenSaver__ ( display, timeout_return, interval_return, prefer_blanking_return, allow_exposures_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetScreenSaver__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetScreenSaver__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetScreenSaver__
#define __TRACE_PRINTF_BODY_XGetScreenSaver__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetScreenSaver, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetScreenSaver, int_p, timeout_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetScreenSaver, int_p, interval_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetScreenSaver, int_ScreenSaverBlanking_p, prefer_blanking_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetScreenSaver, int_ScreenSaverExposures_p, allow_exposures_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetScreenSaver__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetScreenSaver, Display_p, display)
__TRACE__(XGetScreenSaver)


/*
Status XGetTransientForHint  // 3 args
    "Display *" "display"
    "Window" "w"
    "Window *" "prop_window_return"
*/
#define __TRACE_RETSTYLE_XGetTransientForHint__ TYPED
#define __TRACE_ARGSTYLE_XGetTransientForHint__ FIXED
#define __TRACE_SAFERETTYPE_XGetTransientForHint__ Status
#define __TRACE_PROTOARGLIST_XGetTransientForHint__ ( Display * display, Window w, Window * prop_window_return)
#define __TRACE_ARGLIST_XGetTransientForHint__ ( display, w, prop_window_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetTransientForHint__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetTransientForHint__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetTransientForHint__
#define __TRACE_PRINTF_BODY_XGetTransientForHint__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetTransientForHint, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetTransientForHint, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetTransientForHint, Window_p, prop_window_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetTransientForHint__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetTransientForHint, Display_p, display)
__TRACE__(XGetTransientForHint)


/*
int XGetWindowProperty  // 12 args
    "Display *" "display"
    "Window" "w"
    "Atom" "property"
    "long" "long_offset"
    "long" "long_length"
    "Bool" "delete"
    "Atom" "req_type"
    "Atom *" "actual_type_return"
    "int *" "actual_format_return"
    "unsigned long *" "nitems_return"
    "unsigned long *" "bytes_after_return"
    "unsigned char **" "prop_return"
*/
#define __TRACE_RETSTYLE_XGetWindowProperty__ TYPED
#define __TRACE_ARGSTYLE_XGetWindowProperty__ FIXED
#define __TRACE_SAFERETTYPE_XGetWindowProperty__ int
#define __TRACE_PROTOARGLIST_XGetWindowProperty__ ( Display * display, Window w, Atom property, long long_offset, long long_length, Bool delete, Atom req_type, Atom * actual_type_return, int * actual_format_return, unsigned long * nitems_return, unsigned long * bytes_after_return, unsigned char ** prop_return)
#define __TRACE_ARGLIST_XGetWindowProperty__ ( display, w, property, long_offset, long_length, delete, req_type, actual_type_return, actual_format_return, nitems_return, bytes_after_return, prop_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetWindowProperty__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetWindowProperty__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetWindowProperty__
#define __TRACE_PRINTF_BODY_XGetWindowProperty__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Atom, property) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, long, long_offset) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, long, long_length) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Bool, delete) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Atom, req_type) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, Atom_p, actual_type_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, int_p, actual_format_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, unsigned_long_p, nitems_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, unsigned_long_p, bytes_after_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowProperty, unsigned_char_pp, prop_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetWindowProperty__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetWindowProperty, Display_p, display)
__TRACE__(XGetWindowProperty)


/*
Status XGetWindowAttributes  // 3 args
    "Display *" "display"
    "Window" "w"
    "XWindowAttributes *" "window_attributes_return"
*/
#define __TRACE_RETSTYLE_XGetWindowAttributes__ TYPED
#define __TRACE_ARGSTYLE_XGetWindowAttributes__ FIXED
#define __TRACE_SAFERETTYPE_XGetWindowAttributes__ Status
#define __TRACE_PROTOARGLIST_XGetWindowAttributes__ ( Display * display, Window w, XWindowAttributes * window_attributes_return)
#define __TRACE_ARGLIST_XGetWindowAttributes__ ( display, w, window_attributes_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetWindowAttributes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetWindowAttributes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetWindowAttributes__
#define __TRACE_PRINTF_BODY_XGetWindowAttributes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGetWindowAttributes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowAttributes, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGetWindowAttributes, XWindowAttributes_p, window_attributes_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetWindowAttributes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGetWindowAttributes, Display_p, display)
__TRACE__(XGetWindowAttributes)


/*
int XGrabButton  // 10 args
    "Display *" "display"
    "unsigned int" "button"
    "unsigned int" "modifiers"
    "Window" "grab_window"
    "Bool" "owner_events"
    "unsigned int" "event_mask"
    "int" "pointer_mode"
    "int" "keyboard_mode"
    "Window" "confine_to"
    "Cursor" "cursor"
*/
#define __TRACE_RETSTYLE_XGrabButton__ TYPED
#define __TRACE_ARGSTYLE_XGrabButton__ FIXED
#define __TRACE_SAFERETTYPE_XGrabButton__ int_GrabReply
#define __TRACE_PROTOARGLIST_XGrabButton__ ( Display * display, unsigned int button, unsigned int modifiers, Window grab_window, Bool owner_events, unsigned int event_mask, int pointer_mode, int keyboard_mode, Window confine_to, Cursor cursor)
#define __TRACE_ARGLIST_XGrabButton__ ( display, button, modifiers, grab_window, owner_events, event_mask, pointer_mode, keyboard_mode, confine_to, cursor)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGrabButton__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGrabButton__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGrabButton__
#define __TRACE_PRINTF_BODY_XGrabButton__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGrabButton, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, int_ButtonName, button) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, int_KeyButtonMask, modifiers) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, Window, grab_window) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, Bool, owner_events) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, int_GrabMode, pointer_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, int_GrabMode, keyboard_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, Window, confine_to) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabButton, Cursor, cursor)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGrabButton__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGrabButton, Display_p, display)
__TRACE__(XGrabButton)


/*
int XGrabKey  // 7 args
    "Display *" "display"
    "int" "keycode"
    "unsigned int" "modifiers"
    "Window" "grab_window"
    "Bool" "owner_events"
    "int" "pointer_mode"
    "int" "keyboard_mode"
*/
#define __TRACE_RETSTYLE_XGrabKey__ TYPED
#define __TRACE_ARGSTYLE_XGrabKey__ FIXED
#define __TRACE_SAFERETTYPE_XGrabKey__ int_GrabReply
#define __TRACE_PROTOARGLIST_XGrabKey__ ( Display * display, int keycode, unsigned int modifiers, Window grab_window, Bool owner_events, int pointer_mode, int keyboard_mode)
#define __TRACE_ARGLIST_XGrabKey__ ( display, keycode, modifiers, grab_window, owner_events, pointer_mode, keyboard_mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGrabKey__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGrabKey__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGrabKey__
#define __TRACE_PRINTF_BODY_XGrabKey__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGrabKey, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, int, keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, int_KeyButtonMask, modifiers) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, Window, grab_window) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, Bool, owner_events) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, int_GrabMode, pointer_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKey, int_GrabMode, keyboard_mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGrabKey__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGrabKey, Display_p, display)
__TRACE__(XGrabKey)


/*
int XGrabKeyboard  // 6 args
    "Display *" "display"
    "Window" "grab_window"
    "Bool" "owner_events"
    "int" "pointer_mode"
    "int" "keyboard_mode"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XGrabKeyboard__ TYPED
#define __TRACE_ARGSTYLE_XGrabKeyboard__ FIXED
#define __TRACE_SAFERETTYPE_XGrabKeyboard__ int_GrabReply
#define __TRACE_PROTOARGLIST_XGrabKeyboard__ ( Display * display, Window grab_window, Bool owner_events, int pointer_mode, int keyboard_mode, Time time)
#define __TRACE_ARGLIST_XGrabKeyboard__ ( display, grab_window, owner_events, pointer_mode, keyboard_mode, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGrabKeyboard__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGrabKeyboard__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGrabKeyboard__
#define __TRACE_PRINTF_BODY_XGrabKeyboard__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, Window, grab_window) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, Bool, owner_events) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, int_GrabMode, pointer_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, int_GrabMode, keyboard_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabKeyboard, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGrabKeyboard__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGrabKeyboard, Display_p, display)
__TRACE__(XGrabKeyboard)


/*
int XGrabPointer  // 9 args
    "Display *" "display"
    "Window" "grab_window"
    "Bool" "owner_events"
    "unsigned int" "event_mask"
    "int" "pointer_mode"
    "int" "keyboard_mode"
    "Window" "confine_to"
    "Cursor" "cursor"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XGrabPointer__ TYPED
#define __TRACE_ARGSTYLE_XGrabPointer__ FIXED
#define __TRACE_SAFERETTYPE_XGrabPointer__ int_GrabReply
#define __TRACE_PROTOARGLIST_XGrabPointer__ ( Display * display, Window grab_window, Bool owner_events, unsigned int event_mask, int pointer_mode, int keyboard_mode, Window confine_to, Cursor cursor, Time time)
#define __TRACE_ARGLIST_XGrabPointer__ ( display, grab_window, owner_events, event_mask, pointer_mode, keyboard_mode, confine_to, cursor, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGrabPointer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGrabPointer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGrabPointer__
#define __TRACE_PRINTF_BODY_XGrabPointer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGrabPointer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, Window, grab_window) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, Bool, owner_events) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, int_GrabMode, pointer_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, int_GrabMode, keyboard_mode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, Window, confine_to) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, Cursor, cursor) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XGrabPointer, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGrabPointer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGrabPointer, Display_p, display)
__TRACE__(XGrabPointer)


/*
int XGrabServer  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XGrabServer__ TYPED
#define __TRACE_ARGSTYLE_XGrabServer__ FIXED
#define __TRACE_SAFERETTYPE_XGrabServer__ int
#define __TRACE_PROTOARGLIST_XGrabServer__ ( Display * display)
#define __TRACE_ARGLIST_XGrabServer__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGrabServer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGrabServer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGrabServer__
#define __TRACE_PRINTF_BODY_XGrabServer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XGrabServer, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGrabServer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XGrabServer, Display_p, display)
__TRACE__(XGrabServer)


/*
int XHeightMMOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XHeightMMOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XHeightMMOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XHeightMMOfScreen__ int
#define __TRACE_PROTOARGLIST_XHeightMMOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XHeightMMOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XHeightMMOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XHeightMMOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XHeightMMOfScreen__
#define __TRACE_PRINTF_BODY_XHeightMMOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XHeightMMOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XHeightMMOfScreen__ 
__TRACE__(XHeightMMOfScreen)


/*
int XHeightOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XHeightOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XHeightOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XHeightOfScreen__ int
#define __TRACE_PROTOARGLIST_XHeightOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XHeightOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XHeightOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XHeightOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XHeightOfScreen__
#define __TRACE_PRINTF_BODY_XHeightOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XHeightOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XHeightOfScreen__ 
__TRACE__(XHeightOfScreen)


/*
int XIfEvent  // 4 args
    "Display *" "display"
    "XEvent *" "event_return"
    "Bool (*) ( Display * , XEvent * , XPointer )" "predicate"
    "XPointer" "arg"
*/
#define __TRACE_RETSTYLE_XIfEvent__ TYPED
#define __TRACE_ARGSTYLE_XIfEvent__ FIXED
#define __TRACE_SAFERETTYPE_XIfEvent__ int
#define __TRACE_PROTOARGLIST_XIfEvent__ ( Display * display, XEvent * event_return, Bool (*predicate) ( Display * , XEvent * , XPointer ), XPointer arg)
#define __TRACE_ARGLIST_XIfEvent__ ( display, event_return, predicate, arg)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XIfEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XIfEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XIfEvent__
#define __TRACE_PRINTF_BODY_XIfEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XIfEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XIfEvent, XEvent_p, event_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XIfEvent, Bool__p____Display_p___XEvent_p___XPointer__, predicate) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XIfEvent, XPointer, arg)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XIfEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XIfEvent, Display_p, display)
__TRACE__(XIfEvent)


/*
int XImageByteOrder  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XImageByteOrder__ TYPED
#define __TRACE_ARGSTYLE_XImageByteOrder__ FIXED
#define __TRACE_SAFERETTYPE_XImageByteOrder__ int
#define __TRACE_PROTOARGLIST_XImageByteOrder__ ( Display * display)
#define __TRACE_ARGLIST_XImageByteOrder__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XImageByteOrder__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XImageByteOrder__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XImageByteOrder__
#define __TRACE_PRINTF_BODY_XImageByteOrder__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XImageByteOrder, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XImageByteOrder__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XImageByteOrder, Display_p, display)
__TRACE__(XImageByteOrder)


/*
int XInstallColormap  // 2 args
    "Display *" "display"
    "Colormap" "colormap"
*/
#define __TRACE_RETSTYLE_XInstallColormap__ TYPED
#define __TRACE_ARGSTYLE_XInstallColormap__ FIXED
#define __TRACE_SAFERETTYPE_XInstallColormap__ int
#define __TRACE_PROTOARGLIST_XInstallColormap__ ( Display * display, Colormap colormap)
#define __TRACE_ARGLIST_XInstallColormap__ ( display, colormap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInstallColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInstallColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInstallColormap__
#define __TRACE_PRINTF_BODY_XInstallColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInstallColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInstallColormap, Colormap, colormap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInstallColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XInstallColormap, Display_p, display)
__TRACE__(XInstallColormap)


/*
KeyCode XKeysymToKeycode  // 2 args
    "Display *" "display"
    "KeySym" "keysym"
*/
#define __TRACE_RETSTYLE_XKeysymToKeycode__ TYPED
#define __TRACE_ARGSTYLE_XKeysymToKeycode__ FIXED
#define __TRACE_SAFERETTYPE_XKeysymToKeycode__ KeyCode
#define __TRACE_PROTOARGLIST_XKeysymToKeycode__ ( Display * display, KeySym keysym)
#define __TRACE_ARGLIST_XKeysymToKeycode__ ( display, keysym)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XKeysymToKeycode__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XKeysymToKeycode__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XKeysymToKeycode__
#define __TRACE_PRINTF_BODY_XKeysymToKeycode__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XKeysymToKeycode, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XKeysymToKeycode, KeySym, keysym)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XKeysymToKeycode__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XKeysymToKeycode, Display_p, display)
__TRACE__(XKeysymToKeycode)


/*
int XKillClient  // 2 args
    "Display *" "display"
    "XID" "resource"
*/
#define __TRACE_RETSTYLE_XKillClient__ TYPED
#define __TRACE_ARGSTYLE_XKillClient__ FIXED
#define __TRACE_SAFERETTYPE_XKillClient__ int
#define __TRACE_PROTOARGLIST_XKillClient__ ( Display * display, XID resource)
#define __TRACE_ARGLIST_XKillClient__ ( display, resource)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XKillClient__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XKillClient__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XKillClient__
#define __TRACE_PRINTF_BODY_XKillClient__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XKillClient, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XKillClient, XID, resource)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XKillClient__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XKillClient, Display_p, display)
__TRACE__(XKillClient)


/*
Status XLookupColor  // 5 args
    "Display *" "display"
    "Colormap" "colormap"
    "const char *" "color_name"
    "XColor *" "exact_def_return"
    "XColor *" "screen_def_return"
*/
#define __TRACE_RETSTYLE_XLookupColor__ TYPED
#define __TRACE_ARGSTYLE_XLookupColor__ FIXED
#define __TRACE_SAFERETTYPE_XLookupColor__ Status
#define __TRACE_PROTOARGLIST_XLookupColor__ ( Display * display, Colormap colormap, const char * color_name, XColor * exact_def_return, XColor * screen_def_return)
#define __TRACE_ARGLIST_XLookupColor__ ( display, colormap, color_name, exact_def_return, screen_def_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLookupColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLookupColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLookupColor__
#define __TRACE_PRINTF_BODY_XLookupColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLookupColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLookupColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLookupColor, char_p, color_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLookupColor, XColor_p, exact_def_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLookupColor, XColor_p, screen_def_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLookupColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLookupColor, Display_p, display)
__TRACE__(XLookupColor)


/*
int XLowerWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XLowerWindow__ TYPED
#define __TRACE_ARGSTYLE_XLowerWindow__ FIXED
#define __TRACE_SAFERETTYPE_XLowerWindow__ int
#define __TRACE_PROTOARGLIST_XLowerWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XLowerWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLowerWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLowerWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLowerWindow__
#define __TRACE_PRINTF_BODY_XLowerWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XLowerWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XLowerWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLowerWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XLowerWindow, Display_p, display)
__TRACE__(XLowerWindow)


/*
int XMapRaised  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XMapRaised__ TYPED
#define __TRACE_ARGSTYLE_XMapRaised__ FIXED
#define __TRACE_SAFERETTYPE_XMapRaised__ int
#define __TRACE_PROTOARGLIST_XMapRaised__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XMapRaised__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMapRaised__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMapRaised__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMapRaised__
#define __TRACE_PRINTF_BODY_XMapRaised__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMapRaised, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMapRaised, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMapRaised__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMapRaised, Display_p, display)
__TRACE__(XMapRaised)


/*
int XMapSubwindows  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XMapSubwindows__ TYPED
#define __TRACE_ARGSTYLE_XMapSubwindows__ FIXED
#define __TRACE_SAFERETTYPE_XMapSubwindows__ int
#define __TRACE_PROTOARGLIST_XMapSubwindows__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XMapSubwindows__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMapSubwindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMapSubwindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMapSubwindows__
#define __TRACE_PRINTF_BODY_XMapSubwindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMapSubwindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMapSubwindows, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMapSubwindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMapSubwindows, Display_p, display)
__TRACE__(XMapSubwindows)


/*
int XMapWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XMapWindow__ TYPED
#define __TRACE_ARGSTYLE_XMapWindow__ FIXED
#define __TRACE_SAFERETTYPE_XMapWindow__ int
#define __TRACE_PROTOARGLIST_XMapWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XMapWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMapWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMapWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMapWindow__
#define __TRACE_PRINTF_BODY_XMapWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMapWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMapWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMapWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMapWindow, Display_p, display)
__TRACE__(XMapWindow)


/*
int XMaskEvent  // 3 args
    "Display *" "display"
    "long" "event_mask"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XMaskEvent__ TYPED
#define __TRACE_ARGSTYLE_XMaskEvent__ FIXED
#define __TRACE_SAFERETTYPE_XMaskEvent__ int
#define __TRACE_PROTOARGLIST_XMaskEvent__ ( Display * display, long event_mask, XEvent * event_return)
#define __TRACE_ARGLIST_XMaskEvent__ ( display, event_mask, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMaskEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMaskEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMaskEvent__
#define __TRACE_PRINTF_BODY_XMaskEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMaskEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMaskEvent, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMaskEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMaskEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMaskEvent, Display_p, display)
__TRACE__(XMaskEvent)


/*
int XMaxCmapsOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XMaxCmapsOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XMaxCmapsOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XMaxCmapsOfScreen__ int
#define __TRACE_PROTOARGLIST_XMaxCmapsOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XMaxCmapsOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMaxCmapsOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMaxCmapsOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMaxCmapsOfScreen__
#define __TRACE_PRINTF_BODY_XMaxCmapsOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMaxCmapsOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMaxCmapsOfScreen__ 
__TRACE__(XMaxCmapsOfScreen)


/*
int XMinCmapsOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XMinCmapsOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XMinCmapsOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XMinCmapsOfScreen__ int
#define __TRACE_PROTOARGLIST_XMinCmapsOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XMinCmapsOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMinCmapsOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMinCmapsOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMinCmapsOfScreen__
#define __TRACE_PRINTF_BODY_XMinCmapsOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMinCmapsOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMinCmapsOfScreen__ 
__TRACE__(XMinCmapsOfScreen)


/*
int XMoveResizeWindow  // 6 args
    "Display *" "display"
    "Window" "w"
    "int" "x"
    "int" "y"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XMoveResizeWindow__ TYPED
#define __TRACE_ARGSTYLE_XMoveResizeWindow__ FIXED
#define __TRACE_SAFERETTYPE_XMoveResizeWindow__ int
#define __TRACE_PROTOARGLIST_XMoveResizeWindow__ ( Display * display, Window w, int x, int y, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XMoveResizeWindow__ ( display, w, x, y, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMoveResizeWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMoveResizeWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMoveResizeWindow__
#define __TRACE_PRINTF_BODY_XMoveResizeWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveResizeWindow, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMoveResizeWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMoveResizeWindow, Display_p, display)
__TRACE__(XMoveResizeWindow)


/*
int XMoveWindow  // 4 args
    "Display *" "display"
    "Window" "w"
    "int" "x"
    "int" "y"
*/
#define __TRACE_RETSTYLE_XMoveWindow__ TYPED
#define __TRACE_ARGSTYLE_XMoveWindow__ FIXED
#define __TRACE_SAFERETTYPE_XMoveWindow__ int
#define __TRACE_PROTOARGLIST_XMoveWindow__ ( Display * display, Window w, int x, int y)
#define __TRACE_ARGLIST_XMoveWindow__ ( display, w, x, y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XMoveWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XMoveWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XMoveWindow__
#define __TRACE_PRINTF_BODY_XMoveWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XMoveWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveWindow, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XMoveWindow, int, y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XMoveWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XMoveWindow, Display_p, display)
__TRACE__(XMoveWindow)


/*
int XNextEvent  // 2 args
    "Display *" "display"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XNextEvent__ TYPED
#define __TRACE_ARGSTYLE_XNextEvent__ FIXED
#define __TRACE_SAFERETTYPE_XNextEvent__ int
#define __TRACE_PROTOARGLIST_XNextEvent__ ( Display * display, XEvent * event_return)
#define __TRACE_ARGLIST_XNextEvent__ ( display, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XNextEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XNextEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XNextEvent__
#define __TRACE_PRINTF_BODY_XNextEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XNextEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XNextEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XNextEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XNextEvent, Display_p, display)
__TRACE__(XNextEvent)


/*
int XNoOp  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XNoOp__ TYPED
#define __TRACE_ARGSTYLE_XNoOp__ FIXED
#define __TRACE_SAFERETTYPE_XNoOp__ int
#define __TRACE_PROTOARGLIST_XNoOp__ ( Display * display)
#define __TRACE_ARGLIST_XNoOp__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XNoOp__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XNoOp__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XNoOp__
#define __TRACE_PRINTF_BODY_XNoOp__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XNoOp, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XNoOp__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XNoOp, Display_p, display)
__TRACE__(XNoOp)


/*
Status XParseColor  // 4 args
    "Display *" "display"
    "Colormap" "colormap"
    "const char *" "spec"
    "XColor *" "exact_def_return"
*/
#define __TRACE_RETSTYLE_XParseColor__ TYPED
#define __TRACE_ARGSTYLE_XParseColor__ FIXED
#define __TRACE_SAFERETTYPE_XParseColor__ Status
#define __TRACE_PROTOARGLIST_XParseColor__ ( Display * display, Colormap colormap, const char * spec, XColor * exact_def_return)
#define __TRACE_ARGLIST_XParseColor__ ( display, colormap, spec, exact_def_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XParseColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XParseColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XParseColor__
#define __TRACE_PRINTF_BODY_XParseColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XParseColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseColor, char_p, spec) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseColor, XColor_p, exact_def_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XParseColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XParseColor, Display_p, display)
__TRACE__(XParseColor)


/*
int XParseGeometry  // 5 args
    "const char *" "parsestring"
    "int *" "x_return"
    "int *" "y_return"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
*/
#define __TRACE_RETSTYLE_XParseGeometry__ TYPED
#define __TRACE_ARGSTYLE_XParseGeometry__ FIXED
#define __TRACE_SAFERETTYPE_XParseGeometry__ int
#define __TRACE_PROTOARGLIST_XParseGeometry__ ( const char * parsestring, int * x_return, int * y_return, unsigned int * width_return, unsigned int * height_return)
#define __TRACE_ARGLIST_XParseGeometry__ ( parsestring, x_return, y_return, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XParseGeometry__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XParseGeometry__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XParseGeometry__
#define __TRACE_PRINTF_BODY_XParseGeometry__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XParseGeometry, char_p, parsestring) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseGeometry, int_p, x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseGeometry, int_p, y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseGeometry, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XParseGeometry, unsigned_int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XParseGeometry__ 
__TRACE__(XParseGeometry)


/*
int XPeekEvent  // 2 args
    "Display *" "display"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XPeekEvent__ TYPED
#define __TRACE_ARGSTYLE_XPeekEvent__ FIXED
#define __TRACE_SAFERETTYPE_XPeekEvent__ int
#define __TRACE_PROTOARGLIST_XPeekEvent__ ( Display * display, XEvent * event_return)
#define __TRACE_ARGLIST_XPeekEvent__ ( display, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPeekEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPeekEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPeekEvent__
#define __TRACE_PRINTF_BODY_XPeekEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPeekEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPeekEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPeekEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XPeekEvent, Display_p, display)
__TRACE__(XPeekEvent)


/*
int XPeekIfEvent  // 4 args
    "Display *" "display"
    "XEvent *" "event_return"
    "Bool (*) ( Display * , XEvent * , XPointer )" "predicate"
    "XPointer" "arg"
*/
#define __TRACE_RETSTYLE_XPeekIfEvent__ TYPED
#define __TRACE_ARGSTYLE_XPeekIfEvent__ FIXED
#define __TRACE_SAFERETTYPE_XPeekIfEvent__ int
#define __TRACE_PROTOARGLIST_XPeekIfEvent__ ( Display * display, XEvent * event_return, Bool (*predicate) ( Display * , XEvent * , XPointer ), XPointer arg)
#define __TRACE_ARGLIST_XPeekIfEvent__ ( display, event_return, predicate, arg)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPeekIfEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPeekIfEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPeekIfEvent__
#define __TRACE_PRINTF_BODY_XPeekIfEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPeekIfEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPeekIfEvent, XEvent_p, event_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPeekIfEvent, Bool__p____Display_p___XEvent_p___XPointer__, predicate) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPeekIfEvent, XPointer, arg)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPeekIfEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XPeekIfEvent, Display_p, display)
__TRACE__(XPeekIfEvent)


/*
int XPending  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XPending__ TYPED
#define __TRACE_ARGSTYLE_XPending__ FIXED
#define __TRACE_SAFERETTYPE_XPending__ int
#define __TRACE_PROTOARGLIST_XPending__ ( Display * display)
#define __TRACE_ARGLIST_XPending__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPending__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPending__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPending__
#define __TRACE_PRINTF_BODY_XPending__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPending, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPending__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XPending, Display_p, display)
__TRACE__(XPending)


/*
int XPlanesOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XPlanesOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XPlanesOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XPlanesOfScreen__ int
#define __TRACE_PROTOARGLIST_XPlanesOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XPlanesOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPlanesOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPlanesOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPlanesOfScreen__
#define __TRACE_PRINTF_BODY_XPlanesOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPlanesOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPlanesOfScreen__ 
__TRACE__(XPlanesOfScreen)


/*
int XProtocolRevision  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XProtocolRevision__ TYPED
#define __TRACE_ARGSTYLE_XProtocolRevision__ FIXED
#define __TRACE_SAFERETTYPE_XProtocolRevision__ int
#define __TRACE_PROTOARGLIST_XProtocolRevision__ ( Display * display)
#define __TRACE_ARGLIST_XProtocolRevision__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XProtocolRevision__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XProtocolRevision__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XProtocolRevision__
#define __TRACE_PRINTF_BODY_XProtocolRevision__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XProtocolRevision, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XProtocolRevision__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XProtocolRevision, Display_p, display)
__TRACE__(XProtocolRevision)


/*
int XProtocolVersion  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XProtocolVersion__ TYPED
#define __TRACE_ARGSTYLE_XProtocolVersion__ FIXED
#define __TRACE_SAFERETTYPE_XProtocolVersion__ int
#define __TRACE_PROTOARGLIST_XProtocolVersion__ ( Display * display)
#define __TRACE_ARGLIST_XProtocolVersion__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XProtocolVersion__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XProtocolVersion__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XProtocolVersion__
#define __TRACE_PRINTF_BODY_XProtocolVersion__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XProtocolVersion, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XProtocolVersion__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XProtocolVersion, Display_p, display)
__TRACE__(XProtocolVersion)


/*
int XPutBackEvent  // 2 args
    "Display *" "display"
    "XEvent *" "event"
*/
#define __TRACE_RETSTYLE_XPutBackEvent__ TYPED
#define __TRACE_ARGSTYLE_XPutBackEvent__ FIXED
#define __TRACE_SAFERETTYPE_XPutBackEvent__ int
#define __TRACE_PROTOARGLIST_XPutBackEvent__ ( Display * display, XEvent * event)
#define __TRACE_ARGLIST_XPutBackEvent__ ( display, event)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPutBackEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPutBackEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPutBackEvent__
#define __TRACE_PRINTF_BODY_XPutBackEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPutBackEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutBackEvent, XEvent_p, event)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPutBackEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XPutBackEvent, Display_p, display)
__TRACE__(XPutBackEvent)


/*
int XPutImage  // 10 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "XImage *" "image"
    "int" "src_x"
    "int" "src_y"
    "int" "dest_x"
    "int" "dest_y"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XPutImage__ TYPED
#define __TRACE_ARGSTYLE_XPutImage__ FIXED
#define __TRACE_SAFERETTYPE_XPutImage__ int
#define __TRACE_PROTOARGLIST_XPutImage__ ( Display * display, Drawable d, GC gc, XImage * image, int src_x, int src_y, int dest_x, int dest_y, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XPutImage__ ( display, d, gc, image, src_x, src_y, dest_x, dest_y, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XPutImage__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XPutImage__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XPutImage__
#define __TRACE_PRINTF_BODY_XPutImage__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XPutImage, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, XImage_p, image) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, int, src_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, int, src_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, int, dest_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, int, dest_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XPutImage, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XPutImage__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XPutImage, Display_p, display)
__TRACE__(XPutImage)


/*
int XQLength  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XQLength__ TYPED
#define __TRACE_ARGSTYLE_XQLength__ FIXED
#define __TRACE_SAFERETTYPE_XQLength__ int
#define __TRACE_PROTOARGLIST_XQLength__ ( Display * display)
#define __TRACE_ARGLIST_XQLength__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQLength__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQLength__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQLength__
#define __TRACE_PRINTF_BODY_XQLength__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQLength, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQLength__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQLength, Display_p, display)
__TRACE__(XQLength)


/*
Status XQueryBestCursor  // 6 args
    "Display *" "display"
    "Drawable" "d"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
*/
#define __TRACE_RETSTYLE_XQueryBestCursor__ TYPED
#define __TRACE_ARGSTYLE_XQueryBestCursor__ FIXED
#define __TRACE_SAFERETTYPE_XQueryBestCursor__ Status
#define __TRACE_PROTOARGLIST_XQueryBestCursor__ ( Display * display, Drawable d, unsigned int width, unsigned int height, unsigned int * width_return, unsigned int * height_return)
#define __TRACE_ARGLIST_XQueryBestCursor__ ( display, d, width, height, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryBestCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryBestCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryBestCursor__
#define __TRACE_PRINTF_BODY_XQueryBestCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestCursor, unsigned_int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryBestCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryBestCursor, Display_p, display)
__TRACE__(XQueryBestCursor)


/*
Status XQueryBestSize  // 7 args
    "Display *" "display"
    "int" "class"
    "Drawable" "which_screen"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
*/
#define __TRACE_RETSTYLE_XQueryBestSize__ TYPED
#define __TRACE_ARGSTYLE_XQueryBestSize__ FIXED
#define __TRACE_SAFERETTYPE_XQueryBestSize__ Status
#define __TRACE_PROTOARGLIST_XQueryBestSize__ ( Display * display, int class, Drawable which_screen, unsigned int width, unsigned int height, unsigned int * width_return, unsigned int * height_return)
#define __TRACE_ARGLIST_XQueryBestSize__ ( display, class, which_screen, width, height, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryBestSize__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryBestSize__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryBestSize__
#define __TRACE_PRINTF_BODY_XQueryBestSize__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryBestSize, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, int_CursorShape, class) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, Drawable, which_screen) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestSize, unsigned_int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryBestSize__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryBestSize, Display_p, display)
__TRACE__(XQueryBestSize)


/*
Status XQueryBestStipple  // 6 args
    "Display *" "display"
    "Drawable" "which_screen"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
*/
#define __TRACE_RETSTYLE_XQueryBestStipple__ TYPED
#define __TRACE_ARGSTYLE_XQueryBestStipple__ FIXED
#define __TRACE_SAFERETTYPE_XQueryBestStipple__ Status
#define __TRACE_PROTOARGLIST_XQueryBestStipple__ ( Display * display, Drawable which_screen, unsigned int width, unsigned int height, unsigned int * width_return, unsigned int * height_return)
#define __TRACE_ARGLIST_XQueryBestStipple__ ( display, which_screen, width, height, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryBestStipple__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryBestStipple__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryBestStipple__
#define __TRACE_PRINTF_BODY_XQueryBestStipple__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, Drawable, which_screen) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestStipple, unsigned_int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryBestStipple__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryBestStipple, Display_p, display)
__TRACE__(XQueryBestStipple)


/*
Status XQueryBestTile  // 6 args
    "Display *" "display"
    "Drawable" "which_screen"
    "unsigned int" "width"
    "unsigned int" "height"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
*/
#define __TRACE_RETSTYLE_XQueryBestTile__ TYPED
#define __TRACE_ARGSTYLE_XQueryBestTile__ FIXED
#define __TRACE_SAFERETTYPE_XQueryBestTile__ Status
#define __TRACE_PROTOARGLIST_XQueryBestTile__ ( Display * display, Drawable which_screen, unsigned int width, unsigned int height, unsigned int * width_return, unsigned int * height_return)
#define __TRACE_ARGLIST_XQueryBestTile__ ( display, which_screen, width, height, width_return, height_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryBestTile__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryBestTile__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryBestTile__
#define __TRACE_PRINTF_BODY_XQueryBestTile__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryBestTile, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestTile, Drawable, which_screen) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestTile, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestTile, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestTile, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryBestTile, unsigned_int_p, height_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryBestTile__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryBestTile, Display_p, display)
__TRACE__(XQueryBestTile)


/*
int XQueryColor  // 3 args
    "Display *" "display"
    "Colormap" "colormap"
    "XColor *" "def_in_out"
*/
#define __TRACE_RETSTYLE_XQueryColor__ TYPED
#define __TRACE_ARGSTYLE_XQueryColor__ FIXED
#define __TRACE_SAFERETTYPE_XQueryColor__ int
#define __TRACE_PROTOARGLIST_XQueryColor__ ( Display * display, Colormap colormap, XColor * def_in_out)
#define __TRACE_ARGLIST_XQueryColor__ ( display, colormap, def_in_out)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryColor__
#define __TRACE_PRINTF_BODY_XQueryColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryColor, XColor_p, def_in_out)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryColor, Display_p, display)
__TRACE__(XQueryColor)


/*
int XQueryColors  // 4 args
    "Display *" "display"
    "Colormap" "colormap"
    "XColor *" "defs_in_out"
    "int" "ncolors"
*/
#define __TRACE_RETSTYLE_XQueryColors__ TYPED
#define __TRACE_ARGSTYLE_XQueryColors__ FIXED
#define __TRACE_SAFERETTYPE_XQueryColors__ int
#define __TRACE_PROTOARGLIST_XQueryColors__ ( Display * display, Colormap colormap, XColor * defs_in_out, int ncolors)
#define __TRACE_ARGLIST_XQueryColors__ ( display, colormap, defs_in_out, ncolors)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryColors__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryColors__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryColors__
#define __TRACE_PRINTF_BODY_XQueryColors__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryColors, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryColors, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryColors, XColor_p, defs_in_out) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryColors, int, ncolors)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryColors__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryColors, Display_p, display)
__TRACE__(XQueryColors)


/*
Bool XQueryExtension  // 5 args
    "Display *" "display"
    "const char *" "name"
    "int *" "major_opcode_return"
    "int *" "first_event_return"
    "int *" "first_error_return"
*/
#define __TRACE_RETSTYLE_XQueryExtension__ TYPED
#define __TRACE_ARGSTYLE_XQueryExtension__ FIXED
#define __TRACE_SAFERETTYPE_XQueryExtension__ Bool
#define __TRACE_PROTOARGLIST_XQueryExtension__ ( Display * display, const char * name, int * major_opcode_return, int * first_event_return, int * first_error_return)
#define __TRACE_ARGLIST_XQueryExtension__ ( display, name, major_opcode_return, first_event_return, first_error_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryExtension__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryExtension__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryExtension__
#define __TRACE_PRINTF_BODY_XQueryExtension__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryExtension, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryExtension, char_p, name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryExtension, int_p, major_opcode_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryExtension, int_p, first_event_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryExtension, int_p, first_error_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryExtension__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryExtension, Display_p, display)
__TRACE__(XQueryExtension)


/*
int XQueryKeymap  // 2 args
    "Display *" "display"
    "char [32]" "keys_return"
*/
#define __TRACE_RETSTYLE_XQueryKeymap__ TYPED
#define __TRACE_ARGSTYLE_XQueryKeymap__ FIXED
#define __TRACE_SAFERETTYPE_XQueryKeymap__ int
#define __TRACE_PROTOARGLIST_XQueryKeymap__ ( Display * display, char keys_return[32])
#define __TRACE_ARGLIST_XQueryKeymap__ ( display, keys_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryKeymap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryKeymap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryKeymap__
#define __TRACE_PRINTF_BODY_XQueryKeymap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryKeymap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryKeymap, char__32_, keys_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryKeymap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryKeymap, Display_p, display)
__TRACE__(XQueryKeymap)


/*
Bool XQueryPointer  // 9 args
    "Display *" "display"
    "Window" "w"
    "Window *" "root_return"
    "Window *" "child_return"
    "int *" "root_x_return"
    "int *" "root_y_return"
    "int *" "win_x_return"
    "int *" "win_y_return"
    "unsigned int *" "mask_return"
*/
#define __TRACE_RETSTYLE_XQueryPointer__ TYPED
#define __TRACE_ARGSTYLE_XQueryPointer__ FIXED
#define __TRACE_SAFERETTYPE_XQueryPointer__ Bool
#define __TRACE_PROTOARGLIST_XQueryPointer__ ( Display * display, Window w, Window * root_return, Window * child_return, int * root_x_return, int * root_y_return, int * win_x_return, int * win_y_return, unsigned int * mask_return)
#define __TRACE_ARGLIST_XQueryPointer__ ( display, w, root_return, child_return, root_x_return, root_y_return, win_x_return, win_y_return, mask_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryPointer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryPointer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryPointer__
#define __TRACE_PRINTF_BODY_XQueryPointer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryPointer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, Window_p, root_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, Window_p, child_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, int_p, root_x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, int_p, root_y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, int_p, win_x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, int_p, win_y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryPointer, unsigned_int_p, mask_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryPointer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryPointer, Display_p, display)
__TRACE__(XQueryPointer)


/*
int XQueryTextExtents  // 8 args
    "Display *" "display"
    "XID" "font_ID"
    "const char *" "string"
    "int" "nchars"
    "int *" "direction_return"
    "int *" "font_ascent_return"
    "int *" "font_descent_return"
    "XCharStruct *" "overall_return"
*/
#define __TRACE_RETSTYLE_XQueryTextExtents__ TYPED
#define __TRACE_ARGSTYLE_XQueryTextExtents__ FIXED
#define __TRACE_SAFERETTYPE_XQueryTextExtents__ int
#define __TRACE_PROTOARGLIST_XQueryTextExtents__ ( Display * display, XID font_ID, const char * string, int nchars, int * direction_return, int * font_ascent_return, int * font_descent_return, XCharStruct * overall_return)
#define __TRACE_ARGLIST_XQueryTextExtents__ ( display, font_ID, string, nchars, direction_return, font_ascent_return, font_descent_return, overall_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryTextExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryTextExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryTextExtents__
#define __TRACE_PRINTF_BODY_XQueryTextExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, XID, font_ID) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, int, nchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, int_p, direction_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, int_p, font_ascent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, int_p, font_descent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents, XCharStruct_p, overall_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryTextExtents__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryTextExtents, Display_p, display)
__TRACE__(XQueryTextExtents)


/*
int XQueryTextExtents16  // 8 args
    "Display *" "display"
    "XID" "font_ID"
    "const XChar2b *" "string"
    "int" "nchars"
    "int *" "direction_return"
    "int *" "font_ascent_return"
    "int *" "font_descent_return"
    "XCharStruct *" "overall_return"
*/
#define __TRACE_RETSTYLE_XQueryTextExtents16__ TYPED
#define __TRACE_ARGSTYLE_XQueryTextExtents16__ FIXED
#define __TRACE_SAFERETTYPE_XQueryTextExtents16__ int
#define __TRACE_PROTOARGLIST_XQueryTextExtents16__ ( Display * display, XID font_ID, const XChar2b * string, int nchars, int * direction_return, int * font_ascent_return, int * font_descent_return, XCharStruct * overall_return)
#define __TRACE_ARGLIST_XQueryTextExtents16__ ( display, font_ID, string, nchars, direction_return, font_ascent_return, font_descent_return, overall_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryTextExtents16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryTextExtents16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryTextExtents16__
#define __TRACE_PRINTF_BODY_XQueryTextExtents16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, XID, font_ID) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, XChar2b_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, int, nchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, int_p, direction_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, int_p, font_ascent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, int_p, font_descent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTextExtents16, XCharStruct_p, overall_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryTextExtents16__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryTextExtents16, Display_p, display)
__TRACE__(XQueryTextExtents16)


/*
Status XQueryTree  // 6 args
    "Display *" "display"
    "Window" "w"
    "Window *" "root_return"
    "Window *" "parent_return"
    "Window **" "children_return"
    "unsigned int *" "nchildren_return"
*/
#define __TRACE_RETSTYLE_XQueryTree__ TYPED
#define __TRACE_ARGSTYLE_XQueryTree__ FIXED
#define __TRACE_SAFERETTYPE_XQueryTree__ Status
#define __TRACE_PROTOARGLIST_XQueryTree__ ( Display * display, Window w, Window * root_return, Window * parent_return, Window ** children_return, unsigned int * nchildren_return)
#define __TRACE_ARGLIST_XQueryTree__ ( display, w, root_return, parent_return, children_return, nchildren_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XQueryTree__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XQueryTree__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XQueryTree__
#define __TRACE_PRINTF_BODY_XQueryTree__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XQueryTree, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTree, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTree, Window_p, root_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTree, Window_p, parent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTree, void_p, children_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XQueryTree, unsigned_int_p, nchildren_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XQueryTree__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XQueryTree, Display_p, display)
__TRACE__(XQueryTree)


/*
int XRaiseWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XRaiseWindow__ TYPED
#define __TRACE_ARGSTYLE_XRaiseWindow__ FIXED
#define __TRACE_SAFERETTYPE_XRaiseWindow__ int
#define __TRACE_PROTOARGLIST_XRaiseWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XRaiseWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRaiseWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRaiseWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRaiseWindow__
#define __TRACE_PRINTF_BODY_XRaiseWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRaiseWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRaiseWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRaiseWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRaiseWindow, Display_p, display)
__TRACE__(XRaiseWindow)


/*
int XReadBitmapFile  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "const char *" "filename"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
    "Pixmap *" "bitmap_return"
    "int *" "x_hot_return"
    "int *" "y_hot_return"
*/
#define __TRACE_RETSTYLE_XReadBitmapFile__ TYPED
#define __TRACE_ARGSTYLE_XReadBitmapFile__ FIXED
#define __TRACE_SAFERETTYPE_XReadBitmapFile__ int
#define __TRACE_PROTOARGLIST_XReadBitmapFile__ ( Display * display, Drawable d, const char * filename, unsigned int * width_return, unsigned int * height_return, Pixmap * bitmap_return, int * x_hot_return, int * y_hot_return)
#define __TRACE_ARGLIST_XReadBitmapFile__ ( display, d, filename, width_return, height_return, bitmap_return, x_hot_return, y_hot_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XReadBitmapFile__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XReadBitmapFile__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XReadBitmapFile__
#define __TRACE_PRINTF_BODY_XReadBitmapFile__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, char_p, filename) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, unsigned_int_p, height_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, Pixmap_p, bitmap_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, int_p, x_hot_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFile, int_p, y_hot_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XReadBitmapFile__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XReadBitmapFile, Display_p, display)
__TRACE__(XReadBitmapFile)


/*
int XReadBitmapFileData  // 6 args
    "const char *" "filename"
    "unsigned int *" "width_return"
    "unsigned int *" "height_return"
    "unsigned char **" "data_return"
    "int *" "x_hot_return"
    "int *" "y_hot_return"
*/
#define __TRACE_RETSTYLE_XReadBitmapFileData__ TYPED
#define __TRACE_ARGSTYLE_XReadBitmapFileData__ FIXED
#define __TRACE_SAFERETTYPE_XReadBitmapFileData__ int
#define __TRACE_PROTOARGLIST_XReadBitmapFileData__ ( const char * filename, unsigned int * width_return, unsigned int * height_return, unsigned char ** data_return, int * x_hot_return, int * y_hot_return)
#define __TRACE_ARGLIST_XReadBitmapFileData__ ( filename, width_return, height_return, data_return, x_hot_return, y_hot_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XReadBitmapFileData__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XReadBitmapFileData__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XReadBitmapFileData__
#define __TRACE_PRINTF_BODY_XReadBitmapFileData__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, char_p, filename) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, unsigned_int_p, width_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, unsigned_int_p, height_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, unsigned_char_pp, data_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, int_p, x_hot_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReadBitmapFileData, int_p, y_hot_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XReadBitmapFileData__ 
__TRACE__(XReadBitmapFileData)


/*
int XRebindKeysym  // 6 args
    "Display *" "display"
    "KeySym" "keysym"
    "KeySym *" "list"
    "int" "mod_count"
    "const unsigned char *" "string"
    "int" "bytes_string"
*/
#define __TRACE_RETSTYLE_XRebindKeysym__ TYPED
#define __TRACE_ARGSTYLE_XRebindKeysym__ FIXED
#define __TRACE_SAFERETTYPE_XRebindKeysym__ int
#define __TRACE_PROTOARGLIST_XRebindKeysym__ ( Display * display, KeySym keysym, KeySym * list, int mod_count, const unsigned char * string, int bytes_string)
#define __TRACE_ARGLIST_XRebindKeysym__ ( display, keysym, list, mod_count, string, bytes_string)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRebindKeysym__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRebindKeysym__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRebindKeysym__
#define __TRACE_PRINTF_BODY_XRebindKeysym__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRebindKeysym, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRebindKeysym, KeySym, keysym) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRebindKeysym, KeySym_p, list) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRebindKeysym, int, mod_count) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRebindKeysym, unsigned_char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRebindKeysym, int, bytes_string)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRebindKeysym__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRebindKeysym, Display_p, display)
__TRACE__(XRebindKeysym)


/*
int XRecolorCursor  // 4 args
    "Display *" "display"
    "Cursor" "cursor"
    "XColor *" "foreground_color"
    "XColor *" "background_color"
*/
#define __TRACE_RETSTYLE_XRecolorCursor__ TYPED
#define __TRACE_ARGSTYLE_XRecolorCursor__ FIXED
#define __TRACE_SAFERETTYPE_XRecolorCursor__ int
#define __TRACE_PROTOARGLIST_XRecolorCursor__ ( Display * display, Cursor cursor, XColor * foreground_color, XColor * background_color)
#define __TRACE_ARGLIST_XRecolorCursor__ ( display, cursor, foreground_color, background_color)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRecolorCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRecolorCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRecolorCursor__
#define __TRACE_PRINTF_BODY_XRecolorCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRecolorCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRecolorCursor, Cursor, cursor) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRecolorCursor, XColor_p, foreground_color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRecolorCursor, XColor_p, background_color)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRecolorCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRecolorCursor, Display_p, display)
__TRACE__(XRecolorCursor)


/*
int XRefreshKeyboardMapping  // 1 args
    "XMappingEvent *" "event_map"
*/
#define __TRACE_RETSTYLE_XRefreshKeyboardMapping__ TYPED
#define __TRACE_ARGSTYLE_XRefreshKeyboardMapping__ FIXED
#define __TRACE_SAFERETTYPE_XRefreshKeyboardMapping__ int
#define __TRACE_PROTOARGLIST_XRefreshKeyboardMapping__ ( XMappingEvent * event_map)
#define __TRACE_ARGLIST_XRefreshKeyboardMapping__ ( event_map)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRefreshKeyboardMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRefreshKeyboardMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRefreshKeyboardMapping__
#define __TRACE_PRINTF_BODY_XRefreshKeyboardMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRefreshKeyboardMapping, XMappingEvent_p, event_map)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRefreshKeyboardMapping__ 
__TRACE__(XRefreshKeyboardMapping)


/*
int XRemoveFromSaveSet  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XRemoveFromSaveSet__ TYPED
#define __TRACE_ARGSTYLE_XRemoveFromSaveSet__ FIXED
#define __TRACE_SAFERETTYPE_XRemoveFromSaveSet__ int
#define __TRACE_PROTOARGLIST_XRemoveFromSaveSet__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XRemoveFromSaveSet__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRemoveFromSaveSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRemoveFromSaveSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRemoveFromSaveSet__
#define __TRACE_PRINTF_BODY_XRemoveFromSaveSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRemoveFromSaveSet, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveFromSaveSet, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRemoveFromSaveSet__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRemoveFromSaveSet, Display_p, display)
__TRACE__(XRemoveFromSaveSet)


/*
int XRemoveHost  // 2 args
    "Display *" "display"
    "XHostAddress *" "host"
*/
#define __TRACE_RETSTYLE_XRemoveHost__ TYPED
#define __TRACE_ARGSTYLE_XRemoveHost__ FIXED
#define __TRACE_SAFERETTYPE_XRemoveHost__ int
#define __TRACE_PROTOARGLIST_XRemoveHost__ ( Display * display, XHostAddress * host)
#define __TRACE_ARGLIST_XRemoveHost__ ( display, host)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRemoveHost__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRemoveHost__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRemoveHost__
#define __TRACE_PRINTF_BODY_XRemoveHost__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRemoveHost, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveHost, XHostAddress_p, host)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRemoveHost__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRemoveHost, Display_p, display)
__TRACE__(XRemoveHost)


/*
int XRemoveHosts  // 3 args
    "Display *" "display"
    "XHostAddress *" "hosts"
    "int" "num_hosts"
*/
#define __TRACE_RETSTYLE_XRemoveHosts__ TYPED
#define __TRACE_ARGSTYLE_XRemoveHosts__ FIXED
#define __TRACE_SAFERETTYPE_XRemoveHosts__ int
#define __TRACE_PROTOARGLIST_XRemoveHosts__ ( Display * display, XHostAddress * hosts, int num_hosts)
#define __TRACE_ARGLIST_XRemoveHosts__ ( display, hosts, num_hosts)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRemoveHosts__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRemoveHosts__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRemoveHosts__
#define __TRACE_PRINTF_BODY_XRemoveHosts__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRemoveHosts, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveHosts, XHostAddress_p, hosts) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveHosts, int, num_hosts)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRemoveHosts__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRemoveHosts, Display_p, display)
__TRACE__(XRemoveHosts)


/*
int XReparentWindow  // 5 args
    "Display *" "display"
    "Window" "w"
    "Window" "parent"
    "int" "x"
    "int" "y"
*/
#define __TRACE_RETSTYLE_XReparentWindow__ TYPED
#define __TRACE_ARGSTYLE_XReparentWindow__ FIXED
#define __TRACE_SAFERETTYPE_XReparentWindow__ int
#define __TRACE_PROTOARGLIST_XReparentWindow__ ( Display * display, Window w, Window parent, int x, int y)
#define __TRACE_ARGLIST_XReparentWindow__ ( display, w, parent, x, y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XReparentWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XReparentWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XReparentWindow__
#define __TRACE_PRINTF_BODY_XReparentWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XReparentWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReparentWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReparentWindow, Window, parent) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReparentWindow, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XReparentWindow, int, y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XReparentWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XReparentWindow, Display_p, display)
__TRACE__(XReparentWindow)


/*
int XResetScreenSaver  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XResetScreenSaver__ TYPED
#define __TRACE_ARGSTYLE_XResetScreenSaver__ FIXED
#define __TRACE_SAFERETTYPE_XResetScreenSaver__ int
#define __TRACE_PROTOARGLIST_XResetScreenSaver__ ( Display * display)
#define __TRACE_ARGLIST_XResetScreenSaver__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XResetScreenSaver__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XResetScreenSaver__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XResetScreenSaver__
#define __TRACE_PRINTF_BODY_XResetScreenSaver__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XResetScreenSaver, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XResetScreenSaver__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XResetScreenSaver, Display_p, display)
__TRACE__(XResetScreenSaver)


/*
int XResizeWindow  // 4 args
    "Display *" "display"
    "Window" "w"
    "unsigned int" "width"
    "unsigned int" "height"
*/
#define __TRACE_RETSTYLE_XResizeWindow__ TYPED
#define __TRACE_ARGSTYLE_XResizeWindow__ FIXED
#define __TRACE_SAFERETTYPE_XResizeWindow__ int
#define __TRACE_PROTOARGLIST_XResizeWindow__ ( Display * display, Window w, unsigned int width, unsigned int height)
#define __TRACE_ARGLIST_XResizeWindow__ ( display, w, width, height)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XResizeWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XResizeWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XResizeWindow__
#define __TRACE_PRINTF_BODY_XResizeWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XResizeWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XResizeWindow, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XResizeWindow, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XResizeWindow, unsigned_int, height)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XResizeWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XResizeWindow, Display_p, display)
__TRACE__(XResizeWindow)


/*
int XRestackWindows  // 3 args
    "Display *" "display"
    "Window *" "windows"
    "int" "nwindows"
*/
#define __TRACE_RETSTYLE_XRestackWindows__ TYPED
#define __TRACE_ARGSTYLE_XRestackWindows__ FIXED
#define __TRACE_SAFERETTYPE_XRestackWindows__ int
#define __TRACE_PROTOARGLIST_XRestackWindows__ ( Display * display, Window * windows, int nwindows)
#define __TRACE_ARGLIST_XRestackWindows__ ( display, windows, nwindows)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRestackWindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRestackWindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRestackWindows__
#define __TRACE_PRINTF_BODY_XRestackWindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRestackWindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRestackWindows, Window_p, windows) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRestackWindows, int, nwindows)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRestackWindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRestackWindows, Display_p, display)
__TRACE__(XRestackWindows)


/*
int XRotateBuffers  // 2 args
    "Display *" "display"
    "int" "rotate"
*/
#define __TRACE_RETSTYLE_XRotateBuffers__ TYPED
#define __TRACE_ARGSTYLE_XRotateBuffers__ FIXED
#define __TRACE_SAFERETTYPE_XRotateBuffers__ int
#define __TRACE_PROTOARGLIST_XRotateBuffers__ ( Display * display, int rotate)
#define __TRACE_ARGLIST_XRotateBuffers__ ( display, rotate)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRotateBuffers__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRotateBuffers__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRotateBuffers__
#define __TRACE_PRINTF_BODY_XRotateBuffers__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRotateBuffers, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRotateBuffers, int, rotate)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRotateBuffers__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRotateBuffers, Display_p, display)
__TRACE__(XRotateBuffers)


/*
int XRotateWindowProperties  // 5 args
    "Display *" "display"
    "Window" "w"
    "Atom *" "properties"
    "int" "num_prop"
    "int" "npositions"
*/
#define __TRACE_RETSTYLE_XRotateWindowProperties__ TYPED
#define __TRACE_ARGSTYLE_XRotateWindowProperties__ FIXED
#define __TRACE_SAFERETTYPE_XRotateWindowProperties__ int
#define __TRACE_PROTOARGLIST_XRotateWindowProperties__ ( Display * display, Window w, Atom * properties, int num_prop, int npositions)
#define __TRACE_ARGLIST_XRotateWindowProperties__ ( display, w, properties, num_prop, npositions)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRotateWindowProperties__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRotateWindowProperties__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRotateWindowProperties__
#define __TRACE_PRINTF_BODY_XRotateWindowProperties__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRotateWindowProperties, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRotateWindowProperties, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRotateWindowProperties, Atom_p, properties) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRotateWindowProperties, int, num_prop) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRotateWindowProperties, int, npositions)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRotateWindowProperties__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRotateWindowProperties, Display_p, display)
__TRACE__(XRotateWindowProperties)


/*
int XScreenCount  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XScreenCount__ TYPED
#define __TRACE_ARGSTYLE_XScreenCount__ FIXED
#define __TRACE_SAFERETTYPE_XScreenCount__ int
#define __TRACE_PROTOARGLIST_XScreenCount__ ( Display * display)
#define __TRACE_ARGLIST_XScreenCount__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XScreenCount__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XScreenCount__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XScreenCount__
#define __TRACE_PRINTF_BODY_XScreenCount__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XScreenCount, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XScreenCount__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XScreenCount, Display_p, display)
__TRACE__(XScreenCount)


/*
int XSelectInput  // 3 args
    "Display *" "display"
    "Window" "w"
    "long" "event_mask"
*/
#define __TRACE_RETSTYLE_XSelectInput__ TYPED
#define __TRACE_ARGSTYLE_XSelectInput__ FIXED
#define __TRACE_SAFERETTYPE_XSelectInput__ int
#define __TRACE_PROTOARGLIST_XSelectInput__ ( Display * display, Window w, long event_mask)
#define __TRACE_ARGLIST_XSelectInput__ ( display, w, event_mask)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSelectInput__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSelectInput__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSelectInput__
#define __TRACE_PRINTF_BODY_XSelectInput__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSelectInput, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSelectInput, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSelectInput, long_EventMask, event_mask)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSelectInput__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSelectInput, Display_p, display)
__TRACE__(XSelectInput)


/*
Status XSendEvent  // 5 args
    "Display *" "display"
    "Window" "w"
    "Bool" "propagate"
    "long" "event_mask"
    "XEvent *" "event_send"
*/
#define __TRACE_RETSTYLE_XSendEvent__ TYPED
#define __TRACE_ARGSTYLE_XSendEvent__ FIXED
#define __TRACE_SAFERETTYPE_XSendEvent__ Status
#define __TRACE_PROTOARGLIST_XSendEvent__ ( Display * display, Window w, Bool propagate, long event_mask, XEvent * event_send)
#define __TRACE_ARGLIST_XSendEvent__ ( display, w, propagate, event_mask, event_send)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSendEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSendEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSendEvent__
#define __TRACE_PRINTF_BODY_XSendEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSendEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSendEvent, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSendEvent, Bool, propagate) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSendEvent, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSendEvent, XEvent_p, event_send)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSendEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSendEvent, Display_p, display)
__TRACE__(XSendEvent)


/*
int XSetAccessControl  // 2 args
    "Display *" "display"
    "int" "mode"
*/
#define __TRACE_RETSTYLE_XSetAccessControl__ TYPED
#define __TRACE_ARGSTYLE_XSetAccessControl__ FIXED
#define __TRACE_SAFERETTYPE_XSetAccessControl__ int
#define __TRACE_PROTOARGLIST_XSetAccessControl__ ( Display * display, int mode)
#define __TRACE_ARGLIST_XSetAccessControl__ ( display, mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetAccessControl__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetAccessControl__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetAccessControl__
#define __TRACE_PRINTF_BODY_XSetAccessControl__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetAccessControl, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetAccessControl, int_HostAccess, mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetAccessControl__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetAccessControl, Display_p, display)
__TRACE__(XSetAccessControl)


/*
int XSetArcMode  // 3 args
    "Display *" "display"
    "GC" "gc"
    "int" "arc_mode"
*/
#define __TRACE_RETSTYLE_XSetArcMode__ TYPED
#define __TRACE_ARGSTYLE_XSetArcMode__ FIXED
#define __TRACE_SAFERETTYPE_XSetArcMode__ int
#define __TRACE_PROTOARGLIST_XSetArcMode__ ( Display * display, GC gc, int arc_mode)
#define __TRACE_ARGLIST_XSetArcMode__ ( display, gc, arc_mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetArcMode__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetArcMode__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetArcMode__
#define __TRACE_PRINTF_BODY_XSetArcMode__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetArcMode, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetArcMode, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetArcMode, int_ArcMode, arc_mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetArcMode__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetArcMode, Display_p, display)
__TRACE__(XSetArcMode)


/*
int XSetBackground  // 3 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "background"
*/
#define __TRACE_RETSTYLE_XSetBackground__ TYPED
#define __TRACE_ARGSTYLE_XSetBackground__ FIXED
#define __TRACE_SAFERETTYPE_XSetBackground__ int
#define __TRACE_PROTOARGLIST_XSetBackground__ ( Display * display, GC gc, unsigned long background)
#define __TRACE_ARGLIST_XSetBackground__ ( display, gc, background)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetBackground__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetBackground__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetBackground__
#define __TRACE_PRINTF_BODY_XSetBackground__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetBackground, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetBackground, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetBackground, unsigned_long, background)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetBackground__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetBackground, Display_p, display)
__TRACE__(XSetBackground)


/*
int XSetClipMask  // 3 args
    "Display *" "display"
    "GC" "gc"
    "Pixmap" "pixmap"
*/
#define __TRACE_RETSTYLE_XSetClipMask__ TYPED
#define __TRACE_ARGSTYLE_XSetClipMask__ FIXED
#define __TRACE_SAFERETTYPE_XSetClipMask__ int
#define __TRACE_PROTOARGLIST_XSetClipMask__ ( Display * display, GC gc, Pixmap pixmap)
#define __TRACE_ARGLIST_XSetClipMask__ ( display, gc, pixmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetClipMask__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetClipMask__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetClipMask__
#define __TRACE_PRINTF_BODY_XSetClipMask__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetClipMask, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipMask, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipMask, Pixmap, pixmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetClipMask__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetClipMask, Display_p, display)
__TRACE__(XSetClipMask)


/*
int XSetClipOrigin  // 4 args
    "Display *" "display"
    "GC" "gc"
    "int" "clip_x_origin"
    "int" "clip_y_origin"
*/
#define __TRACE_RETSTYLE_XSetClipOrigin__ TYPED
#define __TRACE_ARGSTYLE_XSetClipOrigin__ FIXED
#define __TRACE_SAFERETTYPE_XSetClipOrigin__ int
#define __TRACE_PROTOARGLIST_XSetClipOrigin__ ( Display * display, GC gc, int clip_x_origin, int clip_y_origin)
#define __TRACE_ARGLIST_XSetClipOrigin__ ( display, gc, clip_x_origin, clip_y_origin)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetClipOrigin__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetClipOrigin__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetClipOrigin__
#define __TRACE_PRINTF_BODY_XSetClipOrigin__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetClipOrigin, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipOrigin, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipOrigin, int, clip_x_origin) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipOrigin, int, clip_y_origin)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetClipOrigin__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetClipOrigin, Display_p, display)
__TRACE__(XSetClipOrigin)


/*
int XSetClipRectangles  // 7 args
    "Display *" "display"
    "GC" "gc"
    "int" "clip_x_origin"
    "int" "clip_y_origin"
    "XRectangle *" "rectangles"
    "int" "n"
    "int" "ordering"
*/
#define __TRACE_RETSTYLE_XSetClipRectangles__ TYPED
#define __TRACE_ARGSTYLE_XSetClipRectangles__ FIXED
#define __TRACE_SAFERETTYPE_XSetClipRectangles__ int
#define __TRACE_PROTOARGLIST_XSetClipRectangles__ ( Display * display, GC gc, int clip_x_origin, int clip_y_origin, XRectangle * rectangles, int n, int ordering)
#define __TRACE_ARGLIST_XSetClipRectangles__ ( display, gc, clip_x_origin, clip_y_origin, rectangles, n, ordering)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetClipRectangles__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetClipRectangles__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetClipRectangles__
#define __TRACE_PRINTF_BODY_XSetClipRectangles__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, int, clip_x_origin) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, int, clip_y_origin) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, XRectangle_p, rectangles) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, int, n) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetClipRectangles, int_SetClipRectanglesOrdering, ordering)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetClipRectangles__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetClipRectangles, Display_p, display)
__TRACE__(XSetClipRectangles)


/*
int XSetCloseDownMode  // 2 args
    "Display *" "display"
    "int" "close_mode"
*/
#define __TRACE_RETSTYLE_XSetCloseDownMode__ TYPED
#define __TRACE_ARGSTYLE_XSetCloseDownMode__ FIXED
#define __TRACE_SAFERETTYPE_XSetCloseDownMode__ int
#define __TRACE_PROTOARGLIST_XSetCloseDownMode__ ( Display * display, int close_mode)
#define __TRACE_ARGLIST_XSetCloseDownMode__ ( display, close_mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetCloseDownMode__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetCloseDownMode__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetCloseDownMode__
#define __TRACE_PRINTF_BODY_XSetCloseDownMode__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetCloseDownMode, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetCloseDownMode, int_ChangeCloseDownMode, close_mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetCloseDownMode__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetCloseDownMode, Display_p, display)
__TRACE__(XSetCloseDownMode)


/*
int XSetCommand  // 4 args
    "Display *" "display"
    "Window" "w"
    "char **" "argv"
    "int" "argc"
*/
#define __TRACE_RETSTYLE_XSetCommand__ TYPED
#define __TRACE_ARGSTYLE_XSetCommand__ FIXED
#define __TRACE_SAFERETTYPE_XSetCommand__ int
#define __TRACE_PROTOARGLIST_XSetCommand__ ( Display * display, Window w, char ** argv, int argc)
#define __TRACE_ARGLIST_XSetCommand__ ( display, w, argv, argc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetCommand__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetCommand__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetCommand__
#define __TRACE_PRINTF_BODY_XSetCommand__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetCommand, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetCommand, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetCommand, char_pp, argv) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetCommand, int, argc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetCommand__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetCommand, Display_p, display)
__TRACE__(XSetCommand)


/*
int XSetDashes  // 5 args
    "Display *" "display"
    "GC" "gc"
    "int" "dash_offset"
    "const char *" "dash_list"
    "int" "n"
*/
#define __TRACE_RETSTYLE_XSetDashes__ TYPED
#define __TRACE_ARGSTYLE_XSetDashes__ FIXED
#define __TRACE_SAFERETTYPE_XSetDashes__ int
#define __TRACE_PROTOARGLIST_XSetDashes__ ( Display * display, GC gc, int dash_offset, const char * dash_list, int n)
#define __TRACE_ARGLIST_XSetDashes__ ( display, gc, dash_offset, dash_list, n)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetDashes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetDashes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetDashes__
#define __TRACE_PRINTF_BODY_XSetDashes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetDashes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetDashes, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetDashes, int, dash_offset) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetDashes, char_p, dash_list) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetDashes, int, n)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetDashes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetDashes, Display_p, display)
__TRACE__(XSetDashes)


/*
int XSetFillRule  // 3 args
    "Display *" "display"
    "GC" "gc"
    "int" "fill_rule"
*/
#define __TRACE_RETSTYLE_XSetFillRule__ TYPED
#define __TRACE_ARGSTYLE_XSetFillRule__ FIXED
#define __TRACE_SAFERETTYPE_XSetFillRule__ int
#define __TRACE_PROTOARGLIST_XSetFillRule__ ( Display * display, GC gc, int fill_rule)
#define __TRACE_ARGLIST_XSetFillRule__ ( display, gc, fill_rule)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetFillRule__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetFillRule__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetFillRule__
#define __TRACE_PRINTF_BODY_XSetFillRule__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetFillRule, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFillRule, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFillRule, int_FillRule, fill_rule)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetFillRule__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetFillRule, Display_p, display)
__TRACE__(XSetFillRule)


/*
int XSetFillStyle  // 3 args
    "Display *" "display"
    "GC" "gc"
    "int" "fill_style"
*/
#define __TRACE_RETSTYLE_XSetFillStyle__ TYPED
#define __TRACE_ARGSTYLE_XSetFillStyle__ FIXED
#define __TRACE_SAFERETTYPE_XSetFillStyle__ int
#define __TRACE_PROTOARGLIST_XSetFillStyle__ ( Display * display, GC gc, int fill_style)
#define __TRACE_ARGLIST_XSetFillStyle__ ( display, gc, fill_style)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetFillStyle__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetFillStyle__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetFillStyle__
#define __TRACE_PRINTF_BODY_XSetFillStyle__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetFillStyle, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFillStyle, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFillStyle, int_FillStyle, fill_style)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetFillStyle__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetFillStyle, Display_p, display)
__TRACE__(XSetFillStyle)


/*
int XSetFont  // 3 args
    "Display *" "display"
    "GC" "gc"
    "Font" "font"
*/
#define __TRACE_RETSTYLE_XSetFont__ TYPED
#define __TRACE_ARGSTYLE_XSetFont__ FIXED
#define __TRACE_SAFERETTYPE_XSetFont__ int
#define __TRACE_PROTOARGLIST_XSetFont__ ( Display * display, GC gc, Font font)
#define __TRACE_ARGLIST_XSetFont__ ( display, gc, font)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetFont__
#define __TRACE_PRINTF_BODY_XSetFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFont, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFont, Font, font)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetFont, Display_p, display)
__TRACE__(XSetFont)


/*
int XSetFontPath  // 3 args
    "Display *" "display"
    "char **" "directories"
    "int" "ndirs"
*/
#define __TRACE_RETSTYLE_XSetFontPath__ TYPED
#define __TRACE_ARGSTYLE_XSetFontPath__ FIXED
#define __TRACE_SAFERETTYPE_XSetFontPath__ int
#define __TRACE_PROTOARGLIST_XSetFontPath__ ( Display * display, char ** directories, int ndirs)
#define __TRACE_ARGLIST_XSetFontPath__ ( display, directories, ndirs)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetFontPath__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetFontPath__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetFontPath__
#define __TRACE_PRINTF_BODY_XSetFontPath__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetFontPath, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFontPath, char_pp, directories) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFontPath, int, ndirs)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetFontPath__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetFontPath, Display_p, display)
__TRACE__(XSetFontPath)


/*
int XSetForeground  // 3 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "foreground"
*/
#define __TRACE_RETSTYLE_XSetForeground__ TYPED
#define __TRACE_ARGSTYLE_XSetForeground__ FIXED
#define __TRACE_SAFERETTYPE_XSetForeground__ int
#define __TRACE_PROTOARGLIST_XSetForeground__ ( Display * display, GC gc, unsigned long foreground)
#define __TRACE_ARGLIST_XSetForeground__ ( display, gc, foreground)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetForeground__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetForeground__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetForeground__
#define __TRACE_PRINTF_BODY_XSetForeground__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetForeground, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetForeground, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetForeground, unsigned_long, foreground)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetForeground__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetForeground, Display_p, display)
__TRACE__(XSetForeground)


/*
int XSetFunction  // 3 args
    "Display *" "display"
    "GC" "gc"
    "int" "function"
*/
#define __TRACE_RETSTYLE_XSetFunction__ TYPED
#define __TRACE_ARGSTYLE_XSetFunction__ FIXED
#define __TRACE_SAFERETTYPE_XSetFunction__ int
#define __TRACE_PROTOARGLIST_XSetFunction__ ( Display * display, GC gc, int function)
#define __TRACE_ARGLIST_XSetFunction__ ( display, gc, function)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetFunction__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetFunction__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetFunction__
#define __TRACE_PRINTF_BODY_XSetFunction__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetFunction, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFunction, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetFunction, int, function)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetFunction__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetFunction, Display_p, display)
__TRACE__(XSetFunction)


/*
int XSetGraphicsExposures  // 3 args
    "Display *" "display"
    "GC" "gc"
    "Bool" "graphics_exposures"
*/
#define __TRACE_RETSTYLE_XSetGraphicsExposures__ TYPED
#define __TRACE_ARGSTYLE_XSetGraphicsExposures__ FIXED
#define __TRACE_SAFERETTYPE_XSetGraphicsExposures__ int
#define __TRACE_PROTOARGLIST_XSetGraphicsExposures__ ( Display * display, GC gc, Bool graphics_exposures)
#define __TRACE_ARGLIST_XSetGraphicsExposures__ ( display, gc, graphics_exposures)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetGraphicsExposures__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetGraphicsExposures__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetGraphicsExposures__
#define __TRACE_PRINTF_BODY_XSetGraphicsExposures__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetGraphicsExposures, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetGraphicsExposures, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetGraphicsExposures, Bool, graphics_exposures)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetGraphicsExposures__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetGraphicsExposures, Display_p, display)
__TRACE__(XSetGraphicsExposures)


/*
int XSetIconName  // 3 args
    "Display *" "display"
    "Window" "w"
    "const char *" "icon_name"
*/
#define __TRACE_RETSTYLE_XSetIconName__ TYPED
#define __TRACE_ARGSTYLE_XSetIconName__ FIXED
#define __TRACE_SAFERETTYPE_XSetIconName__ int
#define __TRACE_PROTOARGLIST_XSetIconName__ ( Display * display, Window w, const char * icon_name)
#define __TRACE_ARGLIST_XSetIconName__ ( display, w, icon_name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetIconName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetIconName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetIconName__
#define __TRACE_PRINTF_BODY_XSetIconName__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetIconName, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetIconName, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetIconName, char_p, icon_name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetIconName__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetIconName, Display_p, display)
__TRACE__(XSetIconName)


/*
int XSetInputFocus  // 4 args
    "Display *" "display"
    "Window" "focus"
    "int" "revert_to"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XSetInputFocus__ TYPED
#define __TRACE_ARGSTYLE_XSetInputFocus__ FIXED
#define __TRACE_SAFERETTYPE_XSetInputFocus__ int
#define __TRACE_PROTOARGLIST_XSetInputFocus__ ( Display * display, Window focus, int revert_to, Time time)
#define __TRACE_ARGLIST_XSetInputFocus__ ( display, focus, revert_to, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetInputFocus__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetInputFocus__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetInputFocus__
#define __TRACE_PRINTF_BODY_XSetInputFocus__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetInputFocus, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetInputFocus, Window, focus) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetInputFocus, int_InputFocus, revert_to) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetInputFocus, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetInputFocus__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetInputFocus, Display_p, display)
__TRACE__(XSetInputFocus)


/*
int XSetLineAttributes  // 6 args
    "Display *" "display"
    "GC" "gc"
    "unsigned int" "line_width"
    "int" "line_style"
    "int" "cap_style"
    "int" "join_style"
*/
#define __TRACE_RETSTYLE_XSetLineAttributes__ TYPED
#define __TRACE_ARGSTYLE_XSetLineAttributes__ FIXED
#define __TRACE_SAFERETTYPE_XSetLineAttributes__ int
#define __TRACE_PROTOARGLIST_XSetLineAttributes__ ( Display * display, GC gc, unsigned int line_width, int line_style, int cap_style, int join_style)
#define __TRACE_ARGLIST_XSetLineAttributes__ ( display, gc, line_width, line_style, cap_style, join_style)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetLineAttributes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetLineAttributes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetLineAttributes__
#define __TRACE_PRINTF_BODY_XSetLineAttributes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, unsigned_int, line_width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, int_LineStyle, line_style) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, int_CapStyle, cap_style) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetLineAttributes, int_JoinStyle, join_style)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetLineAttributes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetLineAttributes, Display_p, display)
__TRACE__(XSetLineAttributes)


/*
int XSetModifierMapping  // 2 args
    "Display *" "display"
    "XModifierKeymap *" "modmap"
*/
#define __TRACE_RETSTYLE_XSetModifierMapping__ TYPED
#define __TRACE_ARGSTYLE_XSetModifierMapping__ FIXED
#define __TRACE_SAFERETTYPE_XSetModifierMapping__ int_MappingResult
#define __TRACE_PROTOARGLIST_XSetModifierMapping__ ( Display * display, XModifierKeymap * modmap)
#define __TRACE_ARGLIST_XSetModifierMapping__ ( display, modmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetModifierMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetModifierMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetModifierMapping__
#define __TRACE_PRINTF_BODY_XSetModifierMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetModifierMapping, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetModifierMapping, XModifierKeymap_p, modmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetModifierMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetModifierMapping, Display_p, display)
__TRACE__(XSetModifierMapping)


/*
int XSetPlaneMask  // 3 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "plane_mask"
*/
#define __TRACE_RETSTYLE_XSetPlaneMask__ TYPED
#define __TRACE_ARGSTYLE_XSetPlaneMask__ FIXED
#define __TRACE_SAFERETTYPE_XSetPlaneMask__ int
#define __TRACE_PROTOARGLIST_XSetPlaneMask__ ( Display * display, GC gc, unsigned long plane_mask)
#define __TRACE_ARGLIST_XSetPlaneMask__ ( display, gc, plane_mask)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetPlaneMask__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetPlaneMask__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetPlaneMask__
#define __TRACE_PRINTF_BODY_XSetPlaneMask__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetPlaneMask, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetPlaneMask, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetPlaneMask, unsigned_long, plane_mask)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetPlaneMask__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetPlaneMask, Display_p, display)
__TRACE__(XSetPlaneMask)


/*
int XSetPointerMapping  // 3 args
    "Display *" "display"
    "const unsigned char *" "map"
    "int" "nmap"
*/
#define __TRACE_RETSTYLE_XSetPointerMapping__ TYPED
#define __TRACE_ARGSTYLE_XSetPointerMapping__ FIXED
#define __TRACE_SAFERETTYPE_XSetPointerMapping__ int_MappingResult
#define __TRACE_PROTOARGLIST_XSetPointerMapping__ ( Display * display, const unsigned char * map, int nmap)
#define __TRACE_ARGLIST_XSetPointerMapping__ ( display, map, nmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetPointerMapping__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetPointerMapping__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetPointerMapping__
#define __TRACE_PRINTF_BODY_XSetPointerMapping__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetPointerMapping, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetPointerMapping, unsigned_char_p, map) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetPointerMapping, int, nmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetPointerMapping__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetPointerMapping, Display_p, display)
__TRACE__(XSetPointerMapping)


/*
int XSetScreenSaver  // 5 args
    "Display *" "display"
    "int" "timeout"
    "int" "interval"
    "int" "prefer_blanking"
    "int" "allow_exposures"
*/
#define __TRACE_RETSTYLE_XSetScreenSaver__ TYPED
#define __TRACE_ARGSTYLE_XSetScreenSaver__ FIXED
#define __TRACE_SAFERETTYPE_XSetScreenSaver__ int
#define __TRACE_PROTOARGLIST_XSetScreenSaver__ ( Display * display, int timeout, int interval, int prefer_blanking, int allow_exposures)
#define __TRACE_ARGLIST_XSetScreenSaver__ ( display, timeout, interval, prefer_blanking, allow_exposures)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetScreenSaver__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetScreenSaver__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetScreenSaver__
#define __TRACE_PRINTF_BODY_XSetScreenSaver__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetScreenSaver, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetScreenSaver, int, timeout) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetScreenSaver, int, interval) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetScreenSaver, int_ScreenSaverBlanking, prefer_blanking) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetScreenSaver, int_ScreenSaverExposures, allow_exposures)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetScreenSaver__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetScreenSaver, Display_p, display)
__TRACE__(XSetScreenSaver)


/*
int XSetSelectionOwner  // 4 args
    "Display *" "display"
    "Atom" "selection"
    "Window" "owner"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XSetSelectionOwner__ TYPED
#define __TRACE_ARGSTYLE_XSetSelectionOwner__ FIXED
#define __TRACE_SAFERETTYPE_XSetSelectionOwner__ int
#define __TRACE_PROTOARGLIST_XSetSelectionOwner__ ( Display * display, Atom selection, Window owner, Time time)
#define __TRACE_ARGLIST_XSetSelectionOwner__ ( display, selection, owner, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetSelectionOwner__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetSelectionOwner__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetSelectionOwner__
#define __TRACE_PRINTF_BODY_XSetSelectionOwner__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetSelectionOwner, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetSelectionOwner, Atom, selection) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetSelectionOwner, Window, owner) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetSelectionOwner, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetSelectionOwner__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetSelectionOwner, Display_p, display)
__TRACE__(XSetSelectionOwner)


/*
int XSetState  // 6 args
    "Display *" "display"
    "GC" "gc"
    "unsigned long" "foreground"
    "unsigned long" "background"
    "int" "function"
    "unsigned long" "plane_mask"
*/
#define __TRACE_RETSTYLE_XSetState__ TYPED
#define __TRACE_ARGSTYLE_XSetState__ FIXED
#define __TRACE_SAFERETTYPE_XSetState__ int
#define __TRACE_PROTOARGLIST_XSetState__ ( Display * display, GC gc, unsigned long foreground, unsigned long background, int function, unsigned long plane_mask)
#define __TRACE_ARGLIST_XSetState__ ( display, gc, foreground, background, function, plane_mask)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetState__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetState__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetState__
#define __TRACE_PRINTF_BODY_XSetState__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetState, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetState, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetState, unsigned_long, foreground) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetState, unsigned_long, background) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetState, int, function) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetState, unsigned_long, plane_mask)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetState__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetState, Display_p, display)
__TRACE__(XSetState)


/*
int XSetStipple  // 3 args
    "Display *" "display"
    "GC" "gc"
    "Pixmap" "stipple"
*/
#define __TRACE_RETSTYLE_XSetStipple__ TYPED
#define __TRACE_ARGSTYLE_XSetStipple__ FIXED
#define __TRACE_SAFERETTYPE_XSetStipple__ int
#define __TRACE_PROTOARGLIST_XSetStipple__ ( Display * display, GC gc, Pixmap stipple)
#define __TRACE_ARGLIST_XSetStipple__ ( display, gc, stipple)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetStipple__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetStipple__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetStipple__
#define __TRACE_PRINTF_BODY_XSetStipple__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetStipple, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetStipple, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetStipple, Pixmap, stipple)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetStipple__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetStipple, Display_p, display)
__TRACE__(XSetStipple)


/*
int XSetSubwindowMode  // 3 args
    "Display *" "display"
    "GC" "gc"
    "int" "subwindow_mode"
*/
#define __TRACE_RETSTYLE_XSetSubwindowMode__ TYPED
#define __TRACE_ARGSTYLE_XSetSubwindowMode__ FIXED
#define __TRACE_SAFERETTYPE_XSetSubwindowMode__ int
#define __TRACE_PROTOARGLIST_XSetSubwindowMode__ ( Display * display, GC gc, int subwindow_mode)
#define __TRACE_ARGLIST_XSetSubwindowMode__ ( display, gc, subwindow_mode)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetSubwindowMode__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetSubwindowMode__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetSubwindowMode__
#define __TRACE_PRINTF_BODY_XSetSubwindowMode__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetSubwindowMode, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetSubwindowMode, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetSubwindowMode, int_SubwindowMode, subwindow_mode)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetSubwindowMode__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetSubwindowMode, Display_p, display)
__TRACE__(XSetSubwindowMode)


/*
int XSetTSOrigin  // 4 args
    "Display *" "display"
    "GC" "gc"
    "int" "ts_x_origin"
    "int" "ts_y_origin"
*/
#define __TRACE_RETSTYLE_XSetTSOrigin__ TYPED
#define __TRACE_ARGSTYLE_XSetTSOrigin__ FIXED
#define __TRACE_SAFERETTYPE_XSetTSOrigin__ int
#define __TRACE_PROTOARGLIST_XSetTSOrigin__ ( Display * display, GC gc, int ts_x_origin, int ts_y_origin)
#define __TRACE_ARGLIST_XSetTSOrigin__ ( display, gc, ts_x_origin, ts_y_origin)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetTSOrigin__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetTSOrigin__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetTSOrigin__
#define __TRACE_PRINTF_BODY_XSetTSOrigin__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetTSOrigin, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTSOrigin, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTSOrigin, int, ts_x_origin) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTSOrigin, int, ts_y_origin)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetTSOrigin__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetTSOrigin, Display_p, display)
__TRACE__(XSetTSOrigin)


/*
int XSetTile  // 3 args
    "Display *" "display"
    "GC" "gc"
    "Pixmap" "tile"
*/
#define __TRACE_RETSTYLE_XSetTile__ TYPED
#define __TRACE_ARGSTYLE_XSetTile__ FIXED
#define __TRACE_SAFERETTYPE_XSetTile__ int
#define __TRACE_PROTOARGLIST_XSetTile__ ( Display * display, GC gc, Pixmap tile)
#define __TRACE_ARGLIST_XSetTile__ ( display, gc, tile)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetTile__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetTile__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetTile__
#define __TRACE_PRINTF_BODY_XSetTile__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetTile, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTile, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetTile, Pixmap, tile)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetTile__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetTile, Display_p, display)
__TRACE__(XSetTile)


/*
int XSetWindowBackground  // 3 args
    "Display *" "display"
    "Window" "w"
    "unsigned long" "background_pixel"
*/
#define __TRACE_RETSTYLE_XSetWindowBackground__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowBackground__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowBackground__ int
#define __TRACE_PROTOARGLIST_XSetWindowBackground__ ( Display * display, Window w, unsigned long background_pixel)
#define __TRACE_ARGLIST_XSetWindowBackground__ ( display, w, background_pixel)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowBackground__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowBackground__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowBackground__
#define __TRACE_PRINTF_BODY_XSetWindowBackground__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowBackground, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBackground, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBackground, unsigned_long, background_pixel)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowBackground__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowBackground, Display_p, display)
__TRACE__(XSetWindowBackground)


/*
int XSetWindowBackgroundPixmap  // 3 args
    "Display *" "display"
    "Window" "w"
    "Pixmap" "background_pixmap"
*/
#define __TRACE_RETSTYLE_XSetWindowBackgroundPixmap__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowBackgroundPixmap__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowBackgroundPixmap__ int
#define __TRACE_PROTOARGLIST_XSetWindowBackgroundPixmap__ ( Display * display, Window w, Pixmap background_pixmap)
#define __TRACE_ARGLIST_XSetWindowBackgroundPixmap__ ( display, w, background_pixmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowBackgroundPixmap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowBackgroundPixmap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowBackgroundPixmap__
#define __TRACE_PRINTF_BODY_XSetWindowBackgroundPixmap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowBackgroundPixmap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBackgroundPixmap, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBackgroundPixmap, Pixmap, background_pixmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowBackgroundPixmap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowBackgroundPixmap, Display_p, display)
__TRACE__(XSetWindowBackgroundPixmap)


/*
int XSetWindowBorder  // 3 args
    "Display *" "display"
    "Window" "w"
    "unsigned long" "border_pixel"
*/
#define __TRACE_RETSTYLE_XSetWindowBorder__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowBorder__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowBorder__ int
#define __TRACE_PROTOARGLIST_XSetWindowBorder__ ( Display * display, Window w, unsigned long border_pixel)
#define __TRACE_ARGLIST_XSetWindowBorder__ ( display, w, border_pixel)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowBorder__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowBorder__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowBorder__
#define __TRACE_PRINTF_BODY_XSetWindowBorder__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowBorder, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorder, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorder, unsigned_long, border_pixel)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowBorder__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowBorder, Display_p, display)
__TRACE__(XSetWindowBorder)


/*
int XSetWindowBorderPixmap  // 3 args
    "Display *" "display"
    "Window" "w"
    "Pixmap" "border_pixmap"
*/
#define __TRACE_RETSTYLE_XSetWindowBorderPixmap__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowBorderPixmap__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowBorderPixmap__ int
#define __TRACE_PROTOARGLIST_XSetWindowBorderPixmap__ ( Display * display, Window w, Pixmap border_pixmap)
#define __TRACE_ARGLIST_XSetWindowBorderPixmap__ ( display, w, border_pixmap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowBorderPixmap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowBorderPixmap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowBorderPixmap__
#define __TRACE_PRINTF_BODY_XSetWindowBorderPixmap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowBorderPixmap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorderPixmap, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorderPixmap, Pixmap, border_pixmap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowBorderPixmap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowBorderPixmap, Display_p, display)
__TRACE__(XSetWindowBorderPixmap)


/*
int XSetWindowBorderWidth  // 3 args
    "Display *" "display"
    "Window" "w"
    "unsigned int" "width"
*/
#define __TRACE_RETSTYLE_XSetWindowBorderWidth__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowBorderWidth__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowBorderWidth__ int
#define __TRACE_PROTOARGLIST_XSetWindowBorderWidth__ ( Display * display, Window w, unsigned int width)
#define __TRACE_ARGLIST_XSetWindowBorderWidth__ ( display, w, width)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowBorderWidth__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowBorderWidth__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowBorderWidth__
#define __TRACE_PRINTF_BODY_XSetWindowBorderWidth__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowBorderWidth, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorderWidth, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowBorderWidth, unsigned_int, width)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowBorderWidth__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowBorderWidth, Display_p, display)
__TRACE__(XSetWindowBorderWidth)


/*
int XSetWindowColormap  // 3 args
    "Display *" "display"
    "Window" "w"
    "Colormap" "colormap"
*/
#define __TRACE_RETSTYLE_XSetWindowColormap__ TYPED
#define __TRACE_ARGSTYLE_XSetWindowColormap__ FIXED
#define __TRACE_SAFERETTYPE_XSetWindowColormap__ int
#define __TRACE_PROTOARGLIST_XSetWindowColormap__ ( Display * display, Window w, Colormap colormap)
#define __TRACE_ARGLIST_XSetWindowColormap__ ( display, w, colormap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetWindowColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetWindowColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetWindowColormap__
#define __TRACE_PRINTF_BODY_XSetWindowColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetWindowColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowColormap, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetWindowColormap, Colormap, colormap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetWindowColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XSetWindowColormap, Display_p, display)
__TRACE__(XSetWindowColormap)


/*
int XStoreBuffer  // 4 args
    "Display *" "display"
    "const char *" "bytes"
    "int" "nbytes"
    "int" "buffer"
*/
#define __TRACE_RETSTYLE_XStoreBuffer__ TYPED
#define __TRACE_ARGSTYLE_XStoreBuffer__ FIXED
#define __TRACE_SAFERETTYPE_XStoreBuffer__ int
#define __TRACE_PROTOARGLIST_XStoreBuffer__ ( Display * display, const char * bytes, int nbytes, int buffer)
#define __TRACE_ARGLIST_XStoreBuffer__ ( display, bytes, nbytes, buffer)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreBuffer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreBuffer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreBuffer__
#define __TRACE_PRINTF_BODY_XStoreBuffer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreBuffer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreBuffer, char_p, bytes) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreBuffer, int, nbytes) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreBuffer, int, buffer)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreBuffer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreBuffer, Display_p, display)
__TRACE__(XStoreBuffer)


/*
int XStoreBytes  // 3 args
    "Display *" "display"
    "const char *" "bytes"
    "int" "nbytes"
*/
#define __TRACE_RETSTYLE_XStoreBytes__ TYPED
#define __TRACE_ARGSTYLE_XStoreBytes__ FIXED
#define __TRACE_SAFERETTYPE_XStoreBytes__ int
#define __TRACE_PROTOARGLIST_XStoreBytes__ ( Display * display, const char * bytes, int nbytes)
#define __TRACE_ARGLIST_XStoreBytes__ ( display, bytes, nbytes)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreBytes__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreBytes__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreBytes__
#define __TRACE_PRINTF_BODY_XStoreBytes__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreBytes, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreBytes, char_p, bytes) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreBytes, int, nbytes)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreBytes__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreBytes, Display_p, display)
__TRACE__(XStoreBytes)


/*
int XStoreColor  // 3 args
    "Display *" "display"
    "Colormap" "colormap"
    "XColor *" "color"
*/
#define __TRACE_RETSTYLE_XStoreColor__ TYPED
#define __TRACE_ARGSTYLE_XStoreColor__ FIXED
#define __TRACE_SAFERETTYPE_XStoreColor__ int
#define __TRACE_PROTOARGLIST_XStoreColor__ ( Display * display, Colormap colormap, XColor * color)
#define __TRACE_ARGLIST_XStoreColor__ ( display, colormap, color)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreColor__
#define __TRACE_PRINTF_BODY_XStoreColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreColor, XColor_p, color)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreColor, Display_p, display)
__TRACE__(XStoreColor)


/*
int XStoreColors  // 4 args
    "Display *" "display"
    "Colormap" "colormap"
    "XColor *" "color"
    "int" "ncolors"
*/
#define __TRACE_RETSTYLE_XStoreColors__ TYPED
#define __TRACE_ARGSTYLE_XStoreColors__ FIXED
#define __TRACE_SAFERETTYPE_XStoreColors__ int
#define __TRACE_PROTOARGLIST_XStoreColors__ ( Display * display, Colormap colormap, XColor * color, int ncolors)
#define __TRACE_ARGLIST_XStoreColors__ ( display, colormap, color, ncolors)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreColors__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreColors__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreColors__
#define __TRACE_PRINTF_BODY_XStoreColors__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreColors, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreColors, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreColors, XColor_p, color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreColors, int, ncolors)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreColors__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreColors, Display_p, display)
__TRACE__(XStoreColors)


/*
int XStoreName  // 3 args
    "Display *" "display"
    "Window" "w"
    "const char *" "window_name"
*/
#define __TRACE_RETSTYLE_XStoreName__ TYPED
#define __TRACE_ARGSTYLE_XStoreName__ FIXED
#define __TRACE_SAFERETTYPE_XStoreName__ int
#define __TRACE_PROTOARGLIST_XStoreName__ ( Display * display, Window w, const char * window_name)
#define __TRACE_ARGLIST_XStoreName__ ( display, w, window_name)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreName__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreName__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreName__
#define __TRACE_PRINTF_BODY_XStoreName__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreName, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreName, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreName, char_p, window_name)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreName__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreName, Display_p, display)
__TRACE__(XStoreName)


/*
int XStoreNamedColor  // 5 args
    "Display *" "display"
    "Colormap" "colormap"
    "const char *" "color"
    "unsigned long" "pixel"
    "int" "flags"
*/
#define __TRACE_RETSTYLE_XStoreNamedColor__ TYPED
#define __TRACE_ARGSTYLE_XStoreNamedColor__ FIXED
#define __TRACE_SAFERETTYPE_XStoreNamedColor__ int
#define __TRACE_PROTOARGLIST_XStoreNamedColor__ ( Display * display, Colormap colormap, const char * color, unsigned long pixel, int flags)
#define __TRACE_ARGLIST_XStoreNamedColor__ ( display, colormap, color, pixel, flags)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XStoreNamedColor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XStoreNamedColor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XStoreNamedColor__
#define __TRACE_PRINTF_BODY_XStoreNamedColor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XStoreNamedColor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreNamedColor, Colormap, colormap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreNamedColor, char_p, color) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreNamedColor, unsigned_long, pixel) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XStoreNamedColor, int_ColormapFlags, flags)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XStoreNamedColor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XStoreNamedColor, Display_p, display)
__TRACE__(XStoreNamedColor)


/*
int XSync  // 2 args
    "Display *" "display"
    "Bool" "discard"
*/
#define __TRACE_RETSTYLE_XSync__ TYPED
#define __TRACE_ARGSTYLE_XSync__ FIXED
#define __TRACE_SAFERETTYPE_XSync__ int
#define __TRACE_PROTOARGLIST_XSync__ ( Display * display, Bool discard)
#define __TRACE_ARGLIST_XSync__ ( display, discard)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSync__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSync__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSync__
#define __TRACE_PRINTF_BODY_XSync__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSync, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSync, Bool, discard)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSync__ 
__TRACE__(XSync)


/*
int XTextExtents  // 7 args
    "XFontStruct *" "font_struct"
    "const char *" "string"
    "int" "nchars"
    "int *" "direction_return"
    "int *" "font_ascent_return"
    "int *" "font_descent_return"
    "XCharStruct *" "overall_return"
*/
#define __TRACE_RETSTYLE_XTextExtents__ TYPED
#define __TRACE_ARGSTYLE_XTextExtents__ FIXED
#define __TRACE_SAFERETTYPE_XTextExtents__ int
#define __TRACE_PROTOARGLIST_XTextExtents__ ( XFontStruct * font_struct, const char * string, int nchars, int * direction_return, int * font_ascent_return, int * font_descent_return, XCharStruct * overall_return)
#define __TRACE_ARGLIST_XTextExtents__ ( font_struct, string, nchars, direction_return, font_ascent_return, font_descent_return, overall_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XTextExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XTextExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XTextExtents__
#define __TRACE_PRINTF_BODY_XTextExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XTextExtents, XFontStruct_p, font_struct) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, int, nchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, int_p, direction_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, int_p, font_ascent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, int_p, font_descent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents, XCharStruct_p, overall_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XTextExtents__ 
__TRACE__(XTextExtents)


/*
int XTextExtents16  // 7 args
    "XFontStruct *" "font_struct"
    "const XChar2b *" "string"
    "int" "nchars"
    "int *" "direction_return"
    "int *" "font_ascent_return"
    "int *" "font_descent_return"
    "XCharStruct *" "overall_return"
*/
#define __TRACE_RETSTYLE_XTextExtents16__ TYPED
#define __TRACE_ARGSTYLE_XTextExtents16__ FIXED
#define __TRACE_SAFERETTYPE_XTextExtents16__ int
#define __TRACE_PROTOARGLIST_XTextExtents16__ ( XFontStruct * font_struct, const XChar2b * string, int nchars, int * direction_return, int * font_ascent_return, int * font_descent_return, XCharStruct * overall_return)
#define __TRACE_ARGLIST_XTextExtents16__ ( font_struct, string, nchars, direction_return, font_ascent_return, font_descent_return, overall_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XTextExtents16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XTextExtents16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XTextExtents16__
#define __TRACE_PRINTF_BODY_XTextExtents16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XTextExtents16, XFontStruct_p, font_struct) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, XChar2b_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, int, nchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, int_p, direction_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, int_p, font_ascent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, int_p, font_descent_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextExtents16, XCharStruct_p, overall_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XTextExtents16__ 
__TRACE__(XTextExtents16)


/*
int XTextWidth  // 3 args
    "XFontStruct *" "font_struct"
    "const char *" "string"
    "int" "count"
*/
#define __TRACE_RETSTYLE_XTextWidth__ TYPED
#define __TRACE_ARGSTYLE_XTextWidth__ FIXED
#define __TRACE_SAFERETTYPE_XTextWidth__ int
#define __TRACE_PROTOARGLIST_XTextWidth__ ( XFontStruct * font_struct, const char * string, int count)
#define __TRACE_ARGLIST_XTextWidth__ ( font_struct, string, count)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XTextWidth__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XTextWidth__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XTextWidth__
#define __TRACE_PRINTF_BODY_XTextWidth__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XTextWidth, XFontStruct_p, font_struct) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextWidth, char_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextWidth, int, count)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XTextWidth__ 
__TRACE__(XTextWidth)


/*
int XTextWidth16  // 3 args
    "XFontStruct *" "font_struct"
    "const XChar2b *" "string"
    "int" "count"
*/
#define __TRACE_RETSTYLE_XTextWidth16__ TYPED
#define __TRACE_ARGSTYLE_XTextWidth16__ FIXED
#define __TRACE_SAFERETTYPE_XTextWidth16__ int
#define __TRACE_PROTOARGLIST_XTextWidth16__ ( XFontStruct * font_struct, const XChar2b * string, int count)
#define __TRACE_ARGLIST_XTextWidth16__ ( font_struct, string, count)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XTextWidth16__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XTextWidth16__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XTextWidth16__
#define __TRACE_PRINTF_BODY_XTextWidth16__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XTextWidth16, XFontStruct_p, font_struct) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextWidth16, XChar2b_p, string) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTextWidth16, int, count)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XTextWidth16__ 
__TRACE__(XTextWidth16)


/*
Bool XTranslateCoordinates  // 8 args
    "Display *" "display"
    "Window" "src_w"
    "Window" "dest_w"
    "int" "src_x"
    "int" "src_y"
    "int *" "dest_x_return"
    "int *" "dest_y_return"
    "Window *" "child_return"
*/
#define __TRACE_RETSTYLE_XTranslateCoordinates__ TYPED
#define __TRACE_ARGSTYLE_XTranslateCoordinates__ FIXED
#define __TRACE_SAFERETTYPE_XTranslateCoordinates__ Bool
#define __TRACE_PROTOARGLIST_XTranslateCoordinates__ ( Display * display, Window src_w, Window dest_w, int src_x, int src_y, int * dest_x_return, int * dest_y_return, Window * child_return)
#define __TRACE_ARGLIST_XTranslateCoordinates__ ( display, src_w, dest_w, src_x, src_y, dest_x_return, dest_y_return, child_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XTranslateCoordinates__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XTranslateCoordinates__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XTranslateCoordinates__
#define __TRACE_PRINTF_BODY_XTranslateCoordinates__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, Window, src_w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, Window, dest_w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, int, src_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, int, src_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, int_p, dest_x_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, int_p, dest_y_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XTranslateCoordinates, Window_p, child_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XTranslateCoordinates__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XTranslateCoordinates, Display_p, display)
__TRACE__(XTranslateCoordinates)


/*
int XUndefineCursor  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XUndefineCursor__ TYPED
#define __TRACE_ARGSTYLE_XUndefineCursor__ FIXED
#define __TRACE_SAFERETTYPE_XUndefineCursor__ int
#define __TRACE_PROTOARGLIST_XUndefineCursor__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XUndefineCursor__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUndefineCursor__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUndefineCursor__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUndefineCursor__
#define __TRACE_PRINTF_BODY_XUndefineCursor__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUndefineCursor, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUndefineCursor, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUndefineCursor__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUndefineCursor, Display_p, display)
__TRACE__(XUndefineCursor)


/*
int XUngrabButton  // 4 args
    "Display *" "display"
    "unsigned int" "button"
    "unsigned int" "modifiers"
    "Window" "grab_window"
*/
#define __TRACE_RETSTYLE_XUngrabButton__ TYPED
#define __TRACE_ARGSTYLE_XUngrabButton__ FIXED
#define __TRACE_SAFERETTYPE_XUngrabButton__ int
#define __TRACE_PROTOARGLIST_XUngrabButton__ ( Display * display, unsigned int button, unsigned int modifiers, Window grab_window)
#define __TRACE_ARGLIST_XUngrabButton__ ( display, button, modifiers, grab_window)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUngrabButton__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUngrabButton__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUngrabButton__
#define __TRACE_PRINTF_BODY_XUngrabButton__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUngrabButton, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabButton, unsigned_int, button) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabButton, int_KeyButtonMask, modifiers) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabButton, Window, grab_window)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUngrabButton__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUngrabButton, Display_p, display)
__TRACE__(XUngrabButton)


/*
int XUngrabKey  // 4 args
    "Display *" "display"
    "int" "keycode"
    "unsigned int" "modifiers"
    "Window" "grab_window"
*/
#define __TRACE_RETSTYLE_XUngrabKey__ TYPED
#define __TRACE_ARGSTYLE_XUngrabKey__ FIXED
#define __TRACE_SAFERETTYPE_XUngrabKey__ int
#define __TRACE_PROTOARGLIST_XUngrabKey__ ( Display * display, int keycode, unsigned int modifiers, Window grab_window)
#define __TRACE_ARGLIST_XUngrabKey__ ( display, keycode, modifiers, grab_window)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUngrabKey__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUngrabKey__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUngrabKey__
#define __TRACE_PRINTF_BODY_XUngrabKey__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUngrabKey, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabKey, int, keycode) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabKey, int_KeyButtonMask, modifiers) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabKey, Window, grab_window)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUngrabKey__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUngrabKey, Display_p, display)
__TRACE__(XUngrabKey)


/*
int XUngrabKeyboard  // 2 args
    "Display *" "display"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XUngrabKeyboard__ TYPED
#define __TRACE_ARGSTYLE_XUngrabKeyboard__ FIXED
#define __TRACE_SAFERETTYPE_XUngrabKeyboard__ int
#define __TRACE_PROTOARGLIST_XUngrabKeyboard__ ( Display * display, Time time)
#define __TRACE_ARGLIST_XUngrabKeyboard__ ( display, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUngrabKeyboard__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUngrabKeyboard__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUngrabKeyboard__
#define __TRACE_PRINTF_BODY_XUngrabKeyboard__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUngrabKeyboard, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabKeyboard, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUngrabKeyboard__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUngrabKeyboard, Display_p, display)
__TRACE__(XUngrabKeyboard)


/*
int XUngrabPointer  // 2 args
    "Display *" "display"
    "Time" "time"
*/
#define __TRACE_RETSTYLE_XUngrabPointer__ TYPED
#define __TRACE_ARGSTYLE_XUngrabPointer__ FIXED
#define __TRACE_SAFERETTYPE_XUngrabPointer__ int
#define __TRACE_PROTOARGLIST_XUngrabPointer__ ( Display * display, Time time)
#define __TRACE_ARGLIST_XUngrabPointer__ ( display, time)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUngrabPointer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUngrabPointer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUngrabPointer__
#define __TRACE_PRINTF_BODY_XUngrabPointer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUngrabPointer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUngrabPointer, Time, time)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUngrabPointer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUngrabPointer, Display_p, display)
__TRACE__(XUngrabPointer)


/*
int XUngrabServer  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XUngrabServer__ TYPED
#define __TRACE_ARGSTYLE_XUngrabServer__ FIXED
#define __TRACE_SAFERETTYPE_XUngrabServer__ int
#define __TRACE_PROTOARGLIST_XUngrabServer__ ( Display * display)
#define __TRACE_ARGLIST_XUngrabServer__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUngrabServer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUngrabServer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUngrabServer__
#define __TRACE_PRINTF_BODY_XUngrabServer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUngrabServer, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUngrabServer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUngrabServer, Display_p, display)
__TRACE__(XUngrabServer)


/*
int XUninstallColormap  // 2 args
    "Display *" "display"
    "Colormap" "colormap"
*/
#define __TRACE_RETSTYLE_XUninstallColormap__ TYPED
#define __TRACE_ARGSTYLE_XUninstallColormap__ FIXED
#define __TRACE_SAFERETTYPE_XUninstallColormap__ int
#define __TRACE_PROTOARGLIST_XUninstallColormap__ ( Display * display, Colormap colormap)
#define __TRACE_ARGLIST_XUninstallColormap__ ( display, colormap)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUninstallColormap__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUninstallColormap__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUninstallColormap__
#define __TRACE_PRINTF_BODY_XUninstallColormap__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUninstallColormap, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUninstallColormap, Colormap, colormap)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUninstallColormap__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUninstallColormap, Display_p, display)
__TRACE__(XUninstallColormap)


/*
int XUnloadFont  // 2 args
    "Display *" "display"
    "Font" "font"
*/
#define __TRACE_RETSTYLE_XUnloadFont__ TYPED
#define __TRACE_ARGSTYLE_XUnloadFont__ FIXED
#define __TRACE_SAFERETTYPE_XUnloadFont__ int
#define __TRACE_PROTOARGLIST_XUnloadFont__ ( Display * display, Font font)
#define __TRACE_ARGLIST_XUnloadFont__ ( display, font)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnloadFont__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnloadFont__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnloadFont__
#define __TRACE_PRINTF_BODY_XUnloadFont__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUnloadFont, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnloadFont, Font, font)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnloadFont__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUnloadFont, Display_p, display)
__TRACE__(XUnloadFont)


/*
int XUnmapSubwindows  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XUnmapSubwindows__ TYPED
#define __TRACE_ARGSTYLE_XUnmapSubwindows__ FIXED
#define __TRACE_SAFERETTYPE_XUnmapSubwindows__ int
#define __TRACE_PROTOARGLIST_XUnmapSubwindows__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XUnmapSubwindows__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnmapSubwindows__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnmapSubwindows__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnmapSubwindows__
#define __TRACE_PRINTF_BODY_XUnmapSubwindows__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUnmapSubwindows, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnmapSubwindows, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnmapSubwindows__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUnmapSubwindows, Display_p, display)
__TRACE__(XUnmapSubwindows)


/*
int XUnmapWindow  // 2 args
    "Display *" "display"
    "Window" "w"
*/
#define __TRACE_RETSTYLE_XUnmapWindow__ TYPED
#define __TRACE_ARGSTYLE_XUnmapWindow__ FIXED
#define __TRACE_SAFERETTYPE_XUnmapWindow__ int
#define __TRACE_PROTOARGLIST_XUnmapWindow__ ( Display * display, Window w)
#define __TRACE_ARGLIST_XUnmapWindow__ ( display, w)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnmapWindow__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnmapWindow__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnmapWindow__
#define __TRACE_PRINTF_BODY_XUnmapWindow__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUnmapWindow, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnmapWindow, Window, w)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnmapWindow__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUnmapWindow, Display_p, display)
__TRACE__(XUnmapWindow)


/*
int XVendorRelease  // 1 args
    "Display *" "display"
*/
#define __TRACE_RETSTYLE_XVendorRelease__ TYPED
#define __TRACE_ARGSTYLE_XVendorRelease__ FIXED
#define __TRACE_SAFERETTYPE_XVendorRelease__ int
#define __TRACE_PROTOARGLIST_XVendorRelease__ ( Display * display)
#define __TRACE_ARGLIST_XVendorRelease__ ( display)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XVendorRelease__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XVendorRelease__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XVendorRelease__
#define __TRACE_PRINTF_BODY_XVendorRelease__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XVendorRelease, Display_p, display)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XVendorRelease__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XVendorRelease, Display_p, display)
__TRACE__(XVendorRelease)


/*
int XWarpPointer  // 9 args
    "Display *" "display"
    "Window" "src_w"
    "Window" "dest_w"
    "int" "src_x"
    "int" "src_y"
    "unsigned int" "src_width"
    "unsigned int" "src_height"
    "int" "dest_x"
    "int" "dest_y"
*/
#define __TRACE_RETSTYLE_XWarpPointer__ TYPED
#define __TRACE_ARGSTYLE_XWarpPointer__ FIXED
#define __TRACE_SAFERETTYPE_XWarpPointer__ int
#define __TRACE_PROTOARGLIST_XWarpPointer__ ( Display * display, Window src_w, Window dest_w, int src_x, int src_y, unsigned int src_width, unsigned int src_height, int dest_x, int dest_y)
#define __TRACE_ARGLIST_XWarpPointer__ ( display, src_w, dest_w, src_x, src_y, src_width, src_height, dest_x, dest_y)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWarpPointer__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWarpPointer__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWarpPointer__
#define __TRACE_PRINTF_BODY_XWarpPointer__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWarpPointer, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, Window, src_w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, Window, dest_w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, int, src_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, int, src_y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, unsigned_int, src_width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, unsigned_int, src_height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, int, dest_x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWarpPointer, int, dest_y)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWarpPointer__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XWarpPointer, Display_p, display)
__TRACE__(XWarpPointer)


/*
int XWidthMMOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XWidthMMOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XWidthMMOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XWidthMMOfScreen__ int
#define __TRACE_PROTOARGLIST_XWidthMMOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XWidthMMOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWidthMMOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWidthMMOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWidthMMOfScreen__
#define __TRACE_PRINTF_BODY_XWidthMMOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWidthMMOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWidthMMOfScreen__ 
__TRACE__(XWidthMMOfScreen)


/*
int XWidthOfScreen  // 1 args
    "Screen *" "screen"
*/
#define __TRACE_RETSTYLE_XWidthOfScreen__ TYPED
#define __TRACE_ARGSTYLE_XWidthOfScreen__ FIXED
#define __TRACE_SAFERETTYPE_XWidthOfScreen__ int
#define __TRACE_PROTOARGLIST_XWidthOfScreen__ ( Screen * screen)
#define __TRACE_ARGLIST_XWidthOfScreen__ ( screen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWidthOfScreen__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWidthOfScreen__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWidthOfScreen__
#define __TRACE_PRINTF_BODY_XWidthOfScreen__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWidthOfScreen, Screen_p, screen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWidthOfScreen__ 
__TRACE__(XWidthOfScreen)


/*
int XWindowEvent  // 4 args
    "Display *" "display"
    "Window" "w"
    "long" "event_mask"
    "XEvent *" "event_return"
*/
#define __TRACE_RETSTYLE_XWindowEvent__ TYPED
#define __TRACE_ARGSTYLE_XWindowEvent__ FIXED
#define __TRACE_SAFERETTYPE_XWindowEvent__ int
#define __TRACE_PROTOARGLIST_XWindowEvent__ ( Display * display, Window w, long event_mask, XEvent * event_return)
#define __TRACE_ARGLIST_XWindowEvent__ ( display, w, event_mask, event_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWindowEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWindowEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWindowEvent__
#define __TRACE_PRINTF_BODY_XWindowEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWindowEvent, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWindowEvent, Window, w) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWindowEvent, long_EventMask, event_mask) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWindowEvent, XEvent_p, event_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWindowEvent__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XWindowEvent, Display_p, display)
__TRACE__(XWindowEvent)


/*
int XWriteBitmapFile  // 7 args
    "Display *" "display"
    "const char *" "filename"
    "Pixmap" "bitmap"
    "unsigned int" "width"
    "unsigned int" "height"
    "int" "x_hot"
    "int" "y_hot"
*/
#define __TRACE_RETSTYLE_XWriteBitmapFile__ TYPED
#define __TRACE_ARGSTYLE_XWriteBitmapFile__ FIXED
#define __TRACE_SAFERETTYPE_XWriteBitmapFile__ int
#define __TRACE_PROTOARGLIST_XWriteBitmapFile__ ( Display * display, const char * filename, Pixmap bitmap, unsigned int width, unsigned int height, int x_hot, int y_hot)
#define __TRACE_ARGLIST_XWriteBitmapFile__ ( display, filename, bitmap, width, height, x_hot, y_hot)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XWriteBitmapFile__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XWriteBitmapFile__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XWriteBitmapFile__
#define __TRACE_PRINTF_BODY_XWriteBitmapFile__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, char_p, filename) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, Pixmap, bitmap) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, unsigned_int, width) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, unsigned_int, height) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, int, x_hot) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XWriteBitmapFile, int, y_hot)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XWriteBitmapFile__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XWriteBitmapFile, Display_p, display)
__TRACE__(XWriteBitmapFile)


/*
char * XSetLocaleModifiers  // 1 args
    "const char *" "modifier_list"
*/
#define __TRACE_RETSTYLE_XSetLocaleModifiers__ TYPED
#define __TRACE_ARGSTYLE_XSetLocaleModifiers__ FIXED
#define __TRACE_SAFERETTYPE_XSetLocaleModifiers__ char_p
#define __TRACE_PROTOARGLIST_XSetLocaleModifiers__ ( const char * modifier_list)
#define __TRACE_ARGLIST_XSetLocaleModifiers__ ( modifier_list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetLocaleModifiers__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetLocaleModifiers__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetLocaleModifiers__
#define __TRACE_PRINTF_BODY_XSetLocaleModifiers__ \
    __TRACE_PRINTF_ARG__(XSetLocaleModifiers, char_p, modifier_list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetLocaleModifiers__ 
__TRACE__(XSetLocaleModifiers)


/*
XOM XOpenOM  // 4 args
    "Display *" "display"
    "struct _XrmHashBucketRec *" "rdb"
    "const char *" "res_name"
    "const char *" "res_class"
*/
#define __TRACE_RETSTYLE_XOpenOM__ TYPED
#define __TRACE_ARGSTYLE_XOpenOM__ FIXED
#define __TRACE_SAFERETTYPE_XOpenOM__ XOM
#define __TRACE_PROTOARGLIST_XOpenOM__ ( Display * display, struct _XrmHashBucketRec * rdb, const char * res_name, const char * res_class)
#define __TRACE_ARGLIST_XOpenOM__ ( display, rdb, res_name, res_class)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XOpenOM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XOpenOM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XOpenOM__
#define __TRACE_PRINTF_BODY_XOpenOM__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XOpenOM, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenOM, struct__XrmHashBucketRec_p, rdb) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenOM, char_p, res_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenOM, char_p, res_class)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XOpenOM__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XOpenOM, Display_p, display)
__TRACE__(XOpenOM)


/*
Status XCloseOM  // 1 args
    "XOM" "om"
*/
#define __TRACE_RETSTYLE_XCloseOM__ TYPED
#define __TRACE_ARGSTYLE_XCloseOM__ FIXED
#define __TRACE_SAFERETTYPE_XCloseOM__ Status
#define __TRACE_PROTOARGLIST_XCloseOM__ ( XOM om)
#define __TRACE_ARGLIST_XCloseOM__ ( om)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCloseOM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCloseOM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCloseOM__
#define __TRACE_PRINTF_BODY_XCloseOM__ \
    __TRACE_PRINTF_ARG__(XCloseOM, XOM, om)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCloseOM__ 
__TRACE__(XCloseOM)


/*
char * XSetOMValues  // 2 args
    "XOM" "om"
    "..." " ..."
*/
#define __TRACE_RETSTYLE_XSetOMValues__ TYPED
#define __TRACE_ARGSTYLE_XSetOMValues__ VAR
#define __TRACE_SAFERETTYPE_XSetOMValues__ char_p
#define __TRACE_PROTOARGLIST_XSetOMValues__ ( XOM om, ...)
#define __TRACE_ARGLIST_XSetOMValues__ ( om,  ...)
#define __TRACE_FIXEDARGLISTSTART_XSetOMValues__ ( om
#define __TRACE_FINALFIXEDARGNAME_XSetOMValues__ om
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetOMValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetOMValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetOMValues__
#define __TRACE_PRINTF_BODY_XSetOMValues__ \
    __TRACE_PRINTF_ARG__(XSetOMValues, XOM, om) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetOMValues__ 
__TRACE__(XSetOMValues)


/*
char * XGetOMValues  // 2 args
    "XOM" "om"
    "..." " ..."
*/
#define __TRACE_RETSTYLE_XGetOMValues__ TYPED
#define __TRACE_ARGSTYLE_XGetOMValues__ VAR
#define __TRACE_SAFERETTYPE_XGetOMValues__ char_p
#define __TRACE_PROTOARGLIST_XGetOMValues__ ( XOM om, ...)
#define __TRACE_ARGLIST_XGetOMValues__ ( om,  ...)
#define __TRACE_FIXEDARGLISTSTART_XGetOMValues__ ( om
#define __TRACE_FINALFIXEDARGNAME_XGetOMValues__ om
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetOMValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetOMValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetOMValues__
#define __TRACE_PRINTF_BODY_XGetOMValues__ \
    __TRACE_PRINTF_ARG__(XGetOMValues, XOM, om) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetOMValues__ 
__TRACE__(XGetOMValues)


/*
Display * XDisplayOfOM  // 1 args
    "XOM" "om"
*/
#define __TRACE_RETSTYLE_XDisplayOfOM__ TYPED
#define __TRACE_ARGSTYLE_XDisplayOfOM__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayOfOM__ Display_p
#define __TRACE_PROTOARGLIST_XDisplayOfOM__ ( XOM om)
#define __TRACE_ARGLIST_XDisplayOfOM__ ( om)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayOfOM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayOfOM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayOfOM__
#define __TRACE_PRINTF_BODY_XDisplayOfOM__ \
    __TRACE_PRINTF_ARG__(XDisplayOfOM, XOM, om)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayOfOM__ 
__TRACE__(XDisplayOfOM)


/*
char * XLocaleOfOM  // 1 args
    "XOM" "om"
*/
#define __TRACE_RETSTYLE_XLocaleOfOM__ TYPED
#define __TRACE_ARGSTYLE_XLocaleOfOM__ FIXED
#define __TRACE_SAFERETTYPE_XLocaleOfOM__ char_p
#define __TRACE_PROTOARGLIST_XLocaleOfOM__ ( XOM om)
#define __TRACE_ARGLIST_XLocaleOfOM__ ( om)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLocaleOfOM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLocaleOfOM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLocaleOfOM__
#define __TRACE_PRINTF_BODY_XLocaleOfOM__ \
    __TRACE_PRINTF_ARG__(XLocaleOfOM, XOM, om)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLocaleOfOM__ 
__TRACE__(XLocaleOfOM)


/*
XOC XCreateOC  // 2 args
    "XOM" "om"
    "..." " ..."
*/
#define __TRACE_RETSTYLE_XCreateOC__ TYPED
#define __TRACE_ARGSTYLE_XCreateOC__ VAR
#define __TRACE_SAFERETTYPE_XCreateOC__ XOC
#define __TRACE_PROTOARGLIST_XCreateOC__ ( XOM om, ...)
#define __TRACE_ARGLIST_XCreateOC__ ( om,  ...)
#define __TRACE_FIXEDARGLISTSTART_XCreateOC__ ( om
#define __TRACE_FINALFIXEDARGNAME_XCreateOC__ om
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateOC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateOC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateOC__
#define __TRACE_PRINTF_BODY_XCreateOC__ \
    __TRACE_PRINTF_ARG__(XCreateOC, XOM, om) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateOC__ 
__TRACE__(XCreateOC)


/*
void XDestroyOC  // 1 args
    "XOC" "oc"
*/
#define __TRACE_RETSTYLE_XDestroyOC__ VOID
#define __TRACE_ARGSTYLE_XDestroyOC__ FIXED
#define __TRACE_SAFERETTYPE_XDestroyOC__ void
#define __TRACE_PROTOARGLIST_XDestroyOC__ ( XOC oc)
#define __TRACE_ARGLIST_XDestroyOC__ ( oc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDestroyOC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDestroyOC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDestroyOC__
#define __TRACE_PRINTF_BODY_XDestroyOC__ \
    __TRACE_PRINTF_ARG__(XDestroyOC, XOC, oc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDestroyOC__ 
__TRACE__(XDestroyOC)


/*
XOM XOMOfOC  // 1 args
    "XOC" "oc"
*/
#define __TRACE_RETSTYLE_XOMOfOC__ TYPED
#define __TRACE_ARGSTYLE_XOMOfOC__ FIXED
#define __TRACE_SAFERETTYPE_XOMOfOC__ XOM
#define __TRACE_PROTOARGLIST_XOMOfOC__ ( XOC oc)
#define __TRACE_ARGLIST_XOMOfOC__ ( oc)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XOMOfOC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XOMOfOC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XOMOfOC__
#define __TRACE_PRINTF_BODY_XOMOfOC__ \
    __TRACE_PRINTF_ARG__(XOMOfOC, XOC, oc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XOMOfOC__ 
__TRACE__(XOMOfOC)


/*
char * XSetOCValues  // 2 args
    "XOC" "oc"
    "..." " ..."
*/
#define __TRACE_RETSTYLE_XSetOCValues__ TYPED
#define __TRACE_ARGSTYLE_XSetOCValues__ VAR
#define __TRACE_SAFERETTYPE_XSetOCValues__ char_p
#define __TRACE_PROTOARGLIST_XSetOCValues__ ( XOC oc, ...)
#define __TRACE_ARGLIST_XSetOCValues__ ( oc,  ...)
#define __TRACE_FIXEDARGLISTSTART_XSetOCValues__ ( oc
#define __TRACE_FINALFIXEDARGNAME_XSetOCValues__ oc
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetOCValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetOCValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetOCValues__
#define __TRACE_PRINTF_BODY_XSetOCValues__ \
    __TRACE_PRINTF_ARG__(XSetOCValues, XOC, oc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetOCValues__ 
__TRACE__(XSetOCValues)


/*
char * XGetOCValues  // 2 args
    "XOC" "oc"
    "..." " ..."
*/
#define __TRACE_RETSTYLE_XGetOCValues__ TYPED
#define __TRACE_ARGSTYLE_XGetOCValues__ VAR
#define __TRACE_SAFERETTYPE_XGetOCValues__ char_p
#define __TRACE_PROTOARGLIST_XGetOCValues__ ( XOC oc, ...)
#define __TRACE_ARGLIST_XGetOCValues__ ( oc,  ...)
#define __TRACE_FIXEDARGLISTSTART_XGetOCValues__ ( oc
#define __TRACE_FINALFIXEDARGNAME_XGetOCValues__ oc
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetOCValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetOCValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetOCValues__
#define __TRACE_PRINTF_BODY_XGetOCValues__ \
    __TRACE_PRINTF_ARG__(XGetOCValues, XOC, oc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetOCValues__ 
__TRACE__(XGetOCValues)


/*
XFontSet XCreateFontSet  // 5 args
    "Display *" "display"
    "const char *" "base_font_name_list"
    "char ***" "missing_charset_list"
    "int *" "missing_charset_count"
    "char **" "def_string"
*/
#define __TRACE_RETSTYLE_XCreateFontSet__ TYPED
#define __TRACE_ARGSTYLE_XCreateFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XCreateFontSet__ XFontSet
#define __TRACE_PROTOARGLIST_XCreateFontSet__ ( Display * display, const char * base_font_name_list, char *** missing_charset_list, int * missing_charset_count, char ** def_string)
#define __TRACE_ARGLIST_XCreateFontSet__ ( display, base_font_name_list, missing_charset_list, missing_charset_count, def_string)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateFontSet__
#define __TRACE_PRINTF_BODY_XCreateFontSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XCreateFontSet, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateFontSet, char_p, base_font_name_list) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateFontSet, char_ppp, missing_charset_list) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateFontSet, int_p, missing_charset_count) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XCreateFontSet, char_pp, def_string)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateFontSet__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XCreateFontSet, Display_p, display)
__TRACE__(XCreateFontSet)


/*
void XFreeFontSet  // 2 args
    "Display *" "display"
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XFreeFontSet__ VOID
#define __TRACE_ARGSTYLE_XFreeFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XFreeFontSet__ void
#define __TRACE_PROTOARGLIST_XFreeFontSet__ ( Display * display, XFontSet font_set)
#define __TRACE_ARGLIST_XFreeFontSet__ ( display, font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFreeFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFreeFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFreeFontSet__
#define __TRACE_PRINTF_BODY_XFreeFontSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFreeFontSet, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFreeFontSet, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFreeFontSet__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XFreeFontSet, Display_p, display)
__TRACE__(XFreeFontSet)


/*
int XFontsOfFontSet  // 3 args
    "XFontSet" "font_set"
    "XFontStruct ***" "font_struct_list"
    "char ***" "font_name_list"
*/
#define __TRACE_RETSTYLE_XFontsOfFontSet__ TYPED
#define __TRACE_ARGSTYLE_XFontsOfFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XFontsOfFontSet__ int
#define __TRACE_PROTOARGLIST_XFontsOfFontSet__ ( XFontSet font_set, XFontStruct *** font_struct_list, char *** font_name_list)
#define __TRACE_ARGLIST_XFontsOfFontSet__ ( font_set, font_struct_list, font_name_list)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFontsOfFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFontsOfFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFontsOfFontSet__
#define __TRACE_PRINTF_BODY_XFontsOfFontSet__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFontsOfFontSet, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFontsOfFontSet, XFontStruct_ppp, font_struct_list) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFontsOfFontSet, char_ppp, font_name_list)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFontsOfFontSet__ 
__TRACE__(XFontsOfFontSet)


/*
char * XBaseFontNameListOfFontSet  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XBaseFontNameListOfFontSet__ TYPED
#define __TRACE_ARGSTYLE_XBaseFontNameListOfFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XBaseFontNameListOfFontSet__ char_p
#define __TRACE_PROTOARGLIST_XBaseFontNameListOfFontSet__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XBaseFontNameListOfFontSet__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XBaseFontNameListOfFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XBaseFontNameListOfFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XBaseFontNameListOfFontSet__
#define __TRACE_PRINTF_BODY_XBaseFontNameListOfFontSet__ \
    __TRACE_PRINTF_ARG__(XBaseFontNameListOfFontSet, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XBaseFontNameListOfFontSet__ 
__TRACE__(XBaseFontNameListOfFontSet)


/*
char * XLocaleOfFontSet  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XLocaleOfFontSet__ TYPED
#define __TRACE_ARGSTYLE_XLocaleOfFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XLocaleOfFontSet__ char_p
#define __TRACE_PROTOARGLIST_XLocaleOfFontSet__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XLocaleOfFontSet__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLocaleOfFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLocaleOfFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLocaleOfFontSet__
#define __TRACE_PRINTF_BODY_XLocaleOfFontSet__ \
    __TRACE_PRINTF_ARG__(XLocaleOfFontSet, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLocaleOfFontSet__ 
__TRACE__(XLocaleOfFontSet)


/*
Bool XContextDependentDrawing  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XContextDependentDrawing__ TYPED
#define __TRACE_ARGSTYLE_XContextDependentDrawing__ FIXED
#define __TRACE_SAFERETTYPE_XContextDependentDrawing__ Bool
#define __TRACE_PROTOARGLIST_XContextDependentDrawing__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XContextDependentDrawing__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XContextDependentDrawing__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XContextDependentDrawing__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XContextDependentDrawing__
#define __TRACE_PRINTF_BODY_XContextDependentDrawing__ \
    __TRACE_PRINTF_ARG__(XContextDependentDrawing, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XContextDependentDrawing__ 
__TRACE__(XContextDependentDrawing)


/*
Bool XDirectionalDependentDrawing  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XDirectionalDependentDrawing__ TYPED
#define __TRACE_ARGSTYLE_XDirectionalDependentDrawing__ FIXED
#define __TRACE_SAFERETTYPE_XDirectionalDependentDrawing__ Bool
#define __TRACE_PROTOARGLIST_XDirectionalDependentDrawing__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XDirectionalDependentDrawing__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDirectionalDependentDrawing__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDirectionalDependentDrawing__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDirectionalDependentDrawing__
#define __TRACE_PRINTF_BODY_XDirectionalDependentDrawing__ \
    __TRACE_PRINTF_ARG__(XDirectionalDependentDrawing, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDirectionalDependentDrawing__ 
__TRACE__(XDirectionalDependentDrawing)


/*
Bool XContextualDrawing  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XContextualDrawing__ TYPED
#define __TRACE_ARGSTYLE_XContextualDrawing__ FIXED
#define __TRACE_SAFERETTYPE_XContextualDrawing__ Bool
#define __TRACE_PROTOARGLIST_XContextualDrawing__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XContextualDrawing__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XContextualDrawing__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XContextualDrawing__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XContextualDrawing__
#define __TRACE_PRINTF_BODY_XContextualDrawing__ \
    __TRACE_PRINTF_ARG__(XContextualDrawing, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XContextualDrawing__ 
__TRACE__(XContextualDrawing)


/*
XFontSetExtents * XExtentsOfFontSet  // 1 args
    "XFontSet" "font_set"
*/
#define __TRACE_RETSTYLE_XExtentsOfFontSet__ TYPED
#define __TRACE_ARGSTYLE_XExtentsOfFontSet__ FIXED
#define __TRACE_SAFERETTYPE_XExtentsOfFontSet__ XFontSetExtents_p
#define __TRACE_PROTOARGLIST_XExtentsOfFontSet__ ( XFontSet font_set)
#define __TRACE_ARGLIST_XExtentsOfFontSet__ ( font_set)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XExtentsOfFontSet__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XExtentsOfFontSet__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XExtentsOfFontSet__
#define __TRACE_PRINTF_BODY_XExtentsOfFontSet__ \
    __TRACE_PRINTF_ARG__(XExtentsOfFontSet, XFontSet, font_set)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XExtentsOfFontSet__ 
__TRACE__(XExtentsOfFontSet)


/*
int XmbTextEscapement  // 3 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_XmbTextEscapement__ TYPED
#define __TRACE_ARGSTYLE_XmbTextEscapement__ FIXED
#define __TRACE_SAFERETTYPE_XmbTextEscapement__ int
#define __TRACE_PROTOARGLIST_XmbTextEscapement__ ( XFontSet font_set, const char * text, int bytes_text)
#define __TRACE_ARGLIST_XmbTextEscapement__ ( font_set, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbTextEscapement__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbTextEscapement__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbTextEscapement__
#define __TRACE_PRINTF_BODY_XmbTextEscapement__ \
    __TRACE_PRINTF_ARG__(XmbTextEscapement, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextEscapement, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextEscapement, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbTextEscapement__ 
__TRACE__(XmbTextEscapement)


/*
int XwcTextEscapement  // 3 args
    "XFontSet" "font_set"
    "const wchar_t *" "text"
    "int" "num_wchars"
*/
#define __TRACE_RETSTYLE_XwcTextEscapement__ TYPED
#define __TRACE_ARGSTYLE_XwcTextEscapement__ FIXED
#define __TRACE_SAFERETTYPE_XwcTextEscapement__ int
#define __TRACE_PROTOARGLIST_XwcTextEscapement__ ( XFontSet font_set, const wchar_t * text, int num_wchars)
#define __TRACE_ARGLIST_XwcTextEscapement__ ( font_set, text, num_wchars)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcTextEscapement__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcTextEscapement__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcTextEscapement__
#define __TRACE_PRINTF_BODY_XwcTextEscapement__ \
    __TRACE_PRINTF_ARG__(XwcTextEscapement, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextEscapement, wchar_t_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextEscapement, int, num_wchars)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcTextEscapement__ 
__TRACE__(XwcTextEscapement)


/*
int Xutf8TextEscapement  // 3 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_Xutf8TextEscapement__ TYPED
#define __TRACE_ARGSTYLE_Xutf8TextEscapement__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8TextEscapement__ int
#define __TRACE_PROTOARGLIST_Xutf8TextEscapement__ ( XFontSet font_set, const char * text, int bytes_text)
#define __TRACE_ARGLIST_Xutf8TextEscapement__ ( font_set, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8TextEscapement__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8TextEscapement__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8TextEscapement__
#define __TRACE_PRINTF_BODY_Xutf8TextEscapement__ \
    __TRACE_PRINTF_ARG__(Xutf8TextEscapement, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextEscapement, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextEscapement, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8TextEscapement__ 
__TRACE__(Xutf8TextEscapement)


/*
int XmbTextExtents  // 5 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_XmbTextExtents__ TYPED
#define __TRACE_ARGSTYLE_XmbTextExtents__ FIXED
#define __TRACE_SAFERETTYPE_XmbTextExtents__ int
#define __TRACE_PROTOARGLIST_XmbTextExtents__ ( XFontSet font_set, const char * text, int bytes_text, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_XmbTextExtents__ ( font_set, text, bytes_text, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbTextExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbTextExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbTextExtents__
#define __TRACE_PRINTF_BODY_XmbTextExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbTextExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextExtents, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextExtents, int, bytes_text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbTextExtents__ 
__TRACE__(XmbTextExtents)


/*
int XwcTextExtents  // 5 args
    "XFontSet" "font_set"
    "const wchar_t *" "text"
    "int" "num_wchars"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_XwcTextExtents__ TYPED
#define __TRACE_ARGSTYLE_XwcTextExtents__ FIXED
#define __TRACE_SAFERETTYPE_XwcTextExtents__ int
#define __TRACE_PROTOARGLIST_XwcTextExtents__ ( XFontSet font_set, const wchar_t * text, int num_wchars, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_XwcTextExtents__ ( font_set, text, num_wchars, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcTextExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcTextExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcTextExtents__
#define __TRACE_PRINTF_BODY_XwcTextExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcTextExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextExtents, wchar_t_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextExtents, int, num_wchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcTextExtents__ 
__TRACE__(XwcTextExtents)


/*
int Xutf8TextExtents  // 5 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_Xutf8TextExtents__ TYPED
#define __TRACE_ARGSTYLE_Xutf8TextExtents__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8TextExtents__ int
#define __TRACE_PROTOARGLIST_Xutf8TextExtents__ ( XFontSet font_set, const char * text, int bytes_text, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_Xutf8TextExtents__ ( font_set, text, bytes_text, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8TextExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8TextExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8TextExtents__
#define __TRACE_PRINTF_BODY_Xutf8TextExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8TextExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextExtents, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextExtents, int, bytes_text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8TextExtents__ 
__TRACE__(Xutf8TextExtents)


/*
Status XmbTextPerCharExtents  // 9 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
    "XRectangle *" "ink_extents_buffer"
    "XRectangle *" "logical_extents_buffer"
    "int" "buffer_size"
    "int *" "num_chars"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_XmbTextPerCharExtents__ TYPED
#define __TRACE_ARGSTYLE_XmbTextPerCharExtents__ FIXED
#define __TRACE_SAFERETTYPE_XmbTextPerCharExtents__ Status
#define __TRACE_PROTOARGLIST_XmbTextPerCharExtents__ ( XFontSet font_set, const char * text, int bytes_text, XRectangle * ink_extents_buffer, XRectangle * logical_extents_buffer, int buffer_size, int * num_chars, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_XmbTextPerCharExtents__ ( font_set, text, bytes_text, ink_extents_buffer, logical_extents_buffer, buffer_size, num_chars, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbTextPerCharExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbTextPerCharExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbTextPerCharExtents__
#define __TRACE_PRINTF_BODY_XmbTextPerCharExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, int, bytes_text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, XRectangle_p, ink_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, XRectangle_p, logical_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, int, buffer_size) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, int_p, num_chars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbTextPerCharExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbTextPerCharExtents__ 
__TRACE__(XmbTextPerCharExtents)


/*
Status XwcTextPerCharExtents  // 9 args
    "XFontSet" "font_set"
    "const wchar_t *" "text"
    "int" "num_wchars"
    "XRectangle *" "ink_extents_buffer"
    "XRectangle *" "logical_extents_buffer"
    "int" "buffer_size"
    "int *" "num_chars"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_XwcTextPerCharExtents__ TYPED
#define __TRACE_ARGSTYLE_XwcTextPerCharExtents__ FIXED
#define __TRACE_SAFERETTYPE_XwcTextPerCharExtents__ Status
#define __TRACE_PROTOARGLIST_XwcTextPerCharExtents__ ( XFontSet font_set, const wchar_t * text, int num_wchars, XRectangle * ink_extents_buffer, XRectangle * logical_extents_buffer, int buffer_size, int * num_chars, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_XwcTextPerCharExtents__ ( font_set, text, num_wchars, ink_extents_buffer, logical_extents_buffer, buffer_size, num_chars, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcTextPerCharExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcTextPerCharExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcTextPerCharExtents__
#define __TRACE_PRINTF_BODY_XwcTextPerCharExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, wchar_t_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, int, num_wchars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, XRectangle_p, ink_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, XRectangle_p, logical_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, int, buffer_size) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, int_p, num_chars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcTextPerCharExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcTextPerCharExtents__ 
__TRACE__(XwcTextPerCharExtents)


/*
Status Xutf8TextPerCharExtents  // 9 args
    "XFontSet" "font_set"
    "const char *" "text"
    "int" "bytes_text"
    "XRectangle *" "ink_extents_buffer"
    "XRectangle *" "logical_extents_buffer"
    "int" "buffer_size"
    "int *" "num_chars"
    "XRectangle *" "overall_ink_return"
    "XRectangle *" "overall_logical_return"
*/
#define __TRACE_RETSTYLE_Xutf8TextPerCharExtents__ TYPED
#define __TRACE_ARGSTYLE_Xutf8TextPerCharExtents__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8TextPerCharExtents__ Status
#define __TRACE_PROTOARGLIST_Xutf8TextPerCharExtents__ ( XFontSet font_set, const char * text, int bytes_text, XRectangle * ink_extents_buffer, XRectangle * logical_extents_buffer, int buffer_size, int * num_chars, XRectangle * overall_ink_return, XRectangle * overall_logical_return)
#define __TRACE_ARGLIST_Xutf8TextPerCharExtents__ ( font_set, text, bytes_text, ink_extents_buffer, logical_extents_buffer, buffer_size, num_chars, overall_ink_return, overall_logical_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8TextPerCharExtents__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8TextPerCharExtents__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8TextPerCharExtents__
#define __TRACE_PRINTF_BODY_Xutf8TextPerCharExtents__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, int, bytes_text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, XRectangle_p, ink_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, XRectangle_p, logical_extents_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, int, buffer_size) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, int_p, num_chars) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, XRectangle_p, overall_ink_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8TextPerCharExtents, XRectangle_p, overall_logical_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8TextPerCharExtents__ 
__TRACE__(Xutf8TextPerCharExtents)


/*
void XmbDrawText  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "XmbTextItem *" "text_items"
    "int" "nitems"
*/
#define __TRACE_RETSTYLE_XmbDrawText__ VOID
#define __TRACE_ARGSTYLE_XmbDrawText__ FIXED
#define __TRACE_SAFERETTYPE_XmbDrawText__ void
#define __TRACE_PROTOARGLIST_XmbDrawText__ ( Display * display, Drawable d, GC gc, int x, int y, XmbTextItem * text_items, int nitems)
#define __TRACE_ARGLIST_XmbDrawText__ ( display, d, gc, x, y, text_items, nitems)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbDrawText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbDrawText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbDrawText__
#define __TRACE_PRINTF_BODY_XmbDrawText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbDrawText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, XmbTextItem_p, text_items) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawText, int, nitems)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbDrawText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XmbDrawText, Display_p, display)
__TRACE__(XmbDrawText)


/*
void XwcDrawText  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "XwcTextItem *" "text_items"
    "int" "nitems"
*/
#define __TRACE_RETSTYLE_XwcDrawText__ VOID
#define __TRACE_ARGSTYLE_XwcDrawText__ FIXED
#define __TRACE_SAFERETTYPE_XwcDrawText__ void
#define __TRACE_PROTOARGLIST_XwcDrawText__ ( Display * display, Drawable d, GC gc, int x, int y, XwcTextItem * text_items, int nitems)
#define __TRACE_ARGLIST_XwcDrawText__ ( display, d, gc, x, y, text_items, nitems)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcDrawText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcDrawText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcDrawText__
#define __TRACE_PRINTF_BODY_XwcDrawText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcDrawText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, XwcTextItem_p, text_items) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawText, int, nitems)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcDrawText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XwcDrawText, Display_p, display)
__TRACE__(XwcDrawText)


/*
void Xutf8DrawText  // 7 args
    "Display *" "display"
    "Drawable" "d"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "XmbTextItem *" "text_items"
    "int" "nitems"
*/
#define __TRACE_RETSTYLE_Xutf8DrawText__ VOID
#define __TRACE_ARGSTYLE_Xutf8DrawText__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8DrawText__ void
#define __TRACE_PROTOARGLIST_Xutf8DrawText__ ( Display * display, Drawable d, GC gc, int x, int y, XmbTextItem * text_items, int nitems)
#define __TRACE_ARGLIST_Xutf8DrawText__ ( display, d, gc, x, y, text_items, nitems)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8DrawText__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8DrawText__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8DrawText__
#define __TRACE_PRINTF_BODY_Xutf8DrawText__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, XmbTextItem_p, text_items) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawText, int, nitems)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8DrawText__ \
    __TRACE_RUN_XFLUSH_XSYNC__(Xutf8DrawText, Display_p, display)
__TRACE__(Xutf8DrawText)


/*
void XmbDrawString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_XmbDrawString__ VOID
#define __TRACE_ARGSTYLE_XmbDrawString__ FIXED
#define __TRACE_SAFERETTYPE_XmbDrawString__ void
#define __TRACE_PROTOARGLIST_XmbDrawString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const char * text, int bytes_text)
#define __TRACE_ARGLIST_XmbDrawString__ ( display, d, font_set, gc, x, y, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbDrawString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbDrawString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbDrawString__
#define __TRACE_PRINTF_BODY_XmbDrawString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbDrawString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawString, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbDrawString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XmbDrawString, Display_p, display)
__TRACE__(XmbDrawString)


/*
void XwcDrawString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const wchar_t *" "text"
    "int" "num_wchars"
*/
#define __TRACE_RETSTYLE_XwcDrawString__ VOID
#define __TRACE_ARGSTYLE_XwcDrawString__ FIXED
#define __TRACE_SAFERETTYPE_XwcDrawString__ void
#define __TRACE_PROTOARGLIST_XwcDrawString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const wchar_t * text, int num_wchars)
#define __TRACE_ARGLIST_XwcDrawString__ ( display, d, font_set, gc, x, y, text, num_wchars)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcDrawString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcDrawString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcDrawString__
#define __TRACE_PRINTF_BODY_XwcDrawString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcDrawString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, wchar_t_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawString, int, num_wchars)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcDrawString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XwcDrawString, Display_p, display)
__TRACE__(XwcDrawString)


/*
void Xutf8DrawString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_Xutf8DrawString__ VOID
#define __TRACE_ARGSTYLE_Xutf8DrawString__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8DrawString__ void
#define __TRACE_PROTOARGLIST_Xutf8DrawString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const char * text, int bytes_text)
#define __TRACE_ARGLIST_Xutf8DrawString__ ( display, d, font_set, gc, x, y, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8DrawString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8DrawString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8DrawString__
#define __TRACE_PRINTF_BODY_Xutf8DrawString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawString, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8DrawString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(Xutf8DrawString, Display_p, display)
__TRACE__(Xutf8DrawString)


/*
void XmbDrawImageString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_XmbDrawImageString__ VOID
#define __TRACE_ARGSTYLE_XmbDrawImageString__ FIXED
#define __TRACE_SAFERETTYPE_XmbDrawImageString__ void
#define __TRACE_PROTOARGLIST_XmbDrawImageString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const char * text, int bytes_text)
#define __TRACE_ARGLIST_XmbDrawImageString__ ( display, d, font_set, gc, x, y, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbDrawImageString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbDrawImageString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbDrawImageString__
#define __TRACE_PRINTF_BODY_XmbDrawImageString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbDrawImageString, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbDrawImageString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XmbDrawImageString, Display_p, display)
__TRACE__(XmbDrawImageString)


/*
void XwcDrawImageString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const wchar_t *" "text"
    "int" "num_wchars"
*/
#define __TRACE_RETSTYLE_XwcDrawImageString__ VOID
#define __TRACE_ARGSTYLE_XwcDrawImageString__ FIXED
#define __TRACE_SAFERETTYPE_XwcDrawImageString__ void
#define __TRACE_PROTOARGLIST_XwcDrawImageString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const wchar_t * text, int num_wchars)
#define __TRACE_ARGLIST_XwcDrawImageString__ ( display, d, font_set, gc, x, y, text, num_wchars)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcDrawImageString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcDrawImageString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcDrawImageString__
#define __TRACE_PRINTF_BODY_XwcDrawImageString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, wchar_t_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcDrawImageString, int, num_wchars)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcDrawImageString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XwcDrawImageString, Display_p, display)
__TRACE__(XwcDrawImageString)


/*
void Xutf8DrawImageString  // 8 args
    "Display *" "display"
    "Drawable" "d"
    "XFontSet" "font_set"
    "GC" "gc"
    "int" "x"
    "int" "y"
    "const char *" "text"
    "int" "bytes_text"
*/
#define __TRACE_RETSTYLE_Xutf8DrawImageString__ VOID
#define __TRACE_ARGSTYLE_Xutf8DrawImageString__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8DrawImageString__ void
#define __TRACE_PROTOARGLIST_Xutf8DrawImageString__ ( Display * display, Drawable d, XFontSet font_set, GC gc, int x, int y, const char * text, int bytes_text)
#define __TRACE_ARGLIST_Xutf8DrawImageString__ ( display, d, font_set, gc, x, y, text, bytes_text)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8DrawImageString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8DrawImageString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8DrawImageString__
#define __TRACE_PRINTF_BODY_Xutf8DrawImageString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, Display_p, display) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, Drawable, d) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, XFontSet, font_set) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, GC, gc) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, int, x) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, int, y) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, char_p, text) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8DrawImageString, int, bytes_text)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8DrawImageString__ \
    __TRACE_RUN_XFLUSH_XSYNC__(Xutf8DrawImageString, Display_p, display)
__TRACE__(Xutf8DrawImageString)


/*
XIM XOpenIM  // 4 args
    "Display *" "dpy"
    "struct _XrmHashBucketRec *" "rdb"
    "char *" "res_name"
    "char *" "res_class"
*/
#define __TRACE_RETSTYLE_XOpenIM__ TYPED
#define __TRACE_ARGSTYLE_XOpenIM__ FIXED
#define __TRACE_SAFERETTYPE_XOpenIM__ XIM
#define __TRACE_PROTOARGLIST_XOpenIM__ ( Display * dpy, struct _XrmHashBucketRec * rdb, char * res_name, char * res_class)
#define __TRACE_ARGLIST_XOpenIM__ ( dpy, rdb, res_name, res_class)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XOpenIM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XOpenIM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XOpenIM__
#define __TRACE_PRINTF_BODY_XOpenIM__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XOpenIM, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenIM, struct__XrmHashBucketRec_p, rdb) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenIM, char_p, res_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XOpenIM, char_p, res_class)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XOpenIM__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XOpenIM, Display_p, dpy)
__TRACE__(XOpenIM)


/*
Status XCloseIM  // 1 args
    "XIM" "im"
*/
#define __TRACE_RETSTYLE_XCloseIM__ TYPED
#define __TRACE_ARGSTYLE_XCloseIM__ FIXED
#define __TRACE_SAFERETTYPE_XCloseIM__ Status
#define __TRACE_PROTOARGLIST_XCloseIM__ ( XIM im)
#define __TRACE_ARGLIST_XCloseIM__ ( im)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCloseIM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCloseIM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCloseIM__
#define __TRACE_PRINTF_BODY_XCloseIM__ \
    __TRACE_PRINTF_ARG__(XCloseIM, XIM, im)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCloseIM__ 
__TRACE__(XCloseIM)


/*
char * XGetIMValues  // 2 args
    "XIM" "im"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XGetIMValues__ TYPED
#define __TRACE_ARGSTYLE_XGetIMValues__ VAR
#define __TRACE_SAFERETTYPE_XGetIMValues__ char_p
#define __TRACE_PROTOARGLIST_XGetIMValues__ ( XIM im, ...)
#define __TRACE_ARGLIST_XGetIMValues__ ( im, ...)
#define __TRACE_FIXEDARGLISTSTART_XGetIMValues__ ( im
#define __TRACE_FINALFIXEDARGNAME_XGetIMValues__ im
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetIMValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetIMValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetIMValues__
#define __TRACE_PRINTF_BODY_XGetIMValues__ \
    __TRACE_PRINTF_ARG__(XGetIMValues, XIM, im) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetIMValues__ 
__TRACE__(XGetIMValues)


/*
char * XSetIMValues  // 2 args
    "XIM" "im"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XSetIMValues__ TYPED
#define __TRACE_ARGSTYLE_XSetIMValues__ VAR
#define __TRACE_SAFERETTYPE_XSetIMValues__ char_p
#define __TRACE_PROTOARGLIST_XSetIMValues__ ( XIM im, ...)
#define __TRACE_ARGLIST_XSetIMValues__ ( im, ...)
#define __TRACE_FIXEDARGLISTSTART_XSetIMValues__ ( im
#define __TRACE_FINALFIXEDARGNAME_XSetIMValues__ im
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetIMValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetIMValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetIMValues__
#define __TRACE_PRINTF_BODY_XSetIMValues__ \
    __TRACE_PRINTF_ARG__(XSetIMValues, XIM, im) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetIMValues__ 
__TRACE__(XSetIMValues)


/*
Display * XDisplayOfIM  // 1 args
    "XIM" "im"
*/
#define __TRACE_RETSTYLE_XDisplayOfIM__ TYPED
#define __TRACE_ARGSTYLE_XDisplayOfIM__ FIXED
#define __TRACE_SAFERETTYPE_XDisplayOfIM__ Display_p
#define __TRACE_PROTOARGLIST_XDisplayOfIM__ ( XIM im)
#define __TRACE_ARGLIST_XDisplayOfIM__ ( im)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDisplayOfIM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDisplayOfIM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDisplayOfIM__
#define __TRACE_PRINTF_BODY_XDisplayOfIM__ \
    __TRACE_PRINTF_ARG__(XDisplayOfIM, XIM, im)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDisplayOfIM__ 
__TRACE__(XDisplayOfIM)


/*
char * XLocaleOfIM  // 1 args
    "XIM" "im"
*/
#define __TRACE_RETSTYLE_XLocaleOfIM__ TYPED
#define __TRACE_ARGSTYLE_XLocaleOfIM__ FIXED
#define __TRACE_SAFERETTYPE_XLocaleOfIM__ char_p
#define __TRACE_PROTOARGLIST_XLocaleOfIM__ ( XIM im)
#define __TRACE_ARGLIST_XLocaleOfIM__ ( im)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XLocaleOfIM__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XLocaleOfIM__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XLocaleOfIM__
#define __TRACE_PRINTF_BODY_XLocaleOfIM__ \
    __TRACE_PRINTF_ARG__(XLocaleOfIM, XIM, im)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XLocaleOfIM__ 
__TRACE__(XLocaleOfIM)


/*
XIC XCreateIC  // 2 args
    "XIM" "im"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XCreateIC__ TYPED
#define __TRACE_ARGSTYLE_XCreateIC__ VAR
#define __TRACE_SAFERETTYPE_XCreateIC__ XIC
#define __TRACE_PROTOARGLIST_XCreateIC__ ( XIM im, ...)
#define __TRACE_ARGLIST_XCreateIC__ ( im, ...)
#define __TRACE_FIXEDARGLISTSTART_XCreateIC__ ( im
#define __TRACE_FINALFIXEDARGNAME_XCreateIC__ im
#define __TRACE_ADDITIONAL_LOCAL_VARS_XCreateIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XCreateIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XCreateIC__
#define __TRACE_PRINTF_BODY_XCreateIC__ \
    __TRACE_PRINTF_ARG__(XCreateIC, XIM, im) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XCreateIC__ 
__TRACE__(XCreateIC)


/*
void XDestroyIC  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XDestroyIC__ VOID
#define __TRACE_ARGSTYLE_XDestroyIC__ FIXED
#define __TRACE_SAFERETTYPE_XDestroyIC__ void
#define __TRACE_PROTOARGLIST_XDestroyIC__ ( XIC ic)
#define __TRACE_ARGLIST_XDestroyIC__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XDestroyIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XDestroyIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XDestroyIC__
#define __TRACE_PRINTF_BODY_XDestroyIC__ \
    __TRACE_PRINTF_ARG__(XDestroyIC, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XDestroyIC__ 
__TRACE__(XDestroyIC)


/*
void XSetICFocus  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XSetICFocus__ VOID
#define __TRACE_ARGSTYLE_XSetICFocus__ FIXED
#define __TRACE_SAFERETTYPE_XSetICFocus__ void
#define __TRACE_PROTOARGLIST_XSetICFocus__ ( XIC ic)
#define __TRACE_ARGLIST_XSetICFocus__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetICFocus__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetICFocus__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetICFocus__
#define __TRACE_PRINTF_BODY_XSetICFocus__ \
    __TRACE_PRINTF_ARG__(XSetICFocus, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetICFocus__ 
__TRACE__(XSetICFocus)


/*
void XUnsetICFocus  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XUnsetICFocus__ VOID
#define __TRACE_ARGSTYLE_XUnsetICFocus__ FIXED
#define __TRACE_SAFERETTYPE_XUnsetICFocus__ void
#define __TRACE_PROTOARGLIST_XUnsetICFocus__ ( XIC ic)
#define __TRACE_ARGLIST_XUnsetICFocus__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnsetICFocus__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnsetICFocus__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnsetICFocus__
#define __TRACE_PRINTF_BODY_XUnsetICFocus__ \
    __TRACE_PRINTF_ARG__(XUnsetICFocus, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnsetICFocus__ 
__TRACE__(XUnsetICFocus)


/*
wchar_t * XwcResetIC  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XwcResetIC__ TYPED
#define __TRACE_ARGSTYLE_XwcResetIC__ FIXED
#define __TRACE_SAFERETTYPE_XwcResetIC__ wchar_t_p
#define __TRACE_PROTOARGLIST_XwcResetIC__ ( XIC ic)
#define __TRACE_ARGLIST_XwcResetIC__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcResetIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcResetIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcResetIC__
#define __TRACE_PRINTF_BODY_XwcResetIC__ \
    __TRACE_PRINTF_ARG__(XwcResetIC, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcResetIC__ 
__TRACE__(XwcResetIC)


/*
char * XmbResetIC  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XmbResetIC__ TYPED
#define __TRACE_ARGSTYLE_XmbResetIC__ FIXED
#define __TRACE_SAFERETTYPE_XmbResetIC__ char_p
#define __TRACE_PROTOARGLIST_XmbResetIC__ ( XIC ic)
#define __TRACE_ARGLIST_XmbResetIC__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbResetIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbResetIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbResetIC__
#define __TRACE_PRINTF_BODY_XmbResetIC__ \
    __TRACE_PRINTF_ARG__(XmbResetIC, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbResetIC__ 
__TRACE__(XmbResetIC)


/*
char * Xutf8ResetIC  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_Xutf8ResetIC__ TYPED
#define __TRACE_ARGSTYLE_Xutf8ResetIC__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8ResetIC__ char_p
#define __TRACE_PROTOARGLIST_Xutf8ResetIC__ ( XIC ic)
#define __TRACE_ARGLIST_Xutf8ResetIC__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8ResetIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8ResetIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8ResetIC__
#define __TRACE_PRINTF_BODY_Xutf8ResetIC__ \
    __TRACE_PRINTF_ARG__(Xutf8ResetIC, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8ResetIC__ 
__TRACE__(Xutf8ResetIC)


/*
char * XSetICValues  // 2 args
    "XIC" "ic"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XSetICValues__ TYPED
#define __TRACE_ARGSTYLE_XSetICValues__ VAR
#define __TRACE_SAFERETTYPE_XSetICValues__ char_p
#define __TRACE_PROTOARGLIST_XSetICValues__ ( XIC ic, ...)
#define __TRACE_ARGLIST_XSetICValues__ ( ic, ...)
#define __TRACE_FIXEDARGLISTSTART_XSetICValues__ ( ic
#define __TRACE_FINALFIXEDARGNAME_XSetICValues__ ic
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetICValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetICValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetICValues__
#define __TRACE_PRINTF_BODY_XSetICValues__ \
    __TRACE_PRINTF_ARG__(XSetICValues, XIC, ic) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetICValues__ 
__TRACE__(XSetICValues)


/*
char * XGetICValues  // 2 args
    "XIC" "ic"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XGetICValues__ TYPED
#define __TRACE_ARGSTYLE_XGetICValues__ VAR
#define __TRACE_SAFERETTYPE_XGetICValues__ char_p
#define __TRACE_PROTOARGLIST_XGetICValues__ ( XIC ic, ...)
#define __TRACE_ARGLIST_XGetICValues__ ( ic, ...)
#define __TRACE_FIXEDARGLISTSTART_XGetICValues__ ( ic
#define __TRACE_FINALFIXEDARGNAME_XGetICValues__ ic
#define __TRACE_ADDITIONAL_LOCAL_VARS_XGetICValues__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XGetICValues__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XGetICValues__
#define __TRACE_PRINTF_BODY_XGetICValues__ \
    __TRACE_PRINTF_ARG__(XGetICValues, XIC, ic) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XGetICValues__ 
__TRACE__(XGetICValues)


/*
XIM XIMOfIC  // 1 args
    "XIC" "ic"
*/
#define __TRACE_RETSTYLE_XIMOfIC__ TYPED
#define __TRACE_ARGSTYLE_XIMOfIC__ FIXED
#define __TRACE_SAFERETTYPE_XIMOfIC__ XIM
#define __TRACE_PROTOARGLIST_XIMOfIC__ ( XIC ic)
#define __TRACE_ARGLIST_XIMOfIC__ ( ic)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XIMOfIC__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XIMOfIC__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XIMOfIC__
#define __TRACE_PRINTF_BODY_XIMOfIC__ \
    __TRACE_PRINTF_ARG__(XIMOfIC, XIC, ic)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XIMOfIC__ 
__TRACE__(XIMOfIC)


/*
Bool XFilterEvent  // 2 args
    "XEvent *" "event"
    "Window" "window"
*/
#define __TRACE_RETSTYLE_XFilterEvent__ TYPED
#define __TRACE_ARGSTYLE_XFilterEvent__ FIXED
#define __TRACE_SAFERETTYPE_XFilterEvent__ Bool
#define __TRACE_PROTOARGLIST_XFilterEvent__ ( XEvent * event, Window window)
#define __TRACE_ARGLIST_XFilterEvent__ ( event, window)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XFilterEvent__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XFilterEvent__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XFilterEvent__
#define __TRACE_PRINTF_BODY_XFilterEvent__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XFilterEvent, XEvent_p, event) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XFilterEvent, Window, window)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XFilterEvent__ 
__TRACE__(XFilterEvent)


/*
int XmbLookupString  // 6 args
    "XIC" "ic"
    "XKeyPressedEvent *" "event"
    "char *" "buffer_return"
    "int" "bytes_buffer"
    "KeySym *" "keysym_return"
    "Status *" "status_return"
*/
#define __TRACE_RETSTYLE_XmbLookupString__ TYPED
#define __TRACE_ARGSTYLE_XmbLookupString__ FIXED
#define __TRACE_SAFERETTYPE_XmbLookupString__ int
#define __TRACE_PROTOARGLIST_XmbLookupString__ ( XIC ic, XKeyPressedEvent * event, char * buffer_return, int bytes_buffer, KeySym * keysym_return, Status * status_return)
#define __TRACE_ARGLIST_XmbLookupString__ ( ic, event, buffer_return, bytes_buffer, keysym_return, status_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XmbLookupString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XmbLookupString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XmbLookupString__
#define __TRACE_PRINTF_BODY_XmbLookupString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XmbLookupString, XIC, ic) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbLookupString, XKeyPressedEvent_p, event) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbLookupString, char_p, buffer_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbLookupString, int, bytes_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbLookupString, KeySym_p, keysym_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XmbLookupString, Status_p, status_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XmbLookupString__ 
__TRACE__(XmbLookupString)


/*
int XwcLookupString  // 6 args
    "XIC" "ic"
    "XKeyPressedEvent *" "event"
    "wchar_t *" "buffer_return"
    "int" "wchars_buffer"
    "KeySym *" "keysym_return"
    "Status *" "status_return"
*/
#define __TRACE_RETSTYLE_XwcLookupString__ TYPED
#define __TRACE_ARGSTYLE_XwcLookupString__ FIXED
#define __TRACE_SAFERETTYPE_XwcLookupString__ int
#define __TRACE_PROTOARGLIST_XwcLookupString__ ( XIC ic, XKeyPressedEvent * event, wchar_t * buffer_return, int wchars_buffer, KeySym * keysym_return, Status * status_return)
#define __TRACE_ARGLIST_XwcLookupString__ ( ic, event, buffer_return, wchars_buffer, keysym_return, status_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XwcLookupString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XwcLookupString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XwcLookupString__
#define __TRACE_PRINTF_BODY_XwcLookupString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XwcLookupString, XIC, ic) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcLookupString, XKeyPressedEvent_p, event) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcLookupString, wchar_t_p, buffer_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcLookupString, int, wchars_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcLookupString, KeySym_p, keysym_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XwcLookupString, Status_p, status_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XwcLookupString__ 
__TRACE__(XwcLookupString)


/*
int Xutf8LookupString  // 6 args
    "XIC" "ic"
    "XKeyPressedEvent *" "event"
    "char *" "buffer_return"
    "int" "bytes_buffer"
    "KeySym *" "keysym_return"
    "Status *" "status_return"
*/
#define __TRACE_RETSTYLE_Xutf8LookupString__ TYPED
#define __TRACE_ARGSTYLE_Xutf8LookupString__ FIXED
#define __TRACE_SAFERETTYPE_Xutf8LookupString__ int
#define __TRACE_PROTOARGLIST_Xutf8LookupString__ ( XIC ic, XKeyPressedEvent * event, char * buffer_return, int bytes_buffer, KeySym * keysym_return, Status * status_return)
#define __TRACE_ARGLIST_Xutf8LookupString__ ( ic, event, buffer_return, bytes_buffer, keysym_return, status_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_Xutf8LookupString__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_Xutf8LookupString__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_Xutf8LookupString__
#define __TRACE_PRINTF_BODY_Xutf8LookupString__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, XIC, ic) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, XKeyPressedEvent_p, event) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, char_p, buffer_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, int, bytes_buffer) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, KeySym_p, keysym_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(Xutf8LookupString, Status_p, status_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_Xutf8LookupString__ 
__TRACE__(Xutf8LookupString)


/*
XVaNestedList XVaCreateNestedList  // 2 args
    "int" "unused"
    "..." "..."
*/
#define __TRACE_RETSTYLE_XVaCreateNestedList__ TYPED
#define __TRACE_ARGSTYLE_XVaCreateNestedList__ VAR
#define __TRACE_SAFERETTYPE_XVaCreateNestedList__ XVaNestedList
#define __TRACE_PROTOARGLIST_XVaCreateNestedList__ ( int unused, ...)
#define __TRACE_ARGLIST_XVaCreateNestedList__ ( unused, ...)
#define __TRACE_FIXEDARGLISTSTART_XVaCreateNestedList__ ( unused
#define __TRACE_FINALFIXEDARGNAME_XVaCreateNestedList__ unused
#define __TRACE_ADDITIONAL_LOCAL_VARS_XVaCreateNestedList__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XVaCreateNestedList__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XVaCreateNestedList__
#define __TRACE_PRINTF_BODY_XVaCreateNestedList__ \
    __TRACE_PRINTF_ARG__(XVaCreateNestedList, int, unused) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_VARARG__()
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XVaCreateNestedList__ 
__TRACE__(XVaCreateNestedList)


/*
Bool XRegisterIMInstantiateCallback  // 6 args
    "Display *" "dpy"
    "struct _XrmHashBucketRec *" "rdb"
    "char *" "res_name"
    "char *" "res_class"
    "XIDProc" "callback"
    "XPointer" "client_data"
*/
#define __TRACE_RETSTYLE_XRegisterIMInstantiateCallback__ TYPED
#define __TRACE_ARGSTYLE_XRegisterIMInstantiateCallback__ FIXED
#define __TRACE_SAFERETTYPE_XRegisterIMInstantiateCallback__ Bool
#define __TRACE_PROTOARGLIST_XRegisterIMInstantiateCallback__ ( Display * dpy, struct _XrmHashBucketRec * rdb, char * res_name, char * res_class, XIDProc callback, XPointer client_data)
#define __TRACE_ARGLIST_XRegisterIMInstantiateCallback__ ( dpy, rdb, res_name, res_class, callback, client_data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRegisterIMInstantiateCallback__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRegisterIMInstantiateCallback__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRegisterIMInstantiateCallback__
#define __TRACE_PRINTF_BODY_XRegisterIMInstantiateCallback__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, struct__XrmHashBucketRec_p, rdb) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, char_p, res_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, char_p, res_class) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, XIDProc, callback) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRegisterIMInstantiateCallback, XPointer, client_data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRegisterIMInstantiateCallback__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRegisterIMInstantiateCallback, Display_p, dpy)
__TRACE__(XRegisterIMInstantiateCallback)


/*
Bool XUnregisterIMInstantiateCallback  // 6 args
    "Display *" "dpy"
    "struct _XrmHashBucketRec *" "rdb"
    "char *" "res_name"
    "char *" "res_class"
    "XIDProc" "callback"
    "XPointer" "client_data"
*/
#define __TRACE_RETSTYLE_XUnregisterIMInstantiateCallback__ TYPED
#define __TRACE_ARGSTYLE_XUnregisterIMInstantiateCallback__ FIXED
#define __TRACE_SAFERETTYPE_XUnregisterIMInstantiateCallback__ Bool
#define __TRACE_PROTOARGLIST_XUnregisterIMInstantiateCallback__ ( Display * dpy, struct _XrmHashBucketRec * rdb, char * res_name, char * res_class, XIDProc callback, XPointer client_data)
#define __TRACE_ARGLIST_XUnregisterIMInstantiateCallback__ ( dpy, rdb, res_name, res_class, callback, client_data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XUnregisterIMInstantiateCallback__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XUnregisterIMInstantiateCallback__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XUnregisterIMInstantiateCallback__
#define __TRACE_PRINTF_BODY_XUnregisterIMInstantiateCallback__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, struct__XrmHashBucketRec_p, rdb) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, char_p, res_name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, char_p, res_class) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, XIDProc, callback) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XUnregisterIMInstantiateCallback, XPointer, client_data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XUnregisterIMInstantiateCallback__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XUnregisterIMInstantiateCallback, Display_p, dpy)
__TRACE__(XUnregisterIMInstantiateCallback)


/*
Status XInternalConnectionNumbers  // 3 args
    "Display *" "dpy"
    "int **" "fd_return"
    "int *" "count_return"
*/
#define __TRACE_RETSTYLE_XInternalConnectionNumbers__ TYPED
#define __TRACE_ARGSTYLE_XInternalConnectionNumbers__ FIXED
#define __TRACE_SAFERETTYPE_XInternalConnectionNumbers__ Status
#define __TRACE_PROTOARGLIST_XInternalConnectionNumbers__ ( Display * dpy, int ** fd_return, int * count_return)
#define __TRACE_ARGLIST_XInternalConnectionNumbers__ ( dpy, fd_return, count_return)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XInternalConnectionNumbers__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XInternalConnectionNumbers__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XInternalConnectionNumbers__
#define __TRACE_PRINTF_BODY_XInternalConnectionNumbers__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XInternalConnectionNumbers, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternalConnectionNumbers, int_pp, fd_return) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XInternalConnectionNumbers, int_p, count_return)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XInternalConnectionNumbers__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XInternalConnectionNumbers, Display_p, dpy)
__TRACE__(XInternalConnectionNumbers)


/*
void XProcessInternalConnection  // 2 args
    "Display *" "dpy"
    "int" "fd"
*/
#define __TRACE_RETSTYLE_XProcessInternalConnection__ VOID
#define __TRACE_ARGSTYLE_XProcessInternalConnection__ FIXED
#define __TRACE_SAFERETTYPE_XProcessInternalConnection__ void
#define __TRACE_PROTOARGLIST_XProcessInternalConnection__ ( Display * dpy, int fd)
#define __TRACE_ARGLIST_XProcessInternalConnection__ ( dpy, fd)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XProcessInternalConnection__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XProcessInternalConnection__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XProcessInternalConnection__
#define __TRACE_PRINTF_BODY_XProcessInternalConnection__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XProcessInternalConnection, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XProcessInternalConnection, int, fd)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XProcessInternalConnection__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XProcessInternalConnection, Display_p, dpy)
__TRACE__(XProcessInternalConnection)


/*
Status XAddConnectionWatch  // 3 args
    "Display *" "dpy"
    "XConnectionWatchProc" "callback"
    "XPointer" "client_data"
*/
#define __TRACE_RETSTYLE_XAddConnectionWatch__ TYPED
#define __TRACE_ARGSTYLE_XAddConnectionWatch__ FIXED
#define __TRACE_SAFERETTYPE_XAddConnectionWatch__ Status
#define __TRACE_PROTOARGLIST_XAddConnectionWatch__ ( Display * dpy, XConnectionWatchProc callback, XPointer client_data)
#define __TRACE_ARGLIST_XAddConnectionWatch__ ( dpy, callback, client_data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XAddConnectionWatch__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XAddConnectionWatch__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XAddConnectionWatch__
#define __TRACE_PRINTF_BODY_XAddConnectionWatch__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XAddConnectionWatch, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddConnectionWatch, XConnectionWatchProc, callback) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XAddConnectionWatch, XPointer, client_data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XAddConnectionWatch__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XAddConnectionWatch, Display_p, dpy)
__TRACE__(XAddConnectionWatch)


/*
void XRemoveConnectionWatch  // 3 args
    "Display *" "dpy"
    "XConnectionWatchProc" "callback"
    "XPointer" "client_data"
*/
#define __TRACE_RETSTYLE_XRemoveConnectionWatch__ VOID
#define __TRACE_ARGSTYLE_XRemoveConnectionWatch__ FIXED
#define __TRACE_SAFERETTYPE_XRemoveConnectionWatch__ void
#define __TRACE_PROTOARGLIST_XRemoveConnectionWatch__ ( Display * dpy, XConnectionWatchProc callback, XPointer client_data)
#define __TRACE_ARGLIST_XRemoveConnectionWatch__ ( dpy, callback, client_data)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XRemoveConnectionWatch__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XRemoveConnectionWatch__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XRemoveConnectionWatch__
#define __TRACE_PRINTF_BODY_XRemoveConnectionWatch__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XRemoveConnectionWatch, Display_p, dpy) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveConnectionWatch, XConnectionWatchProc, callback) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XRemoveConnectionWatch, XPointer, client_data)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XRemoveConnectionWatch__ \
    __TRACE_RUN_XFLUSH_XSYNC__(XRemoveConnectionWatch, Display_p, dpy)
__TRACE__(XRemoveConnectionWatch)


/*
void XSetAuthorization  // 4 args
    "char *" "name"
    "int" "namelen"
    "char *" "data"
    "int" "datalen"
*/
#define __TRACE_RETSTYLE_XSetAuthorization__ VOID
#define __TRACE_ARGSTYLE_XSetAuthorization__ FIXED
#define __TRACE_SAFERETTYPE_XSetAuthorization__ void
#define __TRACE_PROTOARGLIST_XSetAuthorization__ ( char * name, int namelen, char * data, int datalen)
#define __TRACE_ARGLIST_XSetAuthorization__ ( name, namelen, data, datalen)
#define __TRACE_ADDITIONAL_LOCAL_VARS_XSetAuthorization__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_XSetAuthorization__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_XSetAuthorization__
#define __TRACE_PRINTF_BODY_XSetAuthorization__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(XSetAuthorization, char_p, name) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetAuthorization, int, namelen) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetAuthorization, char_p, data) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(XSetAuthorization, int, datalen)
#define __TRACE_RUN_UNDERLYING_EPILOGUE_XSetAuthorization__ 
__TRACE__(XSetAuthorization)


/*
int _Xmbtowc  // 3 args
    "wchar_t *" "wstr"
    "char *" "str"
    "int" "len"
*/
#define __TRACE_RETSTYLE__Xmbtowc__ TYPED
#define __TRACE_ARGSTYLE__Xmbtowc__ FIXED
#define __TRACE_SAFERETTYPE__Xmbtowc__ int
#define __TRACE_PROTOARGLIST__Xmbtowc__ ( wchar_t * wstr, char * str, int len)
#define __TRACE_ARGLIST__Xmbtowc__ ( wstr, str, len)
#define __TRACE_ADDITIONAL_LOCAL_VARS__Xmbtowc__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING__Xmbtowc__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING__Xmbtowc__
#define __TRACE_PRINTF_BODY__Xmbtowc__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(_Xmbtowc, wchar_t_p, wstr) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(_Xmbtowc, char_p, str) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(_Xmbtowc, int, len)
#define __TRACE_RUN_UNDERLYING_EPILOGUE__Xmbtowc__ 
__TRACE__(_Xmbtowc)


/*
int _Xwctomb  // 2 args
    "char *" "str"
    "wchar_t" "wc"
*/
#define __TRACE_RETSTYLE__Xwctomb__ TYPED
#define __TRACE_ARGSTYLE__Xwctomb__ FIXED
#define __TRACE_SAFERETTYPE__Xwctomb__ int
#define __TRACE_PROTOARGLIST__Xwctomb__ ( char * str, wchar_t wc)
#define __TRACE_ARGLIST__Xwctomb__ ( str, wc)
#define __TRACE_ADDITIONAL_LOCAL_VARS__Xwctomb__
#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING__Xwctomb__
#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING__Xwctomb__
#define __TRACE_PRINTF_BODY__Xwctomb__ \
    always_reprint = 1; \
    __TRACE_PRINTF_ARG__(_Xwctomb, char_p, str) __PRINT_COMMA__(out) \
    __TRACE_PRINTF_ARG__(_Xwctomb, wchar_t, wc)
#define __TRACE_RUN_UNDERLYING_EPILOGUE__Xwctomb__ 
__TRACE__(_Xwctomb)


