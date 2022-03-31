import { atom, selector } from 'recoil';
import React from 'react';
import { AddBox, AllInbox, Home, Person } from '@mui/icons-material';
import { ListSubheader, SxProps, Theme } from '@mui/material';
import { MatchedRouteState } from '@atoms/layout/route';

/**
 * 主页是否打开
 */
export const MenuOpenState = atom<boolean>({
  key: 'menu-open-state',
  default: false,
})

interface IMenuListItem {
  subHeader?: React.ReactNode,
  children: {
    sx?: SxProps<Theme>,
    icon?: React.ReactNode,
    title?: string,
    pathReg?: RegExp,
    pathName: string,
    selected?: boolean,
  }[],
}

export const MenuListState = atom<IMenuListItem[]>({
  key: 'menu-list',
  default: [
    {
      children: [
        {icon: <Home/>, title: '主页', pathReg: /\/home/, pathName: '/home'},
        {icon: <Person/>, title: '设置', pathReg: /\/profile/, pathName: '/profile'},
      ]
    },
    {
      subHeader: <ListSubheader>分析</ListSubheader>,
      children: [
        {icon: <AddBox/>, title: '新建分析', pathName: 'link://dialog?analyse_new'},
        {icon: <AllInbox/>, title: '全部分析', pathReg: /\/analyse\/all/, pathName: '/analyse/all'},
      ]
    },
    {
      subHeader: <ListSubheader>收藏</ListSubheader>,
      children: [
        {title: '收藏功能建设ing', sx: {pl: 4}, pathName: '/home'}
      ]
    }
  ],
})

export const MenuListSelector = selector<IMenuListItem[]>({
  key: 'menu-list-selector',
  get: ({get}) => {
    const menu = get(MenuListState);
    const match = get(MatchedRouteState);
    return menu.map(m => ({
      ...m,
      children: m.children.map(c => ({
        ...c,
        selected: c.pathReg?.test(match.pathname)
      }))
    }))
  }
})
