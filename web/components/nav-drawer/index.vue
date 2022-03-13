<template>
  <v-navigation-drawer v-model="menuShown" width="200" :permanent="false">
    <v-list density="compact" flat>
      <v-list-subheader>REPORTS</v-list-subheader>
      <v-list-item
        v-for="(item, i) in items"
        :key="i"
        :value="item"
        active-color="primary"
      >
        <v-list-item-avatar left>
          <v-icon :icon="item.icon"></v-icon>
        </v-list-item-avatar>
        <v-list-item-title v-text="item.text"></v-list-item-title>
      </v-list-item>
    </v-list>
  </v-navigation-drawer>
</template>

<script setup lang="ts">
  defineProps<{
    menuShown: boolean
  }>()

  const items = [
    {text: "Real-Time", icon: "flag"},
    {text: "Audience", icon: "account"},
    {text: "Conversions", icon: "flag"},
  ];
</script>

<style scoped>

</style>