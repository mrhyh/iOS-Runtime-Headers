/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSString;



@interface GroupInfo : NSObject 
{
    void *_store;
    NSMutableArray *_calendars;
    NSString *_title;
    BOOL _selected;
}

@property void *store;
@property(copy,readonly) NSString *typeTitle;
@property(retain,readonly) NSArray *calendarInfos;
@property(copy,readonly) NSSet *calendarSet;
@property(copy,readonly) NSSet *selectedCalendarSet;
@property(readonly) NSInteger numCalendars;
@property(readonly) NSInteger numSelectedCalendars;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property(readonly) NSInteger sortOrder;
@property(readonly) BOOL isSubscribed;
@property BOOL selected;
@property(copy) NSString *title;


- (void)insertCalendarInfo:(id)arg1;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;
- (id)calendarInfos;
- (NSInteger)numCalendars;
- (NSInteger)numSelectedCalendars;
- (void*)calendarAtIndex:(NSInteger)arg1;
- (id)copyCalendars;
- (id)calendarSet;
- (id)selectedCalendarSet;
- (void)selectNone;
- (BOOL)showCalendarNameIfSolitary;
- (id)initWithStore:(void*)arg1;
- (void*)store;
- (void)setStore:(void*)arg1;
- (BOOL)isSubscribed;
- (BOOL)selected;
- (void)selectAll;
- (void)setSelected:(BOOL)arg1;
- (id)initWithTitle:(id)arg1;
- (id)title;
- (id)init;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (NSInteger)sortOrder;
- (void)removeCalendar:(id)arg1;

@end