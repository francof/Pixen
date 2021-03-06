//
//  PXDocumentController.h
//  Pixen
//

@interface PXDocumentController: NSDocumentController
{
  @private
	BOOL cachedShowsPreviousCelOverlay;
}

- (IBAction)displayHelp:(id)sender;

- (IBAction)newFromClipboard:sender;

- (BOOL)showsPreviousCelOverlay;

- (id)makeUntitledDocumentOfType:(NSString *)typeName showSizePrompt:(BOOL)showPrompt error:(NSError **)outError;

- (IBAction)newAnimationDocument:sender;

@end

