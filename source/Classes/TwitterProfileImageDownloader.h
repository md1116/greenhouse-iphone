//
//  TwitterProfileImageDownloader.h
//  Greenhouse
//
//  Created by Roy Clarkson on 8/4/10.
//  Copyright 2010 VMware. All rights reserved.
//

#import <Foundation/Foundation.h>


@class Tweet;
@class RootViewController;


@protocol TwitterProfileImageDownloaderDelegate 

- (void)profileImageDidLoad:(NSIndexPath *)indexPath;

@end


@interface TwitterProfileImageDownloader : NSObject
{

}

@property (nonatomic, retain) Tweet *tweet;
@property (nonatomic, retain) NSIndexPath *indexPathInTableView;
@property (nonatomic, assign) id <TwitterProfileImageDownloaderDelegate> delegate;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSURLConnection *urlConnection;

- (void)startDownload;
- (void)cancelDownload;

@end