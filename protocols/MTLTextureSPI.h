/* Generated by RuntimeBrowser.
 */

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>

@required

- (struct __IOSurface { }*)iosurface;
- (unsigned int)iosurfacePlane;
- (BOOL)isDrawable;
- (unsigned int)numFaces;
- (unsigned int)rotation;

@optional

- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 bytesPerImage:(unsigned int)arg3 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned int)arg5 slice:(unsigned int)arg6 options:(unsigned int)arg7;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 slice:(unsigned int)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned int)arg5 bytesPerImage:(unsigned int)arg6 options:(unsigned int)arg7;

@end