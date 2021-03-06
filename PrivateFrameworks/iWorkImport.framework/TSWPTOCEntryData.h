/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryData : TSPObject <TSPCopying> {
    NSString * _heading;
    unsigned long long  _indexedListStart;
    TSWPListStyle * _indexedListStyle;
    unsigned long long  _indexedParagraphLevel;
    TSWPParagraphStyle * _indexedStyle;
    int  _numberFormat;
    unsigned long long  _pageNumber;
    unsigned long long  _paragraphIndex;
}

@property (nonatomic, readonly) NSString *heading;
@property (nonatomic, readonly) unsigned long long indexedListStart;
@property (nonatomic, readonly) TSWPListStyle *indexedListStyle;
@property (nonatomic, readonly) unsigned long long indexedParagraphLevel;
@property (nonatomic, readonly) TSWPParagraphStyle *indexedStyle;
@property (nonatomic, readonly) int numberFormat;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) unsigned long long paragraphIndex;

+ (id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)heading;
- (unsigned long long)indexedListStart;
- (id)indexedListStyle;
- (unsigned long long)indexedParagraphLevel;
- (id)indexedStyle;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct TOCEntryInstanceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; unsigned int x9; unsigned int x10; struct Reference {} *x11; unsigned int x12; }*)arg1 unarchiver:(id)arg2;
- (int)numberFormat;
- (unsigned long long)pageNumber;
- (unsigned long long)paragraphIndex;
- (void)saveToArchive:(struct TOCEntryInstanceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; unsigned int x9; unsigned int x10; struct Reference {} *x11; unsigned int x12; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
