<script setup lang="ts">
    const {foo} = defineProps<{foo?: string}>();  
</script>

<template>
    <h2>Compare Child</h2>
    <p>{{foo}}</p>
</template>