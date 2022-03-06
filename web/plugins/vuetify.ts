import { defineNuxtPlugin } from '#app'
import { createVuetify, ThemeDefinition } from 'vuetify'
import * as components from 'vuetify/components'

const myCustomLightTheme: ThemeDefinition = {
  dark: false,
  colors: {
    background: '#FFFFFF',
    surface: '#FFFFFF',
    primary: '#7433d4',
    secondary: '#03DAC6',
    success: '#4CAF50',
    info: '#2196F3',
    warning: '#FB8C00',
    error: '#B00020',
  }
}

export default defineNuxtPlugin((nuxtApp) => {
  const vuetify = createVuetify({
    components,
    theme: {
      defaultTheme: 'myCustomLightTheme',
      themes: {
        myCustomLightTheme,
      }
    }
  })
  nuxtApp.vueApp.use(vuetify)
})