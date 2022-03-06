<script setup lang="ts">
    definePageMeta({
        middleware: [
            () => {
                console.log('>>> navigate')
                return navigateTo('/home')
            }
        ]
    })
</script>

<template>

    <h1>Compare Index</h1>
    <NuxtPage :foo="123" />
</template>