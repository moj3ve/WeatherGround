#include <Weather/City.h>
#include <Weather/TWCCityUpdater.h>
#include <Weather/WeatherPreferences.h>
#include <SpringBoardFoundation/SBFStaticWallpaperView.h>
#include <SpringBoard/SBCoverSheetPanelBackgroundContainerView.h>
#include <SpringBoard/SBWallpaperEffectView.h>


@interface WUIWeatherCondition : NSObject <CALayerDelegate>
@property (assign,nonatomic) City * city;
@end

@interface WUIDynamicWeatherBackground : UIView 
@property (nonatomic,retain) WUIWeatherCondition * condition; 
- (id)initWithFrame:(CGRect)arg1 ;
- (void)setCity:(id)arg1 ;
@end

@interface SBFStaticWallpaperView (WG)
@property (nonatomic, strong) WUIDynamicWeatherBackground *bgView; 
@property (nonatomic, strong) City *myCity; 
@end

@interface UIView (Private)
-(id)_viewControllerForAncestor;
@end

@interface SBFWallpaperView (Private)
@property (nonatomic,retain) UIView * contentView;     
@end