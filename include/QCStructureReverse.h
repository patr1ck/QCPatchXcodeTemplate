@interface QCStructureReverse : QCPatch
{
	QCStructurePort *inputStructure;	// 156 = 0x9c
	QCStructurePort *outputStructure;	// 160 = 0xa0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
