<template>
  <v-app-bar app color="primary" class="app-bar">
    <v-btn @click="handleMenuClick" icon="menu"/>
    <div>查重系统</div>
    <v-icon icon="fingerprint"/>
  </v-app-bar>
</template>

<script setup lang="ts">
  import throttle from 'lodash/throttle';

  const props = defineProps<{
    menuShown: boolean
  }>();
  const emits = defineEmits<{
    (e: 'update:menuShown', v: boolean): void
  }>();

  const handleMenuClick = throttle(() => {
    emits('update:menuShown', !props.menuShown)
  }, 500, {tailing: false})
</script>
