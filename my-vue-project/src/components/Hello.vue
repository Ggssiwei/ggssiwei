<template>
  <div class="hello">
    <h1>{{msg}}</h1>
    <button v-on:click="onClickMe">Click!</button>
  </div>
</template>

<script>
export default {
  data: function () {
    return {
      msg: '点击按钮删除所有条目！'
    }
  },
  methods: {
    onClickMe: function (){
      Store.del(items);
    }
  },
  //props: [],
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
h1, h2 {
  font-weight: normal;
  color: #42b983;
}

ul {
  list-style-type: none;
  padding: 0;
}

li {
  display: inline-block;
  margin: 0 10px;
}

</style>
