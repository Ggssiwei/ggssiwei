<template>
  <div id="app">
    <component1></component1>
    
    <component2></component2>
    
  </div>
</template>

<script>
import component1 from './component1'
import component2 from './component2'
import bus from './bus.js'
export default {
  components:{
    component1,
    component2
  }
}
</script>

<style>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
