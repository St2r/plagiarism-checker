<template>
  <v-app>
    <AppBar
      v-model:menu-shown="drawerOpen"
    />
    <NavDrawer
      v-model:menu-shown="drawerOpen"
    />
    <v-main>
      <slot/>
    </v-main>

    <v-tooltip anchor="top">
      <template v-slot:activator="{props}">
        <v-btn
          class="float-new"
          icon="add"
          color="primary"
          v-bind="props"
        />
      </template>
      <span>新增对比</span>
    </v-tooltip>
  </v-app>
</template>

<script setup lang="ts">
  import AppBar from '@/components/app-bar'
  import NavDrawer from '@/components/nav-drawer'

  import { ref } from 'vue';

  const drawerOpen = ref(false);

  const test = (props: any) => console.log(props);
</script>

<style scoped lang="scss">
  .float-new {
    position: fixed;
    right: 40px;
    bottom: 40px;

    &:hover {
      // 加一点旋转，再加一点鸡精
      transform: rotate(90deg);
    }
  }
</style>
