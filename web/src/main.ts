import { createApp } from 'vue'
import App from './App.vue'
import { createPinia } from "pinia";
import VueRouter from 'vue-router';

const pinia = createPinia()

createApp(App)
  .use(pinia)
  .use(VueRouter)
  .mount('#app')
