<script setup lang="ts">
  import { onMounted } from '@vue/runtime-core';

  onMounted(() => {
    window.alert("ssss")
  })

</script>

<template>
  <div>
    <MyHeader/>
    <v-btn>default</v-btn>
    <NuxtPage :foo="123"/>
  </div>
</template>
