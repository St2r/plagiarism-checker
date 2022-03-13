<template>
  <div>
    <MyHeader/>
    <v-btn>default</v-btn>
    <v-icon icon="home"/>
    <NuxtPage :foo="123"/>
  </div>
</template>

<script setup lang="ts">
  import MyHeader from '@/components/MyHeader'
</script>
