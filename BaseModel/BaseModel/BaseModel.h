//
//  BaseModel.h
//  BaseModel
//
//  Created by maple on 16/3/17.
//  Copyright © 2016年 MapleDong. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface BaseModel : NSObject
@property (nonatomic, strong) NSMutableArray *undefineValueArray;

//给类中的属性一一赋字典的值
-(BOOL)CreatClasswithNSObject:(NSObject*)dataSource;
//设置 属性中有但是字典中没有的字段名字
-(NSString*)changgeWith:(NSString*)key;
//通过jeseon字符串将字典转换为数组
+(NSMutableArray*)ArrayWithJesonData:(id)jseonData;
-(NSDictionary*)valueForUnDefine;
-(NSMutableArray*)getUnDefineKey;

@end
