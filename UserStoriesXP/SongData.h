/*
//  SongData.h
//  AVSimplePlayer
The MIT License (MIT)
Copyright (c) 2014 Anuj Deshmukh (anuj.deshmukh7@gmail.com & www.linkedin.com/pub/anuj-deshmukh/17/16b/56a/)
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#import <AVFoundation/AVFoundation.h>


@interface SongData : NSObject  {
}

@property (nonatomic,retain) NSString * strSongURL;
@property (nonatomic,retain) NSURL *fileURL;
@property (nonatomic,retain) NSString * strTime;
@property (nonatomic,retain) NSString * strComment;
@property (nonatomic,retain) NSString *strTitle;
@property (nonatomic,retain) NSString *strCreator;
@property (nonatomic,retain) NSString *strSubject;
@property (nonatomic,retain) NSString *strDescription;
@property (nonatomic,retain) NSString *strPublisher;
@property (nonatomic,retain) NSString *strContributor;
@property (nonatomic,retain) NSString *strType;
@property (nonatomic,retain) NSString *strCopyRights;
@property (nonatomic,retain) NSString *strAlbumName;
@property (nonatomic,retain) NSString *strAuthor;
@property (nonatomic,retain) NSString *strArtist;
@property (nonatomic,retain) AVAsset *songAsset;
@property (nonatomic,retain) NSString *strYear;


+(SongData*) initWithSongURL:(NSURL*)urlSong;

@end
