<template>
  <v-app>
    <v-app-bar
      color="primary"
      class="app-bar"
      height="48"
    >
      <div>H1</div>
    </v-app-bar>
    <v-navigation-drawer
      v-model="nav"
    >
      <div>This Drawer</div>
    </v-navigation-drawer>
    <v-main>
      <v-card style="background: black;height: 100%" tile>
        <slot />
      </v-card>
    </v-main>
  </v-app>
</template>

<script setup lang="ts">
  const nav = useState('nav', () => false)
</script>


<style scoped>
  .app-bar {
    width: 100vw;
  }
</style>

<style>
  body {
    height: 100vh;
  }
</style>
